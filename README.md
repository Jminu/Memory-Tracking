# VmWatcher
**Real-time Process Memory Profiler with Kernel-level System Call Hooking**

Linux 커널의 메모리 관리 시스템 콜을 실시간으로 후킹하여 프로세스의 메모리 사용 패턴을 추적하는 프로파일링 도구

## 프로젝트 배경

### 문제 인식
+ 기존 ptrace 기반 메모리 모니터링 도구의 한계
+ 타겟 프로세스가 매 시스템 콜마다 정지
+ 실시간 모니터링 불가능
+ 타겟 CPU아키텍쳐마다 시스템콜 저장 레지스터가 다름

### 해결 방안
+ 메모리 관리 핵심 시스템 콜 직접 수정 (brk, mmap, munmap, page_fault)
+ Netlink 소켓 기반 커널-유저 공간 통신
+ 멀티프로세스 + Non-blocking 파이프로 고부하 환경 대응

## 주요 기능

### 1. 실시간 메모리 추적
+ brk
+ mmap
+ munmap
+ page fault

### 2. 상세 메모리 정보
+ VmSize - 가상 메모리 크기
+ VmRSS - 실제 물리 메모리 사용량
+ VmData - 힙 영역 크기
+ 실시간 메모리 사용률 그래프

### 3. 고성능 아키텍쳐
+ 커널 레벨 후킹
+ Netlink 소켓 비동기 통신
+ 멀티프로세스 구조
+ Non-blocking 파이프 + 흐름제어

## 구조
### Kernel
+ netlink socket 드라이버 구현
+ 시스템 콜 발생 시 유저단으로 소켓 통신

### User
+ 멀티프로세싱 (Proc1, Proc2)
+ Proc1
  + 커널에서 소켓 송신 대기
  + 정보를 pipe 통해서 Proc2로 전달
+ Proc2
  + Proc1에서 전달받은 데이터 활용, /proc/[PID]탐색 후 status 정보 파싱
  + UI출력 및 로깅
 

### 실행 화면
<img width="587" height="134" alt="스크린샷 2025-11-02 오후 11 25 09" src="https://github.com/user-attachments/assets/cbd7aeee-bd10-4bbc-80e8-af1bb17f2b50" />


### 생성된 로그
<img width="583" height="359" alt="스크린샷 2025-11-02 오후 11 26 48" src="https://github.com/user-attachments/assets/f19b2c84-0759-40dd-9ffa-b239a4b13d75" />
