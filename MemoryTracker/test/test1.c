#include <stdio.h>
#include <stdlib.h>
#include <unistd.h> // fork()와 sleep()을 위해 필요
#include <string.h> // memset을 위해 필요

// 테스트할 메모리 블록의 크기 (KB 단위)
#define BLOCK_SIZE_KB 1024
#define NUM_BLOCKS 5
#define ALLOC_SIZE (BLOCK_SIZE_KB * 1024) // 1MB * 5 = 5MB

// 테스트할 프로세스의 PID를 관측 프로그램에 알리기 위해 사용될 수 있습니다.
// 이 프로그램의 PID를 출력합니다.
void print_self_pid() {
    printf("[TEST] Self PID: %d\n", getpid());
    printf("[TEST] Waiting 5 seconds for monitor to attach...\n");
    fflush(stdout);
    sleep(5); // 모니터링 프로그램이 준비될 시간을 줍니다.
}

void allocate_and_access_memory() {
    char *memory_blocks[NUM_BLOCKS];
    
    printf("\n[STEP 1] Starting Memory Allocation (Total %d MB)\n", (ALLOC_SIZE / 1024 / 1024) * NUM_BLOCKS);
    
    // --- 1. 메모리 할당 (VmSize 증가 유도) ---
    for (int i = 0; i < NUM_BLOCKS; i++) {
        printf("[ALLOC] Allocating %d KB block #%d...\n", BLOCK_SIZE_KB, i + 1);
        fflush(stdout);
        
        // malloc을 사용하여 힙 영역 확장을 유도합니다. (내부적으로 brk 또는 mmap 호출)
        memory_blocks[i] = (char *)malloc(ALLOC_SIZE); 
        
        if (memory_blocks[i] == NULL) {
            perror("malloc failed");
            exit(EXIT_FAILURE);
        }
        
        // 🚨 핵심: 할당 직후, 메모리에 데이터를 쓰지 않고 잠시 멈춥니다.
        // 이 시점에 VmSize는 증가하지만, VmRSS는 증가하지 않아 비율이 낮습니다.
        sleep(1); 
    }
    
    printf("\n[STATUS 1] All memory allocated. VmSize should be HIGH, VmRSS should be LOW.\n");
    printf("[TEST] Waiting 5 seconds before accessing allocated memory...\n");
    fflush(stdout);
    sleep(5);

    // --- 2. 메모리 접근 (VmRSS 증가 유도) ---
    printf("\n[STEP 2] Accessing allocated memory to force VmRSS increase.\n");
    for (int i = 0; i < NUM_BLOCKS; i++) {
        // memset으로 할당된 메모리 전체를 0으로 초기화합니다.
        // 🚨 핵심: 이 쓰기 작업이 페이지 폴트를 유발하여 실제 RAM 할당(VmRSS 증가)을 강제합니다.
        memset(memory_blocks[i], 0, ALLOC_SIZE);
        printf("[ACCESS] Accessed block #%d. VmRSS should be increasing...\n", i + 1);
        fflush(stdout);
        sleep(1);
    }

    printf("\n[STATUS 2] All memory accessed. VmRSS should now be HIGH (close to VmSize).\n");
    printf("[TEST] Waiting 10 seconds before freeing memory...\n");
    fflush(stdout);
    sleep(10);
    
    // --- 3. 메모리 해제 ---
    printf("\n[STEP 3] Freeing memory.\n");
    for (int i = 0; i < NUM_BLOCKS; i++) {
        free(memory_blocks[i]);
        printf("[FREE] Freed block #%d.\n", i + 1);
        fflush(stdout);
    }
    
    printf("\n[END] Test finished. VmSize and VmRSS should decrease. Exiting.\n");
    fflush(stdout);
}

int main() {
    print_self_pid();
    allocate_and_access_memory();
    return 0;
}
