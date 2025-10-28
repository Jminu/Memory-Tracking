#include <stdio.h>
#include <stdlib.h>
#include <unistd.h> // getpid, usleep
#include <string.h> // memset
#include <time.h>   // time, srand

// --- 설정 상수 ---
#define BLOCK_SIZE_KB 512        // 각 블록의 크기 (512 KB)
#define NUM_ALLOCS    20         // 총 20번의 할당 (10초 할당, 10초 접근)
#define BLOCK_SIZE (BLOCK_SIZE_KB * 1024) // 512 * 1024 Bytes

// 관측 주기 (100ms)
#define OBSERVE_DELAY_US 100000 // 100ms = 100,000 microseconds

void print_self_pid() {
    printf("=========================================\n");
    printf("[TEST START] Self PID: %d\n", getpid());
    printf("[TEST] This test runs for ~20 seconds.\n");
    printf("[TEST] Waiting 3 seconds for monitor setup...\n");
    printf("=========================================\n");
    fflush(stdout);
    sleep(10); 
}

void continuous_fast_memory_test() {
    char *memory_blocks[NUM_ALLOCS];
    
    printf("\n--- STEP 1: Fast Continuous Allocation (VmSize Increase) ---\n");
    
    // 1. 연속 메모리 할당 (VmSize 증가 유도)
    for (int i = 0; i < NUM_ALLOCS; i++) {
        printf("[ALLOC %02d/%d] Allocating %d KB...\n", i + 1, NUM_ALLOCS, BLOCK_SIZE_KB);
        fflush(stdout);
        
        // 🚨 VmSize 증가 유도
        memory_blocks[i] = (char *)malloc(BLOCK_SIZE); 
        
        if (memory_blocks[i] == NULL) {
            perror("malloc failed");
            exit(EXIT_FAILURE);
        }
        
        // 100ms 지연 후 다음 할당 (VmSize가 연속적으로 빠르게 증가)
        usleep(OBSERVE_DELAY_US); 
    }
    
    printf("\n[STATUS 1] All blocks allocated. VmSize HIGH, VmRSS LOW.\n");
    printf("[TEST] Starting data access in 3 seconds...\n");
    fflush(stdout);
    sleep(3);

    // 2. 연속 데이터 접근 (VmRSS 증가 유도)
    printf("\n--- STEP 2: Fast Continuous Data Access (VmRSS Increase) ---\n");
    
    srand(time(NULL)); 
    
    for (int i = 0; i < NUM_ALLOCS; i++) {
        printf("[ACCESS %02d/%d] Writing to block #%d...\n", i + 1, NUM_ALLOCS, i + 1);
        fflush(stdout);
        
        // 🚨 VmRSS 증가 강제: memset으로 메모리에 쓰기 작업 수행
        memset(memory_blocks[i], (rand() % 256), BLOCK_SIZE);
        
        // 100ms 지연 후 다음 접근 (VmRSS가 연속적으로 빠르게 증가)
        usleep(OBSERVE_DELAY_US); 
    }

    printf("\n[STATUS 2] All blocks accessed. VmRSS should now be HIGH.\n");
    printf("--------------------------------------------------\n");
    printf("[TEST END] Waiting 3 seconds before cleanup...\n");
    fflush(stdout);
    sleep(3);
    
    // 3. 메모리 해제
    printf("\n--- STEP 3: Freeing Memory ---\n");
    for (int i = 0; i < NUM_ALLOCS; i++) {
        free(memory_blocks[i]);
    }
    printf("[END] Test finished. Exiting.\n");
    fflush(stdout);
}

int main() {
    print_self_pid();
    continuous_fast_memory_test();
    return 0;
}
