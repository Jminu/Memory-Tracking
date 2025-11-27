# VmWatcher
**Real-time Process Memory Profiler with Kernel-level System Call Hooking**

Linux 커널의 메모리 관리 시스템 콜을 실시간으로 후킹하여 프로세스의 메모리 사용 패턴을 추적하는 프로파일링 도구
### 실시간 측정
![테스트영상](https://github.com/user-attachments/assets/1c70449a-d5c2-4cf2-b4df-3983364b5d11)

### 로그 기록
![화면 기록 2025-11-28 오전 2 02 43](https://github.com/user-attachments/assets/184212f7-785d-481a-916d-5c5c16984556)


## 프로젝트 배경

### 문제 인식: ptrace 방식의 한계
+ 타겟 프로세스가 매 시스템 콜마다 정지
+ 실시간 모니터링 불가능
+ CPU 아키텍쳐 의존성 (ARM64 vs x86 레지스터 차이)

### 해결 방안: 커널 레벨 후킹 
+ 메모리 관리 핵심 시스템 콜 직접 수정 (brk, mmap, munmap, page_fault)
+ Netlink 소켓 기반 커널-유저 공간 통신
+ 멀티프로세스 역할 분리
+ Non-blocking 파이프로 고부하 환경 대응

### 성과
+ 처리량: 초당 약 1,600개 이벤트 안정적 처리
+ 실시간성 확보
+ 안정성: 고부하 시 데이터 드롭으로 시스템 보호

## 주요 기능

### 1. 실시간 메모리 추적
+ brk - 힙 영역 확장
+ mmap - 메모리 매핑
+ munmap - 메모리 해제
+ page fault - 페이지 폴트

### 2. 상세 메모리 정보
+ VmSize - 가상 메모리 크기
+ VmRSS - 실제 물리 메모리 사용량
+ VmData - 힙 영역 크기
+ 실시간 메모리 사용률 그래프
+ 시스템 콜 횟수 (brk/mmap/munmap/page_fault)

### 3. 고성능 아키텍쳐
+ 커널 레벨 후킹
+ Netlink 소켓 비동기 통신
+ 멀티프로세스 구조
+ Non-blocking 파이프 + 흐름제어 (넷링크 큐 포화 대응)

## 구조
<img width="612" height="383" alt="그림1" src="https://github.com/user-attachments/assets/722d9325-f275-40fc-a521-e5f91cf5dcef" />

### Kernel
+ Netlink Socket 빌트인 모듈 구현
+ 시스템 콜 발생 시 유저단으로 시스템 콜 정보 전송

### User
+ 멀티프로세싱 (Process1, Process2)
+ Process1
  + 커널에서 소켓 송신 대기
  + 정보를 pipe 통해서 Process2로 전달
+ Process2
  + Process1에서 전달받은 데이터 활용, /proc/[PID]탐색 후 status 정보 파싱
  + UI출력 및 로깅
 

### 실행 화면
<img width="587" height="134" alt="스크린샷 2025-11-02 오후 11 25 09" src="https://github.com/user-attachments/assets/cbd7aeee-bd10-4bbc-80e8-af1bb17f2b50" />


### 생성된 로그
<img width="583" height="359" alt="스크린샷 2025-11-02 오후 11 26 48" src="https://github.com/user-attachments/assets/f19b2c84-0759-40dd-9ffa-b239a4b13d75" />
