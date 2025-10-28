# tracer: function
#
# entries-in-buffer/entries-written: 1314/1314   #P:4
#
#                                _-----=> irqs-off/BH-disabled
#                               / _----=> need-resched
#                              | / _---=> hardirq/softirq
#                              || / _--=> preempt-depth
#                              ||| / _-=> migrate-disable
#                              |||| /     delay
#           TASK-PID     CPU#  |||||  TIMESTAMP  FUNCTION
#              | |         |   |||||     |         |
 set_ftrace_mall-16860   [002] ..... 493881.405382: __arm64_sys_write+0x4/0x40 <-invoke_syscall+0x50/0x120
 set_ftrace_mall-16860   [002] ..... 493881.405385: <stack trace>
 => __arm64_sys_write+0x8/0x40
 => invoke_syscall+0x50/0x120
 => el0_svc_common.constprop.0+0x48/0xf0
 => do_el0_svc+0x24/0x38
 => el0_svc+0x30/0xf8
 => el0t_64_sync_handler+0x120/0x130
 => el0t_64_sync+0x190/0x198
    sshd-session-16754   [000] ..... 493881.405465: __arm64_sys_write+0x4/0x40 <-invoke_syscall+0x50/0x120
    sshd-session-16754   [000] ..... 493881.405466: <stack trace>
 => __arm64_sys_write+0x8/0x40
 => invoke_syscall+0x50/0x120
 => el0_svc_common.constprop.0+0x48/0xf0
 => do_el0_svc+0x24/0x38
 => el0_svc+0x30/0xf8
 => el0t_64_sync_handler+0x120/0x130
 => el0t_64_sync+0x190/0x198
            bash-16773   [003] ..... 493881.406120: __arm64_sys_write+0x4/0x40 <-invoke_syscall+0x50/0x120
            bash-16773   [003] ..... 493881.406123: <stack trace>
 => __arm64_sys_write+0x8/0x40
 => invoke_syscall+0x50/0x120
 => el0_svc_common.constprop.0+0x48/0xf0
 => do_el0_svc+0x24/0x38
 => el0_svc+0x30/0xf8
 => el0t_64_sync_handler+0x120/0x130
 => el0t_64_sync+0x190/0x198
            bash-16773   [003] ..... 493881.406169: __arm64_sys_write+0x4/0x40 <-invoke_syscall+0x50/0x120
            bash-16773   [003] ..... 493881.406170: <stack trace>
 => __arm64_sys_write+0x8/0x40
 => invoke_syscall+0x50/0x120
 => el0_svc_common.constprop.0+0x48/0xf0
 => do_el0_svc+0x24/0x38
 => el0_svc+0x30/0xf8
 => el0t_64_sync_handler+0x120/0x130
 => el0t_64_sync+0x190/0x198
    sshd-session-16754   [000] ..... 493881.406257: __arm64_sys_write+0x4/0x40 <-invoke_syscall+0x50/0x120
    sshd-session-16754   [000] ..... 493881.406258: <stack trace>
 => __arm64_sys_write+0x8/0x40
 => invoke_syscall+0x50/0x120
 => el0_svc_common.constprop.0+0x48/0xf0
 => do_el0_svc+0x24/0x38
 => el0_svc+0x30/0xf8
 => el0t_64_sync_handler+0x120/0x130
 => el0t_64_sync+0x190/0x198
  NetworkManager-649     [002] ..... 493885.762073: __arm64_sys_write+0x4/0x40 <-invoke_syscall+0x50/0x120
  NetworkManager-649     [002] ..... 493885.762082: <stack trace>
 => __arm64_sys_write+0x8/0x40
 => invoke_syscall+0x50/0x120
 => el0_svc_common.constprop.0+0x48/0xf0
 => do_el0_svc+0x24/0x38
 => el0_svc+0x30/0xf8
 => el0t_64_sync_handler+0x120/0x130
 => el0t_64_sync+0x190/0x198
  NetworkManager-649     [002] ..... 493891.762135: __arm64_sys_write+0x4/0x40 <-invoke_syscall+0x50/0x120
  NetworkManager-649     [002] ..... 493891.762143: <stack trace>
 => __arm64_sys_write+0x8/0x40
 => invoke_syscall+0x50/0x120
 => el0_svc_common.constprop.0+0x48/0xf0
 => do_el0_svc+0x24/0x38
 => el0_svc+0x30/0xf8
 => el0t_64_sync_handler+0x120/0x130
 => el0t_64_sync+0x190/0x198
  NetworkManager-649     [002] ..... 493897.762133: __arm64_sys_write+0x4/0x40 <-invoke_syscall+0x50/0x120
  NetworkManager-649     [002] ..... 493897.762141: <stack trace>
 => __arm64_sys_write+0x8/0x40
 => invoke_syscall+0x50/0x120
 => el0_svc_common.constprop.0+0x48/0xf0
 => do_el0_svc+0x24/0x38
 => el0_svc+0x30/0xf8
 => el0t_64_sync_handler+0x120/0x130
 => el0t_64_sync+0x190/0x198
    avahi-daemon-592     [000] ..... 493902.816733: __arm64_sys_write+0x4/0x40 <-invoke_syscall+0x50/0x120
    avahi-daemon-592     [000] ..... 493902.816739: <stack trace>
 => __arm64_sys_write+0x8/0x40
 => invoke_syscall+0x50/0x120
 => el0_svc_common.constprop.0+0x48/0xf0
 => do_el0_svc+0x24/0x38
 => el0_svc+0x30/0xf8
 => el0t_64_sync_handler+0x120/0x130
 => el0t_64_sync+0x190/0x198
    avahi-daemon-592     [000] ..... 493902.816758: __arm64_sys_write+0x4/0x40 <-invoke_syscall+0x50/0x120
    avahi-daemon-592     [000] ..... 493902.816760: <stack trace>
 => __arm64_sys_write+0x8/0x40
 => invoke_syscall+0x50/0x120
 => el0_svc_common.constprop.0+0x48/0xf0
 => do_el0_svc+0x24/0x38
 => el0_svc+0x30/0xf8
 => el0t_64_sync_handler+0x120/0x130
 => el0t_64_sync+0x190/0x198
    avahi-daemon-592     [000] ..... 493902.816792: __arm64_sys_write+0x4/0x40 <-invoke_syscall+0x50/0x120
    avahi-daemon-592     [000] ..... 493902.816795: <stack trace>
 => __arm64_sys_write+0x8/0x40
 => invoke_syscall+0x50/0x120
 => el0_svc_common.constprop.0+0x48/0xf0
 => do_el0_svc+0x24/0x38
 => el0_svc+0x30/0xf8
 => el0t_64_sync_handler+0x120/0x130
 => el0t_64_sync+0x190/0x198
    avahi-daemon-592     [000] ..... 493902.816799: __arm64_sys_write+0x4/0x40 <-invoke_syscall+0x50/0x120
    avahi-daemon-592     [000] ..... 493902.816801: <stack trace>
 => __arm64_sys_write+0x8/0x40
 => invoke_syscall+0x50/0x120
 => el0_svc_common.constprop.0+0x48/0xf0
 => do_el0_svc+0x24/0x38
 => el0_svc+0x30/0xf8
 => el0t_64_sync_handler+0x120/0x130
 => el0t_64_sync+0x190/0x198
    avahi-daemon-592     [000] ..... 493903.322378: __arm64_sys_write+0x4/0x40 <-invoke_syscall+0x50/0x120
    avahi-daemon-592     [000] ..... 493903.322381: <stack trace>
 => __arm64_sys_write+0x8/0x40
 => invoke_syscall+0x50/0x120
 => el0_svc_common.constprop.0+0x48/0xf0
 => do_el0_svc+0x24/0x38
 => el0_svc+0x30/0xf8
 => el0t_64_sync_handler+0x120/0x130
 => el0t_64_sync+0x190/0x198
    avahi-daemon-592     [000] ..... 493903.322389: __arm64_sys_write+0x4/0x40 <-invoke_syscall+0x50/0x120
    avahi-daemon-592     [000] ..... 493903.322391: <stack trace>
 => __arm64_sys_write+0x8/0x40
 => invoke_syscall+0x50/0x120
 => el0_svc_common.constprop.0+0x48/0xf0
 => do_el0_svc+0x24/0x38
 => el0_svc+0x30/0xf8
 => el0t_64_sync_handler+0x120/0x130
 => el0t_64_sync+0x190/0x198
    avahi-daemon-592     [000] ..... 493903.322412: __arm64_sys_write+0x4/0x40 <-invoke_syscall+0x50/0x120
    avahi-daemon-592     [000] ..... 493903.322414: <stack trace>
 => __arm64_sys_write+0x8/0x40
 => invoke_syscall+0x50/0x120
 => el0_svc_common.constprop.0+0x48/0xf0
 => do_el0_svc+0x24/0x38
 => el0_svc+0x30/0xf8
 => el0t_64_sync_handler+0x120/0x130
 => el0t_64_sync+0x190/0x198
    avahi-daemon-592     [000] ..... 493903.322419: __arm64_sys_write+0x4/0x40 <-invoke_syscall+0x50/0x120
    avahi-daemon-592     [000] ..... 493903.322421: <stack trace>
 => __arm64_sys_write+0x8/0x40
 => invoke_syscall+0x50/0x120
 => el0_svc_common.constprop.0+0x48/0xf0
 => do_el0_svc+0x24/0x38
 => el0_svc+0x30/0xf8
 => el0t_64_sync_handler+0x120/0x130
 => el0t_64_sync+0x190/0x198
  NetworkManager-649     [002] ..... 493903.762279: __arm64_sys_write+0x4/0x40 <-invoke_syscall+0x50/0x120
  NetworkManager-649     [002] ..... 493903.762285: <stack trace>
 => __arm64_sys_write+0x8/0x40
 => invoke_syscall+0x50/0x120
 => el0_svc_common.constprop.0+0x48/0xf0
 => do_el0_svc+0x24/0x38
 => el0_svc+0x30/0xf8
 => el0t_64_sync_handler+0x120/0x130
 => el0t_64_sync+0x190/0x198
    avahi-daemon-592     [000] ..... 493904.103288: __arm64_sys_write+0x4/0x40 <-invoke_syscall+0x50/0x120
    avahi-daemon-592     [000] ..... 493904.103293: <stack trace>
 => __arm64_sys_write+0x8/0x40
 => invoke_syscall+0x50/0x120
 => el0_svc_common.constprop.0+0x48/0xf0
 => do_el0_svc+0x24/0x38
 => el0_svc+0x30/0xf8
 => el0t_64_sync_handler+0x120/0x130
 => el0t_64_sync+0x190/0x198
    avahi-daemon-592     [000] ..... 493904.103305: __arm64_sys_write+0x4/0x40 <-invoke_syscall+0x50/0x120
    avahi-daemon-592     [000] ..... 493904.103307: <stack trace>
 => __arm64_sys_write+0x8/0x40
 => invoke_syscall+0x50/0x120
 => el0_svc_common.constprop.0+0x48/0xf0
 => do_el0_svc+0x24/0x38
 => el0_svc+0x30/0xf8
 => el0t_64_sync_handler+0x120/0x130
 => el0t_64_sync+0x190/0x198
    avahi-daemon-592     [000] ..... 493904.103335: __arm64_sys_write+0x4/0x40 <-invoke_syscall+0x50/0x120
    avahi-daemon-592     [000] ..... 493904.103337: <stack trace>
 => __arm64_sys_write+0x8/0x40
 => invoke_syscall+0x50/0x120
 => el0_svc_common.constprop.0+0x48/0xf0
 => do_el0_svc+0x24/0x38
 => el0_svc+0x30/0xf8
 => el0t_64_sync_handler+0x120/0x130
 => el0t_64_sync+0x190/0x198
    avahi-daemon-592     [000] ..... 493904.103342: __arm64_sys_write+0x4/0x40 <-invoke_syscall+0x50/0x120
    avahi-daemon-592     [000] ..... 493904.103343: <stack trace>
 => __arm64_sys_write+0x8/0x40
 => invoke_syscall+0x50/0x120
 => el0_svc_common.constprop.0+0x48/0xf0
 => do_el0_svc+0x24/0x38
 => el0_svc+0x30/0xf8
 => el0t_64_sync_handler+0x120/0x130
 => el0t_64_sync+0x190/0x198
    avahi-daemon-592     [000] ..... 493904.654956: __arm64_sys_write+0x4/0x40 <-invoke_syscall+0x50/0x120
    avahi-daemon-592     [000] ..... 493904.654960: <stack trace>
 => __arm64_sys_write+0x8/0x40
 => invoke_syscall+0x50/0x120
 => el0_svc_common.constprop.0+0x48/0xf0
 => do_el0_svc+0x24/0x38
 => el0_svc+0x30/0xf8
 => el0t_64_sync_handler+0x120/0x130
 => el0t_64_sync+0x190/0x198
    avahi-daemon-592     [000] ..... 493904.654968: __arm64_sys_write+0x4/0x40 <-invoke_syscall+0x50/0x120
    avahi-daemon-592     [000] ..... 493904.654970: <stack trace>
 => __arm64_sys_write+0x8/0x40
 => invoke_syscall+0x50/0x120
 => el0_svc_common.constprop.0+0x48/0xf0
 => do_el0_svc+0x24/0x38
 => el0_svc+0x30/0xf8
 => el0t_64_sync_handler+0x120/0x130
 => el0t_64_sync+0x190/0x198
    avahi-daemon-592     [000] ..... 493904.654991: __arm64_sys_write+0x4/0x40 <-invoke_syscall+0x50/0x120
    avahi-daemon-592     [000] ..... 493904.654993: <stack trace>
 => __arm64_sys_write+0x8/0x40
 => invoke_syscall+0x50/0x120
 => el0_svc_common.constprop.0+0x48/0xf0
 => do_el0_svc+0x24/0x38
 => el0_svc+0x30/0xf8
 => el0t_64_sync_handler+0x120/0x130
 => el0t_64_sync+0x190/0x198
    avahi-daemon-592     [000] ..... 493904.654997: __arm64_sys_write+0x4/0x40 <-invoke_syscall+0x50/0x120
    avahi-daemon-592     [000] ..... 493904.654999: <stack trace>
 => __arm64_sys_write+0x8/0x40
 => invoke_syscall+0x50/0x120
 => el0_svc_common.constprop.0+0x48/0xf0
 => do_el0_svc+0x24/0x38
 => el0_svc+0x30/0xf8
 => el0t_64_sync_handler+0x120/0x130
 => el0t_64_sync+0x190/0x198
    avahi-daemon-592     [000] ..... 493905.851269: __arm64_sys_write+0x4/0x40 <-invoke_syscall+0x50/0x120
    avahi-daemon-592     [000] ..... 493905.851273: <stack trace>
 => __arm64_sys_write+0x8/0x40
 => invoke_syscall+0x50/0x120
 => el0_svc_common.constprop.0+0x48/0xf0
 => do_el0_svc+0x24/0x38
 => el0_svc+0x30/0xf8
 => el0t_64_sync_handler+0x120/0x130
 => el0t_64_sync+0x190/0x198
    avahi-daemon-592     [000] ..... 493905.851280: __arm64_sys_write+0x4/0x40 <-invoke_syscall+0x50/0x120
    avahi-daemon-592     [000] ..... 493905.851282: <stack trace>
 => __arm64_sys_write+0x8/0x40
 => invoke_syscall+0x50/0x120
 => el0_svc_common.constprop.0+0x48/0xf0
 => do_el0_svc+0x24/0x38
 => el0_svc+0x30/0xf8
 => el0t_64_sync_handler+0x120/0x130
 => el0t_64_sync+0x190/0x198
    avahi-daemon-592     [000] ..... 493905.851303: __arm64_sys_write+0x4/0x40 <-invoke_syscall+0x50/0x120
    avahi-daemon-592     [000] ..... 493905.851305: <stack trace>
 => __arm64_sys_write+0x8/0x40
 => invoke_syscall+0x50/0x120
 => el0_svc_common.constprop.0+0x48/0xf0
 => do_el0_svc+0x24/0x38
 => el0_svc+0x30/0xf8
 => el0t_64_sync_handler+0x120/0x130
 => el0t_64_sync+0x190/0x198
    avahi-daemon-592     [000] ..... 493905.851310: __arm64_sys_write+0x4/0x40 <-invoke_syscall+0x50/0x120
    avahi-daemon-592     [000] ..... 493905.851312: <stack trace>
 => __arm64_sys_write+0x8/0x40
 => invoke_syscall+0x50/0x120
 => el0_svc_common.constprop.0+0x48/0xf0
 => do_el0_svc+0x24/0x38
 => el0_svc+0x30/0xf8
 => el0t_64_sync_handler+0x120/0x130
 => el0t_64_sync+0x190/0x198
    avahi-daemon-592     [000] ..... 493906.344869: __arm64_sys_write+0x4/0x40 <-invoke_syscall+0x50/0x120
    avahi-daemon-592     [000] ..... 493906.344872: <stack trace>
 => __arm64_sys_write+0x8/0x40
 => invoke_syscall+0x50/0x120
 => el0_svc_common.constprop.0+0x48/0xf0
 => do_el0_svc+0x24/0x38
 => el0_svc+0x30/0xf8
 => el0t_64_sync_handler+0x120/0x130
 => el0t_64_sync+0x190/0x198
    avahi-daemon-592     [000] ..... 493906.344880: __arm64_sys_write+0x4/0x40 <-invoke_syscall+0x50/0x120
    avahi-daemon-592     [000] ..... 493906.344882: <stack trace>
 => __arm64_sys_write+0x8/0x40
 => invoke_syscall+0x50/0x120
 => el0_svc_common.constprop.0+0x48/0xf0
 => do_el0_svc+0x24/0x38
 => el0_svc+0x30/0xf8
 => el0t_64_sync_handler+0x120/0x130
 => el0t_64_sync+0x190/0x198
    avahi-daemon-592     [000] ..... 493906.344902: __arm64_sys_write+0x4/0x40 <-invoke_syscall+0x50/0x120
    avahi-daemon-592     [000] ..... 493906.344904: <stack trace>
 => __arm64_sys_write+0x8/0x40
 => invoke_syscall+0x50/0x120
 => el0_svc_common.constprop.0+0x48/0xf0
 => do_el0_svc+0x24/0x38
 => el0_svc+0x30/0xf8
 => el0t_64_sync_handler+0x120/0x130
 => el0t_64_sync+0x190/0x198
    avahi-daemon-592     [000] ..... 493906.344909: __arm64_sys_write+0x4/0x40 <-invoke_syscall+0x50/0x120
    avahi-daemon-592     [000] ..... 493906.344911: <stack trace>
 => __arm64_sys_write+0x8/0x40
 => invoke_syscall+0x50/0x120
 => el0_svc_common.constprop.0+0x48/0xf0
 => do_el0_svc+0x24/0x38
 => el0_svc+0x30/0xf8
 => el0t_64_sync_handler+0x120/0x130
 => el0t_64_sync+0x190/0x198
    avahi-daemon-592     [000] ..... 493907.183820: __arm64_sys_write+0x4/0x40 <-invoke_syscall+0x50/0x120
    avahi-daemon-592     [000] ..... 493907.183823: <stack trace>
 => __arm64_sys_write+0x8/0x40
 => invoke_syscall+0x50/0x120
 => el0_svc_common.constprop.0+0x48/0xf0
 => do_el0_svc+0x24/0x38
 => el0_svc+0x30/0xf8
 => el0t_64_sync_handler+0x120/0x130
 => el0t_64_sync+0x190/0x198
    avahi-daemon-592     [000] ..... 493907.183831: __arm64_sys_write+0x4/0x40 <-invoke_syscall+0x50/0x120
    avahi-daemon-592     [000] ..... 493907.183833: <stack trace>
 => __arm64_sys_write+0x8/0x40
 => invoke_syscall+0x50/0x120
 => el0_svc_common.constprop.0+0x48/0xf0
 => do_el0_svc+0x24/0x38
 => el0_svc+0x30/0xf8
 => el0t_64_sync_handler+0x120/0x130
 => el0t_64_sync+0x190/0x198
    avahi-daemon-592     [000] ..... 493907.183852: __arm64_sys_write+0x4/0x40 <-invoke_syscall+0x50/0x120
    avahi-daemon-592     [000] ..... 493907.183854: <stack trace>
 => __arm64_sys_write+0x8/0x40
 => invoke_syscall+0x50/0x120
 => el0_svc_common.constprop.0+0x48/0xf0
 => do_el0_svc+0x24/0x38
 => el0_svc+0x30/0xf8
 => el0t_64_sync_handler+0x120/0x130
 => el0t_64_sync+0x190/0x198
    avahi-daemon-592     [000] ..... 493907.183859: __arm64_sys_write+0x4/0x40 <-invoke_syscall+0x50/0x120
    avahi-daemon-592     [000] ..... 493907.183860: <stack trace>
 => __arm64_sys_write+0x8/0x40
 => invoke_syscall+0x50/0x120
 => el0_svc_common.constprop.0+0x48/0xf0
 => do_el0_svc+0x24/0x38
 => el0_svc+0x30/0xf8
 => el0t_64_sync_handler+0x120/0x130
 => el0t_64_sync+0x190/0x198
    avahi-daemon-592     [000] ..... 493907.677418: __arm64_sys_write+0x4/0x40 <-invoke_syscall+0x50/0x120
    avahi-daemon-592     [000] ..... 493907.677422: <stack trace>
 => __arm64_sys_write+0x8/0x40
 => invoke_syscall+0x50/0x120
 => el0_svc_common.constprop.0+0x48/0xf0
 => do_el0_svc+0x24/0x38
 => el0_svc+0x30/0xf8
 => el0t_64_sync_handler+0x120/0x130
 => el0t_64_sync+0x190/0x198
    avahi-daemon-592     [000] ..... 493907.677429: __arm64_sys_write+0x4/0x40 <-invoke_syscall+0x50/0x120
    avahi-daemon-592     [000] ..... 493907.677431: <stack trace>
 => __arm64_sys_write+0x8/0x40
 => invoke_syscall+0x50/0x120
 => el0_svc_common.constprop.0+0x48/0xf0
 => do_el0_svc+0x24/0x38
 => el0_svc+0x30/0xf8
 => el0t_64_sync_handler+0x120/0x130
 => el0t_64_sync+0x190/0x198
    avahi-daemon-592     [000] ..... 493907.677452: __arm64_sys_write+0x4/0x40 <-invoke_syscall+0x50/0x120
    avahi-daemon-592     [000] ..... 493907.677453: <stack trace>
 => __arm64_sys_write+0x8/0x40
 => invoke_syscall+0x50/0x120
 => el0_svc_common.constprop.0+0x48/0xf0
 => do_el0_svc+0x24/0x38
 => el0_svc+0x30/0xf8
 => el0t_64_sync_handler+0x120/0x130
 => el0t_64_sync+0x190/0x198
    avahi-daemon-592     [000] ..... 493907.677458: __arm64_sys_write+0x4/0x40 <-invoke_syscall+0x50/0x120
    avahi-daemon-592     [000] ..... 493907.677460: <stack trace>
 => __arm64_sys_write+0x8/0x40
 => invoke_syscall+0x50/0x120
 => el0_svc_common.constprop.0+0x48/0xf0
 => do_el0_svc+0x24/0x38
 => el0_svc+0x30/0xf8
 => el0t_64_sync_handler+0x120/0x130
 => el0t_64_sync+0x190/0x198
    avahi-daemon-592     [000] ..... 493908.851716: __arm64_sys_write+0x4/0x40 <-invoke_syscall+0x50/0x120
    avahi-daemon-592     [000] ..... 493908.851719: <stack trace>
 => __arm64_sys_write+0x8/0x40
 => invoke_syscall+0x50/0x120
 => el0_svc_common.constprop.0+0x48/0xf0
 => do_el0_svc+0x24/0x38
 => el0_svc+0x30/0xf8
 => el0t_64_sync_handler+0x120/0x130
 => el0t_64_sync+0x190/0x198
    avahi-daemon-592     [000] ..... 493908.851727: __arm64_sys_write+0x4/0x40 <-invoke_syscall+0x50/0x120
    avahi-daemon-592     [000] ..... 493908.851729: <stack trace>
 => __arm64_sys_write+0x8/0x40
 => invoke_syscall+0x50/0x120
 => el0_svc_common.constprop.0+0x48/0xf0
 => do_el0_svc+0x24/0x38
 => el0_svc+0x30/0xf8
 => el0t_64_sync_handler+0x120/0x130
 => el0t_64_sync+0x190/0x198
    avahi-daemon-592     [000] ..... 493908.851749: __arm64_sys_write+0x4/0x40 <-invoke_syscall+0x50/0x120
    avahi-daemon-592     [000] ..... 493908.851751: <stack trace>
 => __arm64_sys_write+0x8/0x40
 => invoke_syscall+0x50/0x120
 => el0_svc_common.constprop.0+0x48/0xf0
 => do_el0_svc+0x24/0x38
 => el0_svc+0x30/0xf8
 => el0t_64_sync_handler+0x120/0x130
 => el0t_64_sync+0x190/0x198
    avahi-daemon-592     [000] ..... 493908.851755: __arm64_sys_write+0x4/0x40 <-invoke_syscall+0x50/0x120
    avahi-daemon-592     [000] ..... 493908.851757: <stack trace>
 => __arm64_sys_write+0x8/0x40
 => invoke_syscall+0x50/0x120
 => el0_svc_common.constprop.0+0x48/0xf0
 => do_el0_svc+0x24/0x38
 => el0_svc+0x30/0xf8
 => el0t_64_sync_handler+0x120/0x130
 => el0t_64_sync+0x190/0x198
    avahi-daemon-592     [000] ..... 493909.345320: __arm64_sys_write+0x4/0x40 <-invoke_syscall+0x50/0x120
    avahi-daemon-592     [000] ..... 493909.345327: <stack trace>
 => __arm64_sys_write+0x8/0x40
 => invoke_syscall+0x50/0x120
 => el0_svc_common.constprop.0+0x48/0xf0
 => do_el0_svc+0x24/0x38
 => el0_svc+0x30/0xf8
 => el0t_64_sync_handler+0x120/0x130
 => el0t_64_sync+0x190/0x198
    avahi-daemon-592     [000] ..... 493909.345336: __arm64_sys_write+0x4/0x40 <-invoke_syscall+0x50/0x120
    avahi-daemon-592     [000] ..... 493909.345338: <stack trace>
 => __arm64_sys_write+0x8/0x40
 => invoke_syscall+0x50/0x120
 => el0_svc_common.constprop.0+0x48/0xf0
 => do_el0_svc+0x24/0x38
 => el0_svc+0x30/0xf8
 => el0t_64_sync_handler+0x120/0x130
 => el0t_64_sync+0x190/0x198
    avahi-daemon-592     [000] ..... 493909.345360: __arm64_sys_write+0x4/0x40 <-invoke_syscall+0x50/0x120
    avahi-daemon-592     [000] ..... 493909.345362: <stack trace>
 => __arm64_sys_write+0x8/0x40
 => invoke_syscall+0x50/0x120
 => el0_svc_common.constprop.0+0x48/0xf0
 => do_el0_svc+0x24/0x38
 => el0_svc+0x30/0xf8
 => el0t_64_sync_handler+0x120/0x130
 => el0t_64_sync+0x190/0x198
    avahi-daemon-592     [000] ..... 493909.345366: __arm64_sys_write+0x4/0x40 <-invoke_syscall+0x50/0x120
    avahi-daemon-592     [000] ..... 493909.345368: <stack trace>
 => __arm64_sys_write+0x8/0x40
 => invoke_syscall+0x50/0x120
 => el0_svc_common.constprop.0+0x48/0xf0
 => do_el0_svc+0x24/0x38
 => el0_svc+0x30/0xf8
 => el0t_64_sync_handler+0x120/0x130
 => el0t_64_sync+0x190/0x198
  NetworkManager-649     [002] ..... 493909.762416: __arm64_sys_write+0x4/0x40 <-invoke_syscall+0x50/0x120
  NetworkManager-649     [002] ..... 493909.762421: <stack trace>
 => __arm64_sys_write+0x8/0x40
 => invoke_syscall+0x50/0x120
 => el0_svc_common.constprop.0+0x48/0xf0
 => do_el0_svc+0x24/0x38
 => el0_svc+0x30/0xf8
 => el0t_64_sync_handler+0x120/0x130
 => el0t_64_sync+0x190/0x198
  NetworkManager-649     [002] ..... 493909.762615: __arm64_sys_write+0x4/0x40 <-invoke_syscall+0x50/0x120
  NetworkManager-649     [002] ..... 493909.762619: <stack trace>
 => __arm64_sys_write+0x8/0x40
 => invoke_syscall+0x50/0x120
 => el0_svc_common.constprop.0+0x48/0xf0
 => do_el0_svc+0x24/0x38
 => el0_svc+0x30/0xf8
 => el0t_64_sync_handler+0x120/0x130
 => el0t_64_sync+0x190/0x198
    avahi-daemon-592     [000] ..... 493910.184301: __arm64_sys_write+0x4/0x40 <-invoke_syscall+0x50/0x120
    avahi-daemon-592     [000] ..... 493910.184305: <stack trace>
 => __arm64_sys_write+0x8/0x40
 => invoke_syscall+0x50/0x120
 => el0_svc_common.constprop.0+0x48/0xf0
 => do_el0_svc+0x24/0x38
 => el0_svc+0x30/0xf8
 => el0t_64_sync_handler+0x120/0x130
 => el0t_64_sync+0x190/0x198
    avahi-daemon-592     [000] ..... 493910.184318: __arm64_sys_write+0x4/0x40 <-invoke_syscall+0x50/0x120
    avahi-daemon-592     [000] ..... 493910.184320: <stack trace>
 => __arm64_sys_write+0x8/0x40
 => invoke_syscall+0x50/0x120
 => el0_svc_common.constprop.0+0x48/0xf0
 => do_el0_svc+0x24/0x38
 => el0_svc+0x30/0xf8
 => el0t_64_sync_handler+0x120/0x130
 => el0t_64_sync+0x190/0x198
    avahi-daemon-592     [000] ..... 493910.184349: __arm64_sys_write+0x4/0x40 <-invoke_syscall+0x50/0x120
    avahi-daemon-592     [000] ..... 493910.184351: <stack trace>
 => __arm64_sys_write+0x8/0x40
 => invoke_syscall+0x50/0x120
 => el0_svc_common.constprop.0+0x48/0xf0
 => do_el0_svc+0x24/0x38
 => el0_svc+0x30/0xf8
 => el0t_64_sync_handler+0x120/0x130
 => el0t_64_sync+0x190/0x198
    avahi-daemon-592     [000] ..... 493910.184355: __arm64_sys_write+0x4/0x40 <-invoke_syscall+0x50/0x120
    avahi-daemon-592     [000] ..... 493910.184357: <stack trace>
 => __arm64_sys_write+0x8/0x40
 => invoke_syscall+0x50/0x120
 => el0_svc_common.constprop.0+0x48/0xf0
 => do_el0_svc+0x24/0x38
 => el0_svc+0x30/0xf8
 => el0t_64_sync_handler+0x120/0x130
 => el0t_64_sync+0x190/0x198
    avahi-daemon-592     [000] ..... 493910.676912: __arm64_sys_write+0x4/0x40 <-invoke_syscall+0x50/0x120
    avahi-daemon-592     [000] ..... 493910.676915: <stack trace>
 => __arm64_sys_write+0x8/0x40
 => invoke_syscall+0x50/0x120
 => el0_svc_common.constprop.0+0x48/0xf0
 => do_el0_svc+0x24/0x38
 => el0_svc+0x30/0xf8
 => el0t_64_sync_handler+0x120/0x130
 => el0t_64_sync+0x190/0x198
    avahi-daemon-592     [000] ..... 493910.676923: __arm64_sys_write+0x4/0x40 <-invoke_syscall+0x50/0x120
    avahi-daemon-592     [000] ..... 493910.676925: <stack trace>
 => __arm64_sys_write+0x8/0x40
 => invoke_syscall+0x50/0x120
 => el0_svc_common.constprop.0+0x48/0xf0
 => do_el0_svc+0x24/0x38
 => el0_svc+0x30/0xf8
 => el0t_64_sync_handler+0x120/0x130
 => el0t_64_sync+0x190/0x198
    avahi-daemon-592     [000] ..... 493910.676946: __arm64_sys_write+0x4/0x40 <-invoke_syscall+0x50/0x120
    avahi-daemon-592     [000] ..... 493910.676948: <stack trace>
 => __arm64_sys_write+0x8/0x40
 => invoke_syscall+0x50/0x120
 => el0_svc_common.constprop.0+0x48/0xf0
 => do_el0_svc+0x24/0x38
 => el0_svc+0x30/0xf8
 => el0t_64_sync_handler+0x120/0x130
 => el0t_64_sync+0x190/0x198
    avahi-daemon-592     [000] ..... 493910.676952: __arm64_sys_write+0x4/0x40 <-invoke_syscall+0x50/0x120
    avahi-daemon-592     [000] ..... 493910.676954: <stack trace>
 => __arm64_sys_write+0x8/0x40
 => invoke_syscall+0x50/0x120
 => el0_svc_common.constprop.0+0x48/0xf0
 => do_el0_svc+0x24/0x38
 => el0_svc+0x30/0xf8
 => el0t_64_sync_handler+0x120/0x130
 => el0t_64_sync+0x190/0x198
    avahi-daemon-592     [000] ..... 493911.851204: __arm64_sys_write+0x4/0x40 <-invoke_syscall+0x50/0x120
    avahi-daemon-592     [000] ..... 493911.851207: <stack trace>
 => __arm64_sys_write+0x8/0x40
 => invoke_syscall+0x50/0x120
 => el0_svc_common.constprop.0+0x48/0xf0
 => do_el0_svc+0x24/0x38
 => el0_svc+0x30/0xf8
 => el0t_64_sync_handler+0x120/0x130
 => el0t_64_sync+0x190/0x198
    avahi-daemon-592     [000] ..... 493911.851215: __arm64_sys_write+0x4/0x40 <-invoke_syscall+0x50/0x120
    avahi-daemon-592     [000] ..... 493911.851217: <stack trace>
 => __arm64_sys_write+0x8/0x40
 => invoke_syscall+0x50/0x120
 => el0_svc_common.constprop.0+0x48/0xf0
 => do_el0_svc+0x24/0x38
 => el0_svc+0x30/0xf8
 => el0t_64_sync_handler+0x120/0x130
 => el0t_64_sync+0x190/0x198
    avahi-daemon-592     [000] ..... 493911.851238: __arm64_sys_write+0x4/0x40 <-invoke_syscall+0x50/0x120
    avahi-daemon-592     [000] ..... 493911.851240: <stack trace>
 => __arm64_sys_write+0x8/0x40
 => invoke_syscall+0x50/0x120
 => el0_svc_common.constprop.0+0x48/0xf0
 => do_el0_svc+0x24/0x38
 => el0_svc+0x30/0xf8
 => el0t_64_sync_handler+0x120/0x130
 => el0t_64_sync+0x190/0x198
    avahi-daemon-592     [000] ..... 493911.851245: __arm64_sys_write+0x4/0x40 <-invoke_syscall+0x50/0x120
    avahi-daemon-592     [000] ..... 493911.851246: <stack trace>
 => __arm64_sys_write+0x8/0x40
 => invoke_syscall+0x50/0x120
 => el0_svc_common.constprop.0+0x48/0xf0
 => do_el0_svc+0x24/0x38
 => el0_svc+0x30/0xf8
 => el0t_64_sync_handler+0x120/0x130
 => el0t_64_sync+0x190/0x198
    avahi-daemon-592     [000] ..... 493912.345809: __arm64_sys_write+0x4/0x40 <-invoke_syscall+0x50/0x120
    avahi-daemon-592     [000] ..... 493912.345813: <stack trace>
 => __arm64_sys_write+0x8/0x40
 => invoke_syscall+0x50/0x120
 => el0_svc_common.constprop.0+0x48/0xf0
 => do_el0_svc+0x24/0x38
 => el0_svc+0x30/0xf8
 => el0t_64_sync_handler+0x120/0x130
 => el0t_64_sync+0x190/0x198
    avahi-daemon-592     [000] ..... 493912.345820: __arm64_sys_write+0x4/0x40 <-invoke_syscall+0x50/0x120
    avahi-daemon-592     [000] ..... 493912.345822: <stack trace>
 => __arm64_sys_write+0x8/0x40
 => invoke_syscall+0x50/0x120
 => el0_svc_common.constprop.0+0x48/0xf0
 => do_el0_svc+0x24/0x38
 => el0_svc+0x30/0xf8
 => el0t_64_sync_handler+0x120/0x130
 => el0t_64_sync+0x190/0x198
    avahi-daemon-592     [000] ..... 493912.345842: __arm64_sys_write+0x4/0x40 <-invoke_syscall+0x50/0x120
    avahi-daemon-592     [000] ..... 493912.345844: <stack trace>
 => __arm64_sys_write+0x8/0x40
 => invoke_syscall+0x50/0x120
 => el0_svc_common.constprop.0+0x48/0xf0
 => do_el0_svc+0x24/0x38
 => el0_svc+0x30/0xf8
 => el0t_64_sync_handler+0x120/0x130
 => el0t_64_sync+0x190/0x198
    avahi-daemon-592     [000] ..... 493912.345849: __arm64_sys_write+0x4/0x40 <-invoke_syscall+0x50/0x120
    avahi-daemon-592     [000] ..... 493912.345850: <stack trace>
 => __arm64_sys_write+0x8/0x40
 => invoke_syscall+0x50/0x120
 => el0_svc_common.constprop.0+0x48/0xf0
 => do_el0_svc+0x24/0x38
 => el0_svc+0x30/0xf8
 => el0t_64_sync_handler+0x120/0x130
 => el0t_64_sync+0x190/0x198
    avahi-daemon-592     [000] ..... 493913.183768: __arm64_sys_write+0x4/0x40 <-invoke_syscall+0x50/0x120
    avahi-daemon-592     [000] ..... 493913.183772: <stack trace>
 => __arm64_sys_write+0x8/0x40
 => invoke_syscall+0x50/0x120
 => el0_svc_common.constprop.0+0x48/0xf0
 => do_el0_svc+0x24/0x38
 => el0_svc+0x30/0xf8
 => el0t_64_sync_handler+0x120/0x130
 => el0t_64_sync+0x190/0x198
    avahi-daemon-592     [000] ..... 493913.183781: __arm64_sys_write+0x4/0x40 <-invoke_syscall+0x50/0x120
    avahi-daemon-592     [000] ..... 493913.183783: <stack trace>
 => __arm64_sys_write+0x8/0x40
 => invoke_syscall+0x50/0x120
 => el0_svc_common.constprop.0+0x48/0xf0
 => do_el0_svc+0x24/0x38
 => el0_svc+0x30/0xf8
 => el0t_64_sync_handler+0x120/0x130
 => el0t_64_sync+0x190/0x198
    avahi-daemon-592     [000] ..... 493913.183804: __arm64_sys_write+0x4/0x40 <-invoke_syscall+0x50/0x120
    avahi-daemon-592     [000] ..... 493913.183806: <stack trace>
 => __arm64_sys_write+0x8/0x40
 => invoke_syscall+0x50/0x120
 => el0_svc_common.constprop.0+0x48/0xf0
 => do_el0_svc+0x24/0x38
 => el0_svc+0x30/0xf8
 => el0t_64_sync_handler+0x120/0x130
 => el0t_64_sync+0x190/0x198
    avahi-daemon-592     [000] ..... 493913.183811: __arm64_sys_write+0x4/0x40 <-invoke_syscall+0x50/0x120
    avahi-daemon-592     [000] ..... 493913.183813: <stack trace>
 => __arm64_sys_write+0x8/0x40
 => invoke_syscall+0x50/0x120
 => el0_svc_common.constprop.0+0x48/0xf0
 => do_el0_svc+0x24/0x38
 => el0_svc+0x30/0xf8
 => el0t_64_sync_handler+0x120/0x130
 => el0t_64_sync+0x190/0x198
    avahi-daemon-592     [000] ..... 493913.677365: __arm64_sys_write+0x4/0x40 <-invoke_syscall+0x50/0x120
    avahi-daemon-592     [000] ..... 493913.677369: <stack trace>
 => __arm64_sys_write+0x8/0x40
 => invoke_syscall+0x50/0x120
 => el0_svc_common.constprop.0+0x48/0xf0
 => do_el0_svc+0x24/0x38
 => el0_svc+0x30/0xf8
 => el0t_64_sync_handler+0x120/0x130
 => el0t_64_sync+0x190/0x198
    avahi-daemon-592     [000] ..... 493913.677377: __arm64_sys_write+0x4/0x40 <-invoke_syscall+0x50/0x120
    avahi-daemon-592     [000] ..... 493913.677379: <stack trace>
 => __arm64_sys_write+0x8/0x40
 => invoke_syscall+0x50/0x120
 => el0_svc_common.constprop.0+0x48/0xf0
 => do_el0_svc+0x24/0x38
 => el0_svc+0x30/0xf8
 => el0t_64_sync_handler+0x120/0x130
 => el0t_64_sync+0x190/0x198
    avahi-daemon-592     [000] ..... 493913.677399: __arm64_sys_write+0x4/0x40 <-invoke_syscall+0x50/0x120
    avahi-daemon-592     [000] ..... 493913.677401: <stack trace>
 => __arm64_sys_write+0x8/0x40
 => invoke_syscall+0x50/0x120
 => el0_svc_common.constprop.0+0x48/0xf0
 => do_el0_svc+0x24/0x38
 => el0_svc+0x30/0xf8
 => el0t_64_sync_handler+0x120/0x130
 => el0t_64_sync+0x190/0x198
    avahi-daemon-592     [000] ..... 493913.677405: __arm64_sys_write+0x4/0x40 <-invoke_syscall+0x50/0x120
    avahi-daemon-592     [000] ..... 493913.677407: <stack trace>
 => __arm64_sys_write+0x8/0x40
 => invoke_syscall+0x50/0x120
 => el0_svc_common.constprop.0+0x48/0xf0
 => do_el0_svc+0x24/0x38
 => el0_svc+0x30/0xf8
 => el0t_64_sync_handler+0x120/0x130
 => el0t_64_sync+0x190/0x198
    avahi-daemon-592     [000] ..... 493914.851662: __arm64_sys_write+0x4/0x40 <-invoke_syscall+0x50/0x120
    avahi-daemon-592     [000] ..... 493914.851666: <stack trace>
 => __arm64_sys_write+0x8/0x40
 => invoke_syscall+0x50/0x120
 => el0_svc_common.constprop.0+0x48/0xf0
 => do_el0_svc+0x24/0x38
 => el0_svc+0x30/0xf8
 => el0t_64_sync_handler+0x120/0x130
 => el0t_64_sync+0x190/0x198
    avahi-daemon-592     [000] ..... 493914.851678: __arm64_sys_write+0x4/0x40 <-invoke_syscall+0x50/0x120
    avahi-daemon-592     [000] ..... 493914.851680: <stack trace>
 => __arm64_sys_write+0x8/0x40
 => invoke_syscall+0x50/0x120
 => el0_svc_common.constprop.0+0x48/0xf0
 => do_el0_svc+0x24/0x38
 => el0_svc+0x30/0xf8
 => el0t_64_sync_handler+0x120/0x130
 => el0t_64_sync+0x190/0x198
    avahi-daemon-592     [000] ..... 493914.851705: __arm64_sys_write+0x4/0x40 <-invoke_syscall+0x50/0x120
    avahi-daemon-592     [000] ..... 493914.851707: <stack trace>
 => __arm64_sys_write+0x8/0x40
 => invoke_syscall+0x50/0x120
 => el0_svc_common.constprop.0+0x48/0xf0
 => do_el0_svc+0x24/0x38
 => el0_svc+0x30/0xf8
 => el0t_64_sync_handler+0x120/0x130
 => el0t_64_sync+0x190/0x198
    avahi-daemon-592     [000] ..... 493914.851714: __arm64_sys_write+0x4/0x40 <-invoke_syscall+0x50/0x120
    avahi-daemon-592     [000] ..... 493914.851716: <stack trace>
 => __arm64_sys_write+0x8/0x40
 => invoke_syscall+0x50/0x120
 => el0_svc_common.constprop.0+0x48/0xf0
 => do_el0_svc+0x24/0x38
 => el0_svc+0x30/0xf8
 => el0t_64_sync_handler+0x120/0x130
 => el0t_64_sync+0x190/0x198
    avahi-daemon-592     [000] ..... 493915.115046: __arm64_sys_write+0x4/0x40 <-invoke_syscall+0x50/0x120
    avahi-daemon-592     [000] ..... 493915.115049: <stack trace>
 => __arm64_sys_write+0x8/0x40
 => invoke_syscall+0x50/0x120
 => el0_svc_common.constprop.0+0x48/0xf0
 => do_el0_svc+0x24/0x38
 => el0_svc+0x30/0xf8
 => el0t_64_sync_handler+0x120/0x130
 => el0t_64_sync+0x190/0x198
    avahi-daemon-592     [000] ..... 493915.115061: __arm64_sys_write+0x4/0x40 <-invoke_syscall+0x50/0x120
    avahi-daemon-592     [000] ..... 493915.115063: <stack trace>
 => __arm64_sys_write+0x8/0x40
 => invoke_syscall+0x50/0x120
 => el0_svc_common.constprop.0+0x48/0xf0
 => do_el0_svc+0x24/0x38
 => el0_svc+0x30/0xf8
 => el0t_64_sync_handler+0x120/0x130
 => el0t_64_sync+0x190/0x198
    avahi-daemon-592     [000] ..... 493915.115085: __arm64_sys_write+0x4/0x40 <-invoke_syscall+0x50/0x120
    avahi-daemon-592     [000] ..... 493915.115087: <stack trace>
 => __arm64_sys_write+0x8/0x40
 => invoke_syscall+0x50/0x120
 => el0_svc_common.constprop.0+0x48/0xf0
 => do_el0_svc+0x24/0x38
 => el0_svc+0x30/0xf8
 => el0t_64_sync_handler+0x120/0x130
 => el0t_64_sync+0x190/0x198
    avahi-daemon-592     [000] ..... 493915.115095: __arm64_sys_write+0x4/0x40 <-invoke_syscall+0x50/0x120
    avahi-daemon-592     [000] ..... 493915.115096: <stack trace>
 => __arm64_sys_write+0x8/0x40
 => invoke_syscall+0x50/0x120
 => el0_svc_common.constprop.0+0x48/0xf0
 => do_el0_svc+0x24/0x38
 => el0_svc+0x30/0xf8
 => el0t_64_sync_handler+0x120/0x130
 => el0t_64_sync+0x190/0x198
  NetworkManager-649     [002] ..... 493915.762486: __arm64_sys_write+0x4/0x40 <-invoke_syscall+0x50/0x120
  NetworkManager-649     [002] ..... 493915.762492: <stack trace>
 => __arm64_sys_write+0x8/0x40
 => invoke_syscall+0x50/0x120
 => el0_svc_common.constprop.0+0x48/0xf0
 => do_el0_svc+0x24/0x38
 => el0_svc+0x30/0xf8
 => el0t_64_sync_handler+0x120/0x130
 => el0t_64_sync+0x190/0x198
  NetworkManager-649     [002] ..... 493915.762686: __arm64_sys_write+0x4/0x40 <-invoke_syscall+0x50/0x120
  NetworkManager-649     [002] ..... 493915.762689: <stack trace>
 => __arm64_sys_write+0x8/0x40
 => invoke_syscall+0x50/0x120
 => el0_svc_common.constprop.0+0x48/0xf0
 => do_el0_svc+0x24/0x38
 => el0_svc+0x30/0xf8
 => el0t_64_sync_handler+0x120/0x130
 => el0t_64_sync+0x190/0x198
    avahi-daemon-592     [000] ..... 493916.184273: __arm64_sys_write+0x4/0x40 <-invoke_syscall+0x50/0x120
    avahi-daemon-592     [000] ..... 493916.184278: <stack trace>
 => __arm64_sys_write+0x8/0x40
 => invoke_syscall+0x50/0x120
 => el0_svc_common.constprop.0+0x48/0xf0
 => do_el0_svc+0x24/0x38
 => el0_svc+0x30/0xf8
 => el0t_64_sync_handler+0x120/0x130
 => el0t_64_sync+0x190/0x198
    avahi-daemon-592     [000] ..... 493916.184296: __arm64_sys_write+0x4/0x40 <-invoke_syscall+0x50/0x120
    avahi-daemon-592     [000] ..... 493916.184298: <stack trace>
 => __arm64_sys_write+0x8/0x40
 => invoke_syscall+0x50/0x120
 => el0_svc_common.constprop.0+0x48/0xf0
 => do_el0_svc+0x24/0x38
 => el0_svc+0x30/0xf8
 => el0t_64_sync_handler+0x120/0x130
 => el0t_64_sync+0x190/0x198
    avahi-daemon-592     [000] ..... 493916.184327: __arm64_sys_write+0x4/0x40 <-invoke_syscall+0x50/0x120
    avahi-daemon-592     [000] ..... 493916.184332: <stack trace>
 => __arm64_sys_write+0x8/0x40
 => invoke_syscall+0x50/0x120
 => el0_svc_common.constprop.0+0x48/0xf0
 => do_el0_svc+0x24/0x38
 => el0_svc+0x30/0xf8
 => el0t_64_sync_handler+0x120/0x130
 => el0t_64_sync+0x190/0x198
    avahi-daemon-592     [000] ..... 493916.184340: __arm64_sys_write+0x4/0x40 <-invoke_syscall+0x50/0x120
    avahi-daemon-592     [000] ..... 493916.184341: <stack trace>
 => __arm64_sys_write+0x8/0x40
 => invoke_syscall+0x50/0x120
 => el0_svc_common.constprop.0+0x48/0xf0
 => do_el0_svc+0x24/0x38
 => el0_svc+0x30/0xf8
 => el0t_64_sync_handler+0x120/0x130
 => el0t_64_sync+0x190/0x198
    avahi-daemon-592     [000] ..... 493916.371896: __arm64_sys_write+0x4/0x40 <-invoke_syscall+0x50/0x120
    avahi-daemon-592     [000] ..... 493916.371899: <stack trace>
 => __arm64_sys_write+0x8/0x40
 => invoke_syscall+0x50/0x120
 => el0_svc_common.constprop.0+0x48/0xf0
 => do_el0_svc+0x24/0x38
 => el0_svc+0x30/0xf8
 => el0t_64_sync_handler+0x120/0x130
 => el0t_64_sync+0x190/0x198
    avahi-daemon-592     [000] ..... 493916.371974: __arm64_sys_write+0x4/0x40 <-invoke_syscall+0x50/0x120
    avahi-daemon-592     [000] ..... 493916.371977: <stack trace>
 => __arm64_sys_write+0x8/0x40
 => invoke_syscall+0x50/0x120
 => el0_svc_common.constprop.0+0x48/0xf0
 => do_el0_svc+0x24/0x38
 => el0_svc+0x30/0xf8
 => el0t_64_sync_handler+0x120/0x130
 => el0t_64_sync+0x190/0x198
    avahi-daemon-592     [000] ..... 493916.446121: __arm64_sys_write+0x4/0x40 <-invoke_syscall+0x50/0x120
    avahi-daemon-592     [000] ..... 493916.446125: <stack trace>
 => __arm64_sys_write+0x8/0x40
 => invoke_syscall+0x50/0x120
 => el0_svc_common.constprop.0+0x48/0xf0
 => do_el0_svc+0x24/0x38
 => el0_svc+0x30/0xf8
 => el0t_64_sync_handler+0x120/0x130
 => el0t_64_sync+0x190/0x198
    avahi-daemon-592     [000] ..... 493916.446137: __arm64_sys_write+0x4/0x40 <-invoke_syscall+0x50/0x120
    avahi-daemon-592     [000] ..... 493916.446139: <stack trace>
 => __arm64_sys_write+0x8/0x40
 => invoke_syscall+0x50/0x120
 => el0_svc_common.constprop.0+0x48/0xf0
 => do_el0_svc+0x24/0x38
 => el0_svc+0x30/0xf8
 => el0t_64_sync_handler+0x120/0x130
 => el0t_64_sync+0x190/0x198
    avahi-daemon-592     [000] ..... 493916.446162: __arm64_sys_write+0x4/0x40 <-invoke_syscall+0x50/0x120
    avahi-daemon-592     [000] ..... 493916.446164: <stack trace>
 => __arm64_sys_write+0x8/0x40
 => invoke_syscall+0x50/0x120
 => el0_svc_common.constprop.0+0x48/0xf0
 => do_el0_svc+0x24/0x38
 => el0_svc+0x30/0xf8
 => el0t_64_sync_handler+0x120/0x130
 => el0t_64_sync+0x190/0x198
    avahi-daemon-592     [000] ..... 493916.446171: __arm64_sys_write+0x4/0x40 <-invoke_syscall+0x50/0x120
    avahi-daemon-592     [000] ..... 493916.446173: <stack trace>
 => __arm64_sys_write+0x8/0x40
 => invoke_syscall+0x50/0x120
 => el0_svc_common.constprop.0+0x48/0xf0
 => do_el0_svc+0x24/0x38
 => el0_svc+0x30/0xf8
 => el0t_64_sync_handler+0x120/0x130
 => el0t_64_sync+0x190/0x198
    avahi-daemon-592     [000] ..... 493916.472280: __arm64_sys_write+0x4/0x40 <-invoke_syscall+0x50/0x120
    avahi-daemon-592     [000] ..... 493916.472284: <stack trace>
 => __arm64_sys_write+0x8/0x40
 => invoke_syscall+0x50/0x120
 => el0_svc_common.constprop.0+0x48/0xf0
 => do_el0_svc+0x24/0x38
 => el0_svc+0x30/0xf8
 => el0t_64_sync_handler+0x120/0x130
 => el0t_64_sync+0x190/0x198
    avahi-daemon-592     [000] ..... 493916.472292: __arm64_sys_write+0x4/0x40 <-invoke_syscall+0x50/0x120
    avahi-daemon-592     [000] ..... 493916.472294: <stack trace>
 => __arm64_sys_write+0x8/0x40
 => invoke_syscall+0x50/0x120
 => el0_svc_common.constprop.0+0x48/0xf0
 => do_el0_svc+0x24/0x38
 => el0_svc+0x30/0xf8
 => el0t_64_sync_handler+0x120/0x130
 => el0t_64_sync+0x190/0x198
    avahi-daemon-592     [000] ..... 493916.472313: __arm64_sys_write+0x4/0x40 <-invoke_syscall+0x50/0x120
    avahi-daemon-592     [000] ..... 493916.472315: <stack trace>
 => __arm64_sys_write+0x8/0x40
 => invoke_syscall+0x50/0x120
 => el0_svc_common.constprop.0+0x48/0xf0
 => do_el0_svc+0x24/0x38
 => el0_svc+0x30/0xf8
 => el0t_64_sync_handler+0x120/0x130
 => el0t_64_sync+0x190/0x198
    avahi-daemon-592     [000] ..... 493916.472320: __arm64_sys_write+0x4/0x40 <-invoke_syscall+0x50/0x120
    avahi-daemon-592     [000] ..... 493916.472322: <stack trace>
 => __arm64_sys_write+0x8/0x40
 => invoke_syscall+0x50/0x120
 => el0_svc_common.constprop.0+0x48/0xf0
 => do_el0_svc+0x24/0x38
 => el0_svc+0x30/0xf8
 => el0t_64_sync_handler+0x120/0x130
 => el0t_64_sync+0x190/0x198
    avahi-daemon-592     [000] ..... 493917.271648: __arm64_sys_write+0x4/0x40 <-invoke_syscall+0x50/0x120
    avahi-daemon-592     [000] ..... 493917.271652: <stack trace>
 => __arm64_sys_write+0x8/0x40
 => invoke_syscall+0x50/0x120
 => el0_svc_common.constprop.0+0x48/0xf0
 => do_el0_svc+0x24/0x38
 => el0_svc+0x30/0xf8
 => el0t_64_sync_handler+0x120/0x130
 => el0t_64_sync+0x190/0x198
    avahi-daemon-592     [000] ..... 493917.271716: __arm64_sys_write+0x4/0x40 <-invoke_syscall+0x50/0x120
    avahi-daemon-592     [000] ..... 493917.271719: <stack trace>
 => __arm64_sys_write+0x8/0x40
 => invoke_syscall+0x50/0x120
 => el0_svc_common.constprop.0+0x48/0xf0
 => do_el0_svc+0x24/0x38
 => el0_svc+0x30/0xf8
 => el0t_64_sync_handler+0x120/0x130
 => el0t_64_sync+0x190/0x198
    avahi-daemon-592     [000] ..... 493917.371904: __arm64_sys_write+0x4/0x40 <-invoke_syscall+0x50/0x120
    avahi-daemon-592     [000] ..... 493917.371907: <stack trace>
 => __arm64_sys_write+0x8/0x40
 => invoke_syscall+0x50/0x120
 => el0_svc_common.constprop.0+0x48/0xf0
 => do_el0_svc+0x24/0x38
 => el0_svc+0x30/0xf8
 => el0t_64_sync_handler+0x120/0x130
 => el0t_64_sync+0x190/0x198
    avahi-daemon-592     [000] ..... 493917.371916: __arm64_sys_write+0x4/0x40 <-invoke_syscall+0x50/0x120
    avahi-daemon-592     [000] ..... 493917.371918: <stack trace>
 => __arm64_sys_write+0x8/0x40
 => invoke_syscall+0x50/0x120
 => el0_svc_common.constprop.0+0x48/0xf0
 => do_el0_svc+0x24/0x38
 => el0_svc+0x30/0xf8
 => el0t_64_sync_handler+0x120/0x130
 => el0t_64_sync+0x190/0x198
    avahi-daemon-592     [000] ..... 493917.371937: __arm64_sys_write+0x4/0x40 <-invoke_syscall+0x50/0x120
    avahi-daemon-592     [000] ..... 493917.371939: <stack trace>
 => __arm64_sys_write+0x8/0x40
 => invoke_syscall+0x50/0x120
 => el0_svc_common.constprop.0+0x48/0xf0
 => do_el0_svc+0x24/0x38
 => el0_svc+0x30/0xf8
 => el0t_64_sync_handler+0x120/0x130
 => el0t_64_sync+0x190/0x198
    avahi-daemon-592     [000] ..... 493917.371944: __arm64_sys_write+0x4/0x40 <-invoke_syscall+0x50/0x120
    avahi-daemon-592     [000] ..... 493917.371946: <stack trace>
 => __arm64_sys_write+0x8/0x40
 => invoke_syscall+0x50/0x120
 => el0_svc_common.constprop.0+0x48/0xf0
 => do_el0_svc+0x24/0x38
 => el0_svc+0x30/0xf8
 => el0t_64_sync_handler+0x120/0x130
 => el0t_64_sync+0x190/0x198
    sshd-session-15489   [000] ..... 493917.602273: __arm64_sys_write+0x4/0x40 <-invoke_syscall+0x50/0x120
    sshd-session-15489   [000] ..... 493917.602278: <stack trace>
 => __arm64_sys_write+0x8/0x40
 => invoke_syscall+0x50/0x120
 => el0_svc_common.constprop.0+0x48/0xf0
 => do_el0_svc+0x24/0x38
 => el0_svc+0x30/0xf8
 => el0t_64_sync_handler+0x120/0x130
 => el0t_64_sync+0x190/0x198
            bash-15508   [000] ..... 493917.602481: __arm64_sys_write+0x4/0x40 <-invoke_syscall+0x50/0x120
            bash-15508   [000] ..... 493917.602485: <stack trace>
 => __arm64_sys_write+0x8/0x40
 => invoke_syscall+0x50/0x120
 => el0_svc_common.constprop.0+0x48/0xf0
 => do_el0_svc+0x24/0x38
 => el0_svc+0x30/0xf8
 => el0t_64_sync_handler+0x120/0x130
 => el0t_64_sync+0x190/0x198
    sshd-session-15489   [000] ..... 493917.602670: __arm64_sys_write+0x4/0x40 <-invoke_syscall+0x50/0x120
    sshd-session-15489   [000] ..... 493917.602674: <stack trace>
 => __arm64_sys_write+0x8/0x40
 => invoke_syscall+0x50/0x120
 => el0_svc_common.constprop.0+0x48/0xf0
 => do_el0_svc+0x24/0x38
 => el0_svc+0x30/0xf8
 => el0t_64_sync_handler+0x120/0x130
 => el0t_64_sync+0x190/0x198
    sshd-session-15489   [000] ..... 493917.620197: __arm64_sys_write+0x4/0x40 <-invoke_syscall+0x50/0x120
    sshd-session-15489   [000] ..... 493917.620200: <stack trace>
 => __arm64_sys_write+0x8/0x40
 => invoke_syscall+0x50/0x120
 => el0_svc_common.constprop.0+0x48/0xf0
 => do_el0_svc+0x24/0x38
 => el0_svc+0x30/0xf8
 => el0t_64_sync_handler+0x120/0x130
 => el0t_64_sync+0x190/0x198
    sshd-session-15489   [000] ..... 493917.649413: __arm64_sys_write+0x4/0x40 <-invoke_syscall+0x50/0x120
    sshd-session-15489   [000] ..... 493917.649417: <stack trace>
 => __arm64_sys_write+0x8/0x40
 => invoke_syscall+0x50/0x120
 => el0_svc_common.constprop.0+0x48/0xf0
 => do_el0_svc+0x24/0x38
 => el0_svc+0x30/0xf8
 => el0t_64_sync_handler+0x120/0x130
 => el0t_64_sync+0x190/0x198
    sshd-session-15489   [000] ..... 493917.665342: __arm64_sys_write+0x4/0x40 <-invoke_syscall+0x50/0x120
    sshd-session-15489   [000] ..... 493917.665345: <stack trace>
 => __arm64_sys_write+0x8/0x40
 => invoke_syscall+0x50/0x120
 => el0_svc_common.constprop.0+0x48/0xf0
 => do_el0_svc+0x24/0x38
 => el0_svc+0x30/0xf8
 => el0t_64_sync_handler+0x120/0x130
 => el0t_64_sync+0x190/0x198
    sshd-session-15489   [000] ..... 493917.688997: __arm64_sys_write+0x4/0x40 <-invoke_syscall+0x50/0x120
    sshd-session-15489   [000] ..... 493917.689001: <stack trace>
 => __arm64_sys_write+0x8/0x40
 => invoke_syscall+0x50/0x120
 => el0_svc_common.constprop.0+0x48/0xf0
 => do_el0_svc+0x24/0x38
 => el0_svc+0x30/0xf8
 => el0t_64_sync_handler+0x120/0x130
 => el0t_64_sync+0x190/0x198
    sshd-session-15489   [000] ..... 493917.786868: __arm64_sys_write+0x4/0x40 <-invoke_syscall+0x50/0x120
    sshd-session-15489   [000] ..... 493917.786871: <stack trace>
 => __arm64_sys_write+0x8/0x40
 => invoke_syscall+0x50/0x120
 => el0_svc_common.constprop.0+0x48/0xf0
 => do_el0_svc+0x24/0x38
 => el0_svc+0x30/0xf8
 => el0t_64_sync_handler+0x120/0x130
 => el0t_64_sync+0x190/0x198
    sshd-session-15489   [000] ..... 493917.801144: __arm64_sys_write+0x4/0x40 <-invoke_syscall+0x50/0x120
    sshd-session-15489   [000] ..... 493917.801147: <stack trace>
 => __arm64_sys_write+0x8/0x40
 => invoke_syscall+0x50/0x120
 => el0_svc_common.constprop.0+0x48/0xf0
 => do_el0_svc+0x24/0x38
 => el0_svc+0x30/0xf8
 => el0t_64_sync_handler+0x120/0x130
 => el0t_64_sync+0x190/0x198
            bash-15508   [000] ..... 493917.801292: __arm64_sys_write+0x4/0x40 <-invoke_syscall+0x50/0x120
            bash-15508   [000] ..... 493917.801296: <stack trace>
 => __arm64_sys_write+0x8/0x40
 => invoke_syscall+0x50/0x120
 => el0_svc_common.constprop.0+0x48/0xf0
 => do_el0_svc+0x24/0x38
 => el0_svc+0x30/0xf8
 => el0t_64_sync_handler+0x120/0x130
 => el0t_64_sync+0x190/0x198
    sshd-session-15489   [000] ..... 493917.801448: __arm64_sys_write+0x4/0x40 <-invoke_syscall+0x50/0x120
    sshd-session-15489   [000] ..... 493917.801452: <stack trace>
 => __arm64_sys_write+0x8/0x40
 => invoke_syscall+0x50/0x120
 => el0_svc_common.constprop.0+0x48/0xf0
 => do_el0_svc+0x24/0x38
 => el0_svc+0x30/0xf8
 => el0t_64_sync_handler+0x120/0x130
 => el0t_64_sync+0x190/0x198
    sshd-session-15489   [000] ..... 493917.822765: __arm64_sys_write+0x4/0x40 <-invoke_syscall+0x50/0x120
    sshd-session-15489   [000] ..... 493917.822768: <stack trace>
 => __arm64_sys_write+0x8/0x40
 => invoke_syscall+0x50/0x120
 => el0_svc_common.constprop.0+0x48/0xf0
 => do_el0_svc+0x24/0x38
 => el0_svc+0x30/0xf8
 => el0t_64_sync_handler+0x120/0x130
 => el0t_64_sync+0x190/0x198
    sshd-session-15489   [000] ..... 493917.844953: __arm64_sys_write+0x4/0x40 <-invoke_syscall+0x50/0x120
    sshd-session-15489   [000] ..... 493917.844956: <stack trace>
 => __arm64_sys_write+0x8/0x40
 => invoke_syscall+0x50/0x120
 => el0_svc_common.constprop.0+0x48/0xf0
 => do_el0_svc+0x24/0x38
 => el0_svc+0x30/0xf8
 => el0t_64_sync_handler+0x120/0x130
 => el0t_64_sync+0x190/0x198
    sshd-session-15489   [000] ..... 493917.866960: __arm64_sys_write+0x4/0x40 <-invoke_syscall+0x50/0x120
    sshd-session-15489   [000] ..... 493917.866964: <stack trace>
 => __arm64_sys_write+0x8/0x40
 => invoke_syscall+0x50/0x120
 => el0_svc_common.constprop.0+0x48/0xf0
 => do_el0_svc+0x24/0x38
 => el0_svc+0x30/0xf8
 => el0t_64_sync_handler+0x120/0x130
 => el0t_64_sync+0x190/0x198
    sshd-session-15489   [000] ..... 493917.890211: __arm64_sys_write+0x4/0x40 <-invoke_syscall+0x50/0x120
    sshd-session-15489   [000] ..... 493917.890215: <stack trace>
 => __arm64_sys_write+0x8/0x40
 => invoke_syscall+0x50/0x120
 => el0_svc_common.constprop.0+0x48/0xf0
 => do_el0_svc+0x24/0x38
 => el0_svc+0x30/0xf8
 => el0t_64_sync_handler+0x120/0x130
 => el0t_64_sync+0x190/0x198
    sshd-session-15489   [000] ..... 493917.912912: __arm64_sys_write+0x4/0x40 <-invoke_syscall+0x50/0x120
    sshd-session-15489   [000] ..... 493917.912916: <stack trace>
 => __arm64_sys_write+0x8/0x40
 => invoke_syscall+0x50/0x120
 => el0_svc_common.constprop.0+0x48/0xf0
 => do_el0_svc+0x24/0x38
 => el0_svc+0x30/0xf8
 => el0t_64_sync_handler+0x120/0x130
 => el0t_64_sync+0x190/0x198
    sshd-session-15489   [000] ..... 493917.936884: __arm64_sys_write+0x4/0x40 <-invoke_syscall+0x50/0x120
    sshd-session-15489   [000] ..... 493917.936888: <stack trace>
 => __arm64_sys_write+0x8/0x40
 => invoke_syscall+0x50/0x120
 => el0_svc_common.constprop.0+0x48/0xf0
 => do_el0_svc+0x24/0x38
 => el0_svc+0x30/0xf8
 => el0t_64_sync_handler+0x120/0x130
 => el0t_64_sync+0x190/0x198
    sshd-session-15489   [000] ..... 493917.960923: __arm64_sys_write+0x4/0x40 <-invoke_syscall+0x50/0x120
    sshd-session-15489   [000] ..... 493917.960927: <stack trace>
 => __arm64_sys_write+0x8/0x40
 => invoke_syscall+0x50/0x120
 => el0_svc_common.constprop.0+0x48/0xf0
 => do_el0_svc+0x24/0x38
 => el0_svc+0x30/0xf8
 => el0t_64_sync_handler+0x120/0x130
 => el0t_64_sync+0x190/0x198
    sshd-session-15489   [000] ..... 493917.982580: __arm64_sys_write+0x4/0x40 <-invoke_syscall+0x50/0x120
    sshd-session-15489   [000] ..... 493917.982583: <stack trace>
 => __arm64_sys_write+0x8/0x40
 => invoke_syscall+0x50/0x120
 => el0_svc_common.constprop.0+0x48/0xf0
 => do_el0_svc+0x24/0x38
 => el0_svc+0x30/0xf8
 => el0t_64_sync_handler+0x120/0x130
 => el0t_64_sync+0x190/0x198
    sshd-session-15489   [000] ..... 493918.002580: __arm64_sys_write+0x4/0x40 <-invoke_syscall+0x50/0x120
    sshd-session-15489   [000] ..... 493918.002583: <stack trace>
 => __arm64_sys_write+0x8/0x40
 => invoke_syscall+0x50/0x120
 => el0_svc_common.constprop.0+0x48/0xf0
 => do_el0_svc+0x24/0x38
 => el0_svc+0x30/0xf8
 => el0t_64_sync_handler+0x120/0x130
 => el0t_64_sync+0x190/0x198
    sshd-session-15489   [002] ..... 493918.026017: __arm64_sys_write+0x4/0x40 <-invoke_syscall+0x50/0x120
    sshd-session-15489   [002] ..... 493918.026021: <stack trace>
 => __arm64_sys_write+0x8/0x40
 => invoke_syscall+0x50/0x120
 => el0_svc_common.constprop.0+0x48/0xf0
 => do_el0_svc+0x24/0x38
 => el0_svc+0x30/0xf8
 => el0t_64_sync_handler+0x120/0x130
 => el0t_64_sync+0x190/0x198
    sshd-session-15489   [002] ..... 493918.049690: __arm64_sys_write+0x4/0x40 <-invoke_syscall+0x50/0x120
    sshd-session-15489   [002] ..... 493918.049694: <stack trace>
 => __arm64_sys_write+0x8/0x40
 => invoke_syscall+0x50/0x120
 => el0_svc_common.constprop.0+0x48/0xf0
 => do_el0_svc+0x24/0x38
 => el0_svc+0x30/0xf8
 => el0t_64_sync_handler+0x120/0x130
 => el0t_64_sync+0x190/0x198
            bash-15508   [000] ..... 493918.049876: __arm64_sys_write+0x4/0x40 <-invoke_syscall+0x50/0x120
            bash-15508   [000] ..... 493918.049880: <stack trace>
 => __arm64_sys_write+0x8/0x40
 => invoke_syscall+0x50/0x120
 => el0_svc_common.constprop.0+0x48/0xf0
 => do_el0_svc+0x24/0x38
 => el0_svc+0x30/0xf8
 => el0t_64_sync_handler+0x120/0x130
 => el0t_64_sync+0x190/0x198
    sshd-session-15489   [002] ..... 493918.050014: __arm64_sys_write+0x4/0x40 <-invoke_syscall+0x50/0x120
    sshd-session-15489   [002] ..... 493918.050018: <stack trace>
 => __arm64_sys_write+0x8/0x40
 => invoke_syscall+0x50/0x120
 => el0_svc_common.constprop.0+0x48/0xf0
 => do_el0_svc+0x24/0x38
 => el0_svc+0x30/0xf8
 => el0t_64_sync_handler+0x120/0x130
 => el0t_64_sync+0x190/0x198
    sshd-session-15489   [002] ..... 493918.069827: __arm64_sys_write+0x4/0x40 <-invoke_syscall+0x50/0x120
    sshd-session-15489   [002] ..... 493918.069830: <stack trace>
 => __arm64_sys_write+0x8/0x40
 => invoke_syscall+0x50/0x120
 => el0_svc_common.constprop.0+0x48/0xf0
 => do_el0_svc+0x24/0x38
 => el0_svc+0x30/0xf8
 => el0t_64_sync_handler+0x120/0x130
 => el0t_64_sync+0x190/0x198
    sshd-session-15489   [002] ..... 493918.092664: __arm64_sys_write+0x4/0x40 <-invoke_syscall+0x50/0x120
    sshd-session-15489   [002] ..... 493918.092668: <stack trace>
 => __arm64_sys_write+0x8/0x40
 => invoke_syscall+0x50/0x120
 => el0_svc_common.constprop.0+0x48/0xf0
 => do_el0_svc+0x24/0x38
 => el0_svc+0x30/0xf8
 => el0t_64_sync_handler+0x120/0x130
 => el0t_64_sync+0x190/0x198
    sshd-session-15489   [002] ..... 493918.115477: __arm64_sys_write+0x4/0x40 <-invoke_syscall+0x50/0x120
    sshd-session-15489   [002] ..... 493918.115480: <stack trace>
 => __arm64_sys_write+0x8/0x40
 => invoke_syscall+0x50/0x120
 => el0_svc_common.constprop.0+0x48/0xf0
 => do_el0_svc+0x24/0x38
 => el0_svc+0x30/0xf8
 => el0t_64_sync_handler+0x120/0x130
 => el0t_64_sync+0x190/0x198
    sshd-session-15489   [002] ..... 493918.138247: __arm64_sys_write+0x4/0x40 <-invoke_syscall+0x50/0x120
    sshd-session-15489   [002] ..... 493918.138251: <stack trace>
 => __arm64_sys_write+0x8/0x40
 => invoke_syscall+0x50/0x120
 => el0_svc_common.constprop.0+0x48/0xf0
 => do_el0_svc+0x24/0x38
 => el0_svc+0x30/0xf8
 => el0t_64_sync_handler+0x120/0x130
 => el0t_64_sync+0x190/0x198
    sshd-session-15489   [002] ..... 493918.160885: __arm64_sys_write+0x4/0x40 <-invoke_syscall+0x50/0x120
    sshd-session-15489   [002] ..... 493918.160888: <stack trace>
 => __arm64_sys_write+0x8/0x40
 => invoke_syscall+0x50/0x120
 => el0_svc_common.constprop.0+0x48/0xf0
 => do_el0_svc+0x24/0x38
 => el0_svc+0x30/0xf8
 => el0t_64_sync_handler+0x120/0x130
 => el0t_64_sync+0x190/0x198
    sshd-session-15489   [002] ..... 493918.182848: __arm64_sys_write+0x4/0x40 <-invoke_syscall+0x50/0x120
    sshd-session-15489   [002] ..... 493918.182851: <stack trace>
 => __arm64_sys_write+0x8/0x40
 => invoke_syscall+0x50/0x120
 => el0_svc_common.constprop.0+0x48/0xf0
 => do_el0_svc+0x24/0x38
 => el0_svc+0x30/0xf8
 => el0t_64_sync_handler+0x120/0x130
 => el0t_64_sync+0x190/0x198
    sshd-session-15489   [002] ..... 493918.206798: __arm64_sys_write+0x4/0x40 <-invoke_syscall+0x50/0x120
    sshd-session-15489   [002] ..... 493918.206802: <stack trace>
 => __arm64_sys_write+0x8/0x40
 => invoke_syscall+0x50/0x120
 => el0_svc_common.constprop.0+0x48/0xf0
 => do_el0_svc+0x24/0x38
 => el0_svc+0x30/0xf8
 => el0t_64_sync_handler+0x120/0x130
 => el0t_64_sync+0x190/0x198
    sshd-session-15489   [002] ..... 493918.313131: __arm64_sys_write+0x4/0x40 <-invoke_syscall+0x50/0x120
    sshd-session-15489   [002] ..... 493918.313137: <stack trace>
 => __arm64_sys_write+0x8/0x40
 => invoke_syscall+0x50/0x120
 => el0_svc_common.constprop.0+0x48/0xf0
 => do_el0_svc+0x24/0x38
 => el0_svc+0x30/0xf8
 => el0t_64_sync_handler+0x120/0x130
 => el0t_64_sync+0x190/0x198
    sshd-session-15489   [002] ..... 493918.313206: __arm64_sys_write+0x4/0x40 <-invoke_syscall+0x50/0x120
    sshd-session-15489   [002] ..... 493918.313209: <stack trace>
 => __arm64_sys_write+0x8/0x40
 => invoke_syscall+0x50/0x120
 => el0_svc_common.constprop.0+0x48/0xf0
 => do_el0_svc+0x24/0x38
 => el0_svc+0x30/0xf8
 => el0t_64_sync_handler+0x120/0x130
 => el0t_64_sync+0x190/0x198
            bash-15508   [000] ..... 493918.313451: __arm64_sys_write+0x4/0x40 <-invoke_syscall+0x50/0x120
            bash-15508   [000] ..... 493918.313456: <stack trace>
 => __arm64_sys_write+0x8/0x40
 => invoke_syscall+0x50/0x120
 => el0_svc_common.constprop.0+0x48/0xf0
 => do_el0_svc+0x24/0x38
 => el0_svc+0x30/0xf8
 => el0t_64_sync_handler+0x120/0x130
 => el0t_64_sync+0x190/0x198
    sshd-session-15489   [002] ..... 493918.313604: __arm64_sys_write+0x4/0x40 <-invoke_syscall+0x50/0x120
    sshd-session-15489   [002] ..... 493918.313608: <stack trace>
 => __arm64_sys_write+0x8/0x40
 => invoke_syscall+0x50/0x120
 => el0_svc_common.constprop.0+0x48/0xf0
 => do_el0_svc+0x24/0x38
 => el0_svc+0x30/0xf8
 => el0t_64_sync_handler+0x120/0x130
 => el0t_64_sync+0x190/0x198
    sshd-session-15489   [002] ..... 493918.322597: __arm64_sys_write+0x4/0x40 <-invoke_syscall+0x50/0x120
    sshd-session-15489   [002] ..... 493918.322600: <stack trace>
 => __arm64_sys_write+0x8/0x40
 => invoke_syscall+0x50/0x120
 => el0_svc_common.constprop.0+0x48/0xf0
 => do_el0_svc+0x24/0x38
 => el0_svc+0x30/0xf8
 => el0t_64_sync_handler+0x120/0x130
 => el0t_64_sync+0x190/0x198
    sshd-session-15489   [002] ..... 493918.344630: __arm64_sys_write+0x4/0x40 <-invoke_syscall+0x50/0x120
    sshd-session-15489   [002] ..... 493918.344634: <stack trace>
 => __arm64_sys_write+0x8/0x40
 => invoke_syscall+0x50/0x120
 => el0_svc_common.constprop.0+0x48/0xf0
 => do_el0_svc+0x24/0x38
 => el0_svc+0x30/0xf8
 => el0t_64_sync_handler+0x120/0x130
 => el0t_64_sync+0x190/0x198
    sshd-session-15489   [002] ..... 493918.369275: __arm64_sys_write+0x4/0x40 <-invoke_syscall+0x50/0x120
    sshd-session-15489   [002] ..... 493918.369278: <stack trace>
 => __arm64_sys_write+0x8/0x40
 => invoke_syscall+0x50/0x120
 => el0_svc_common.constprop.0+0x48/0xf0
 => do_el0_svc+0x24/0x38
 => el0_svc+0x30/0xf8
 => el0t_64_sync_handler+0x120/0x130
 => el0t_64_sync+0x190/0x198
    sshd-session-15489   [002] ..... 493918.388370: __arm64_sys_write+0x4/0x40 <-invoke_syscall+0x50/0x120
    sshd-session-15489   [002] ..... 493918.388373: <stack trace>
 => __arm64_sys_write+0x8/0x40
 => invoke_syscall+0x50/0x120
 => el0_svc_common.constprop.0+0x48/0xf0
 => do_el0_svc+0x24/0x38
 => el0_svc+0x30/0xf8
 => el0t_64_sync_handler+0x120/0x130
 => el0t_64_sync+0x190/0x198
    sshd-session-15489   [002] ..... 493918.413253: __arm64_sys_write+0x4/0x40 <-invoke_syscall+0x50/0x120
    sshd-session-15489   [002] ..... 493918.413257: <stack trace>
 => __arm64_sys_write+0x8/0x40
 => invoke_syscall+0x50/0x120
 => el0_svc_common.constprop.0+0x48/0xf0
 => do_el0_svc+0x24/0x38
 => el0_svc+0x30/0xf8
 => el0t_64_sync_handler+0x120/0x130
 => el0t_64_sync+0x190/0x198
    sshd-session-15489   [002] ..... 493918.432639: __arm64_sys_write+0x4/0x40 <-invoke_syscall+0x50/0x120
    sshd-session-15489   [002] ..... 493918.432643: <stack trace>
 => __arm64_sys_write+0x8/0x40
 => invoke_syscall+0x50/0x120
 => el0_svc_common.constprop.0+0x48/0xf0
 => do_el0_svc+0x24/0x38
 => el0_svc+0x30/0xf8
 => el0t_64_sync_handler+0x120/0x130
 => el0t_64_sync+0x190/0x198
            bash-15508   [000] ..... 493918.432779: __arm64_sys_write+0x4/0x40 <-invoke_syscall+0x50/0x120
            bash-15508   [000] ..... 493918.432783: <stack trace>
 => __arm64_sys_write+0x8/0x40
 => invoke_syscall+0x50/0x120
 => el0_svc_common.constprop.0+0x48/0xf0
 => do_el0_svc+0x24/0x38
 => el0_svc+0x30/0xf8
 => el0t_64_sync_handler+0x120/0x130
 => el0t_64_sync+0x190/0x198
    sshd-session-15489   [002] ..... 493918.432906: __arm64_sys_write+0x4/0x40 <-invoke_syscall+0x50/0x120
    sshd-session-15489   [002] ..... 493918.432909: <stack trace>
 => __arm64_sys_write+0x8/0x40
 => invoke_syscall+0x50/0x120
 => el0_svc_common.constprop.0+0x48/0xf0
 => do_el0_svc+0x24/0x38
 => el0_svc+0x30/0xf8
 => el0t_64_sync_handler+0x120/0x130
 => el0t_64_sync+0x190/0x198
    sshd-session-15489   [002] ..... 493918.455351: __arm64_sys_write+0x4/0x40 <-invoke_syscall+0x50/0x120
    sshd-session-15489   [002] ..... 493918.455355: <stack trace>
 => __arm64_sys_write+0x8/0x40
 => invoke_syscall+0x50/0x120
 => el0_svc_common.constprop.0+0x48/0xf0
 => do_el0_svc+0x24/0x38
 => el0_svc+0x30/0xf8
 => el0t_64_sync_handler+0x120/0x130
 => el0t_64_sync+0x190/0x198
    sshd-session-15489   [002] ..... 493918.479045: __arm64_sys_write+0x4/0x40 <-invoke_syscall+0x50/0x120
    sshd-session-15489   [002] ..... 493918.479049: <stack trace>
 => __arm64_sys_write+0x8/0x40
 => invoke_syscall+0x50/0x120
 => el0_svc_common.constprop.0+0x48/0xf0
 => do_el0_svc+0x24/0x38
 => el0_svc+0x30/0xf8
 => el0t_64_sync_handler+0x120/0x130
 => el0t_64_sync+0x190/0x198
    sshd-session-15489   [002] ..... 493918.503121: __arm64_sys_write+0x4/0x40 <-invoke_syscall+0x50/0x120
    sshd-session-15489   [002] ..... 493918.503125: <stack trace>
 => __arm64_sys_write+0x8/0x40
 => invoke_syscall+0x50/0x120
 => el0_svc_common.constprop.0+0x48/0xf0
 => do_el0_svc+0x24/0x38
 => el0_svc+0x30/0xf8
 => el0t_64_sync_handler+0x120/0x130
 => el0t_64_sync+0x190/0x198
    sshd-session-15489   [002] ..... 493918.524663: __arm64_sys_write+0x4/0x40 <-invoke_syscall+0x50/0x120
    sshd-session-15489   [002] ..... 493918.524667: <stack trace>
 => __arm64_sys_write+0x8/0x40
 => invoke_syscall+0x50/0x120
 => el0_svc_common.constprop.0+0x48/0xf0
 => do_el0_svc+0x24/0x38
 => el0_svc+0x30/0xf8
 => el0t_64_sync_handler+0x120/0x130
 => el0t_64_sync+0x190/0x198
    sshd-session-15489   [002] ..... 493918.547957: __arm64_sys_write+0x4/0x40 <-invoke_syscall+0x50/0x120
    sshd-session-15489   [002] ..... 493918.547961: <stack trace>
 => __arm64_sys_write+0x8/0x40
 => invoke_syscall+0x50/0x120
 => el0_svc_common.constprop.0+0x48/0xf0
 => do_el0_svc+0x24/0x38
 => el0_svc+0x30/0xf8
 => el0t_64_sync_handler+0x120/0x130
 => el0t_64_sync+0x190/0x198
    sshd-session-15489   [002] ..... 493918.572851: __arm64_sys_write+0x4/0x40 <-invoke_syscall+0x50/0x120
    sshd-session-15489   [002] ..... 493918.572854: <stack trace>
 => __arm64_sys_write+0x8/0x40
 => invoke_syscall+0x50/0x120
 => el0_svc_common.constprop.0+0x48/0xf0
 => do_el0_svc+0x24/0x38
 => el0_svc+0x30/0xf8
 => el0t_64_sync_handler+0x120/0x130
 => el0t_64_sync+0x190/0x198
    sshd-session-15489   [002] ..... 493918.593595: __arm64_sys_write+0x4/0x40 <-invoke_syscall+0x50/0x120
    sshd-session-15489   [002] ..... 493918.593599: <stack trace>
 => __arm64_sys_write+0x8/0x40
 => invoke_syscall+0x50/0x120
 => el0_svc_common.constprop.0+0x48/0xf0
 => do_el0_svc+0x24/0x38
 => el0_svc+0x30/0xf8
 => el0t_64_sync_handler+0x120/0x130
 => el0t_64_sync+0x190/0x198
    sshd-session-15489   [002] ..... 493918.615159: __arm64_sys_write+0x4/0x40 <-invoke_syscall+0x50/0x120
    sshd-session-15489   [002] ..... 493918.615162: <stack trace>
 => __arm64_sys_write+0x8/0x40
 => invoke_syscall+0x50/0x120
 => el0_svc_common.constprop.0+0x48/0xf0
 => do_el0_svc+0x24/0x38
 => el0_svc+0x30/0xf8
 => el0t_64_sync_handler+0x120/0x130
 => el0t_64_sync+0x190/0x198
    sshd-session-15489   [002] ..... 493918.637965: __arm64_sys_write+0x4/0x40 <-invoke_syscall+0x50/0x120
    sshd-session-15489   [002] ..... 493918.637968: <stack trace>
 => __arm64_sys_write+0x8/0x40
 => invoke_syscall+0x50/0x120
 => el0_svc_common.constprop.0+0x48/0xf0
 => do_el0_svc+0x24/0x38
 => el0_svc+0x30/0xf8
 => el0t_64_sync_handler+0x120/0x130
 => el0t_64_sync+0x190/0x198
    sshd-session-15489   [002] ..... 493918.658968: __arm64_sys_write+0x4/0x40 <-invoke_syscall+0x50/0x120
    sshd-session-15489   [002] ..... 493918.658973: <stack trace>
 => __arm64_sys_write+0x8/0x40
 => invoke_syscall+0x50/0x120
 => el0_svc_common.constprop.0+0x48/0xf0
 => do_el0_svc+0x24/0x38
 => el0_svc+0x30/0xf8
 => el0t_64_sync_handler+0x120/0x130
 => el0t_64_sync+0x190/0x198
    sshd-session-15489   [002] ..... 493918.681561: __arm64_sys_write+0x4/0x40 <-invoke_syscall+0x50/0x120
    sshd-session-15489   [002] ..... 493918.681564: <stack trace>
 => __arm64_sys_write+0x8/0x40
 => invoke_syscall+0x50/0x120
 => el0_svc_common.constprop.0+0x48/0xf0
 => do_el0_svc+0x24/0x38
 => el0_svc+0x30/0xf8
 => el0t_64_sync_handler+0x120/0x130
 => el0t_64_sync+0x190/0x198
    sshd-session-15489   [002] ..... 493918.703073: __arm64_sys_write+0x4/0x40 <-invoke_syscall+0x50/0x120
    sshd-session-15489   [002] ..... 493918.703076: <stack trace>
 => __arm64_sys_write+0x8/0x40
 => invoke_syscall+0x50/0x120
 => el0_svc_common.constprop.0+0x48/0xf0
 => do_el0_svc+0x24/0x38
 => el0_svc+0x30/0xf8
 => el0t_64_sync_handler+0x120/0x130
 => el0t_64_sync+0x190/0x198
    sshd-session-15489   [002] ..... 493918.726485: __arm64_sys_write+0x4/0x40 <-invoke_syscall+0x50/0x120
    sshd-session-15489   [002] ..... 493918.726488: <stack trace>
 => __arm64_sys_write+0x8/0x40
 => invoke_syscall+0x50/0x120
 => el0_svc_common.constprop.0+0x48/0xf0
 => do_el0_svc+0x24/0x38
 => el0_svc+0x30/0xf8
 => el0t_64_sync_handler+0x120/0x130
 => el0t_64_sync+0x190/0x198
    sshd-session-15489   [002] ..... 493918.836581: __arm64_sys_write+0x4/0x40 <-invoke_syscall+0x50/0x120
    sshd-session-15489   [002] ..... 493918.836585: <stack trace>
 => __arm64_sys_write+0x8/0x40
 => invoke_syscall+0x50/0x120
 => el0_svc_common.constprop.0+0x48/0xf0
 => do_el0_svc+0x24/0x38
 => el0_svc+0x30/0xf8
 => el0t_64_sync_handler+0x120/0x130
 => el0t_64_sync+0x190/0x198
    sshd-session-15489   [002] ..... 493918.836819: __arm64_sys_write+0x4/0x40 <-invoke_syscall+0x50/0x120
    sshd-session-15489   [002] ..... 493918.836822: <stack trace>
 => __arm64_sys_write+0x8/0x40
 => invoke_syscall+0x50/0x120
 => el0_svc_common.constprop.0+0x48/0xf0
 => do_el0_svc+0x24/0x38
 => el0_svc+0x30/0xf8
 => el0t_64_sync_handler+0x120/0x130
 => el0t_64_sync+0x190/0x198
    sshd-session-15489   [002] ..... 493918.846937: __arm64_sys_write+0x4/0x40 <-invoke_syscall+0x50/0x120
    sshd-session-15489   [002] ..... 493918.846940: <stack trace>
 => __arm64_sys_write+0x8/0x40
 => invoke_syscall+0x50/0x120
 => el0_svc_common.constprop.0+0x48/0xf0
 => do_el0_svc+0x24/0x38
 => el0_svc+0x30/0xf8
 => el0t_64_sync_handler+0x120/0x130
 => el0t_64_sync+0x190/0x198
    sshd-session-15489   [002] ..... 493918.870554: __arm64_sys_write+0x4/0x40 <-invoke_syscall+0x50/0x120
    sshd-session-15489   [002] ..... 493918.870558: <stack trace>
 => __arm64_sys_write+0x8/0x40
 => invoke_syscall+0x50/0x120
 => el0_svc_common.constprop.0+0x48/0xf0
 => do_el0_svc+0x24/0x38
 => el0_svc+0x30/0xf8
 => el0t_64_sync_handler+0x120/0x130
 => el0t_64_sync+0x190/0x198
    sshd-session-15489   [002] ..... 493918.893411: __arm64_sys_write+0x4/0x40 <-invoke_syscall+0x50/0x120
    sshd-session-15489   [002] ..... 493918.893414: <stack trace>
 => __arm64_sys_write+0x8/0x40
 => invoke_syscall+0x50/0x120
 => el0_svc_common.constprop.0+0x48/0xf0
 => do_el0_svc+0x24/0x38
 => el0_svc+0x30/0xf8
 => el0t_64_sync_handler+0x120/0x130
 => el0t_64_sync+0x190/0x198
    sshd-session-15489   [002] ..... 493918.914178: __arm64_sys_write+0x4/0x40 <-invoke_syscall+0x50/0x120
    sshd-session-15489   [002] ..... 493918.914182: <stack trace>
 => __arm64_sys_write+0x8/0x40
 => invoke_syscall+0x50/0x120
 => el0_svc_common.constprop.0+0x48/0xf0
 => do_el0_svc+0x24/0x38
 => el0_svc+0x30/0xf8
 => el0t_64_sync_handler+0x120/0x130
 => el0t_64_sync+0x190/0x198
    sshd-session-15489   [002] ..... 493918.938258: __arm64_sys_write+0x4/0x40 <-invoke_syscall+0x50/0x120
    sshd-session-15489   [002] ..... 493918.938262: <stack trace>
 => __arm64_sys_write+0x8/0x40
 => invoke_syscall+0x50/0x120
 => el0_svc_common.constprop.0+0x48/0xf0
 => do_el0_svc+0x24/0x38
 => el0_svc+0x30/0xf8
 => el0t_64_sync_handler+0x120/0x130
 => el0t_64_sync+0x190/0x198
    sshd-session-15489   [002] ..... 493918.960061: __arm64_sys_write+0x4/0x40 <-invoke_syscall+0x50/0x120
    sshd-session-15489   [002] ..... 493918.960064: <stack trace>
 => __arm64_sys_write+0x8/0x40
 => invoke_syscall+0x50/0x120
 => el0_svc_common.constprop.0+0x48/0xf0
 => do_el0_svc+0x24/0x38
 => el0_svc+0x30/0xf8
 => el0t_64_sync_handler+0x120/0x130
 => el0t_64_sync+0x190/0x198
            bash-15508   [000] ..... 493918.960190: __arm64_sys_write+0x4/0x40 <-invoke_syscall+0x50/0x120
            bash-15508   [000] ..... 493918.960194: <stack trace>
 => __arm64_sys_write+0x8/0x40
 => invoke_syscall+0x50/0x120
 => el0_svc_common.constprop.0+0x48/0xf0
 => do_el0_svc+0x24/0x38
 => el0_svc+0x30/0xf8
 => el0t_64_sync_handler+0x120/0x130
 => el0t_64_sync+0x190/0x198
    sshd-session-15489   [002] ..... 493918.960335: __arm64_sys_write+0x4/0x40 <-invoke_syscall+0x50/0x120
    sshd-session-15489   [002] ..... 493918.960338: <stack trace>
 => __arm64_sys_write+0x8/0x40
 => invoke_syscall+0x50/0x120
 => el0_svc_common.constprop.0+0x48/0xf0
 => do_el0_svc+0x24/0x38
 => el0_svc+0x30/0xf8
 => el0t_64_sync_handler+0x120/0x130
 => el0t_64_sync+0x190/0x198
    sshd-session-15489   [002] ..... 493918.983586: __arm64_sys_write+0x4/0x40 <-invoke_syscall+0x50/0x120
    sshd-session-15489   [002] ..... 493918.983589: <stack trace>
 => __arm64_sys_write+0x8/0x40
 => invoke_syscall+0x50/0x120
 => el0_svc_common.constprop.0+0x48/0xf0
 => do_el0_svc+0x24/0x38
 => el0_svc+0x30/0xf8
 => el0t_64_sync_handler+0x120/0x130
 => el0t_64_sync+0x190/0x198
    sshd-session-15489   [002] ..... 493919.006981: __arm64_sys_write+0x4/0x40 <-invoke_syscall+0x50/0x120
    sshd-session-15489   [002] ..... 493919.006984: <stack trace>
 => __arm64_sys_write+0x8/0x40
 => invoke_syscall+0x50/0x120
 => el0_svc_common.constprop.0+0x48/0xf0
 => do_el0_svc+0x24/0x38
 => el0_svc+0x30/0xf8
 => el0t_64_sync_handler+0x120/0x130
 => el0t_64_sync+0x190/0x198
    sshd-session-15489   [002] ..... 493919.031004: __arm64_sys_write+0x4/0x40 <-invoke_syscall+0x50/0x120
    sshd-session-15489   [002] ..... 493919.031008: <stack trace>
 => __arm64_sys_write+0x8/0x40
 => invoke_syscall+0x50/0x120
 => el0_svc_common.constprop.0+0x48/0xf0
 => do_el0_svc+0x24/0x38
 => el0_svc+0x30/0xf8
 => el0t_64_sync_handler+0x120/0x130
 => el0t_64_sync+0x190/0x198
    sshd-session-15489   [002] ..... 493919.051720: __arm64_sys_write+0x4/0x40 <-invoke_syscall+0x50/0x120
    sshd-session-15489   [002] ..... 493919.051723: <stack trace>
 => __arm64_sys_write+0x8/0x40
 => invoke_syscall+0x50/0x120
 => el0_svc_common.constprop.0+0x48/0xf0
 => do_el0_svc+0x24/0x38
 => el0_svc+0x30/0xf8
 => el0t_64_sync_handler+0x120/0x130
 => el0t_64_sync+0x190/0x198
    sshd-session-15489   [002] ..... 493919.074014: __arm64_sys_write+0x4/0x40 <-invoke_syscall+0x50/0x120
    sshd-session-15489   [002] ..... 493919.074017: <stack trace>
 => __arm64_sys_write+0x8/0x40
 => invoke_syscall+0x50/0x120
 => el0_svc_common.constprop.0+0x48/0xf0
 => do_el0_svc+0x24/0x38
 => el0_svc+0x30/0xf8
 => el0t_64_sync_handler+0x120/0x130
 => el0t_64_sync+0x190/0x198
    sshd-session-15489   [002] ..... 493919.095917: __arm64_sys_write+0x4/0x40 <-invoke_syscall+0x50/0x120
    sshd-session-15489   [002] ..... 493919.095920: <stack trace>
 => __arm64_sys_write+0x8/0x40
 => invoke_syscall+0x50/0x120
 => el0_svc_common.constprop.0+0x48/0xf0
 => do_el0_svc+0x24/0x38
 => el0_svc+0x30/0xf8
 => el0t_64_sync_handler+0x120/0x130
 => el0t_64_sync+0x190/0x198
    sshd-session-15489   [002] ..... 493919.119541: __arm64_sys_write+0x4/0x40 <-invoke_syscall+0x50/0x120
    sshd-session-15489   [002] ..... 493919.119544: <stack trace>
 => __arm64_sys_write+0x8/0x40
 => invoke_syscall+0x50/0x120
 => el0_svc_common.constprop.0+0x48/0xf0
 => do_el0_svc+0x24/0x38
 => el0_svc+0x30/0xf8
 => el0t_64_sync_handler+0x120/0x130
 => el0t_64_sync+0x190/0x198
    sshd-session-15489   [002] ..... 493919.142232: __arm64_sys_write+0x4/0x40 <-invoke_syscall+0x50/0x120
    sshd-session-15489   [002] ..... 493919.142236: <stack trace>
 => __arm64_sys_write+0x8/0x40
 => invoke_syscall+0x50/0x120
 => el0_svc_common.constprop.0+0x48/0xf0
 => do_el0_svc+0x24/0x38
 => el0_svc+0x30/0xf8
 => el0t_64_sync_handler+0x120/0x130
 => el0t_64_sync+0x190/0x198
    sshd-session-15489   [002] ..... 493919.166017: __arm64_sys_write+0x4/0x40 <-invoke_syscall+0x50/0x120
    sshd-session-15489   [002] ..... 493919.166020: <stack trace>
 => __arm64_sys_write+0x8/0x40
 => invoke_syscall+0x50/0x120
 => el0_svc_common.constprop.0+0x48/0xf0
 => do_el0_svc+0x24/0x38
 => el0_svc+0x30/0xf8
 => el0t_64_sync_handler+0x120/0x130
 => el0t_64_sync+0x190/0x198
    sshd-session-15489   [002] ..... 493919.186536: __arm64_sys_write+0x4/0x40 <-invoke_syscall+0x50/0x120
    sshd-session-15489   [002] ..... 493919.186539: <stack trace>
 => __arm64_sys_write+0x8/0x40
 => invoke_syscall+0x50/0x120
 => el0_svc_common.constprop.0+0x48/0xf0
 => do_el0_svc+0x24/0x38
 => el0_svc+0x30/0xf8
 => el0t_64_sync_handler+0x120/0x130
 => el0t_64_sync+0x190/0x198
            bash-15508   [000] ..... 493919.186669: __arm64_sys_write+0x4/0x40 <-invoke_syscall+0x50/0x120
            bash-15508   [000] ..... 493919.186673: <stack trace>
 => __arm64_sys_write+0x8/0x40
 => invoke_syscall+0x50/0x120
 => el0_svc_common.constprop.0+0x48/0xf0
 => do_el0_svc+0x24/0x38
 => el0_svc+0x30/0xf8
 => el0t_64_sync_handler+0x120/0x130
 => el0t_64_sync+0x190/0x198
    sshd-session-15489   [002] ..... 493919.186809: __arm64_sys_write+0x4/0x40 <-invoke_syscall+0x50/0x120
    sshd-session-15489   [002] ..... 493919.186812: <stack trace>
 => __arm64_sys_write+0x8/0x40
 => invoke_syscall+0x50/0x120
 => el0_svc_common.constprop.0+0x48/0xf0
 => do_el0_svc+0x24/0x38
 => el0_svc+0x30/0xf8
 => el0t_64_sync_handler+0x120/0x130
 => el0t_64_sync+0x190/0x198
    sshd-session-15489   [002] ..... 493919.209807: __arm64_sys_write+0x4/0x40 <-invoke_syscall+0x50/0x120
    sshd-session-15489   [002] ..... 493919.209811: <stack trace>
 => __arm64_sys_write+0x8/0x40
 => invoke_syscall+0x50/0x120
 => el0_svc_common.constprop.0+0x48/0xf0
 => do_el0_svc+0x24/0x38
 => el0_svc+0x30/0xf8
 => el0t_64_sync_handler+0x120/0x130
 => el0t_64_sync+0x190/0x198
    sshd-session-15489   [002] ..... 493919.232598: __arm64_sys_write+0x4/0x40 <-invoke_syscall+0x50/0x120
    sshd-session-15489   [002] ..... 493919.232601: <stack trace>
 => __arm64_sys_write+0x8/0x40
 => invoke_syscall+0x50/0x120
 => el0_svc_common.constprop.0+0x48/0xf0
 => do_el0_svc+0x24/0x38
 => el0_svc+0x30/0xf8
 => el0t_64_sync_handler+0x120/0x130
 => el0t_64_sync+0x190/0x198
    sshd-session-15489   [002] ..... 493919.253904: __arm64_sys_write+0x4/0x40 <-invoke_syscall+0x50/0x120
    sshd-session-15489   [002] ..... 493919.253907: <stack trace>
 => __arm64_sys_write+0x8/0x40
 => invoke_syscall+0x50/0x120
 => el0_svc_common.constprop.0+0x48/0xf0
 => do_el0_svc+0x24/0x38
 => el0_svc+0x30/0xf8
 => el0t_64_sync_handler+0x120/0x130
 => el0t_64_sync+0x190/0x198
    sshd-session-15489   [000] ..... 493919.361588: __arm64_sys_write+0x4/0x40 <-invoke_syscall+0x50/0x120
    sshd-session-15489   [000] ..... 493919.361592: <stack trace>
 => __arm64_sys_write+0x8/0x40
 => invoke_syscall+0x50/0x120
 => el0_svc_common.constprop.0+0x48/0xf0
 => do_el0_svc+0x24/0x38
 => el0_svc+0x30/0xf8
 => el0t_64_sync_handler+0x120/0x130
 => el0t_64_sync+0x190/0x198
    sshd-session-15489   [000] ..... 493919.361619: __arm64_sys_write+0x4/0x40 <-invoke_syscall+0x50/0x120
    sshd-session-15489   [000] ..... 493919.361621: <stack trace>
 => __arm64_sys_write+0x8/0x40
 => invoke_syscall+0x50/0x120
 => el0_svc_common.constprop.0+0x48/0xf0
 => do_el0_svc+0x24/0x38
 => el0_svc+0x30/0xf8
 => el0t_64_sync_handler+0x120/0x130
 => el0t_64_sync+0x190/0x198
            bash-15508   [000] ..... 493919.361915: __arm64_sys_write+0x4/0x40 <-invoke_syscall+0x50/0x120
            bash-15508   [000] ..... 493919.361919: <stack trace>
 => __arm64_sys_write+0x8/0x40
 => invoke_syscall+0x50/0x120
 => el0_svc_common.constprop.0+0x48/0xf0
 => do_el0_svc+0x24/0x38
 => el0_svc+0x30/0xf8
 => el0t_64_sync_handler+0x120/0x130
 => el0t_64_sync+0x190/0x198
    sshd-session-15489   [000] ..... 493919.362068: __arm64_sys_write+0x4/0x40 <-invoke_syscall+0x50/0x120
    sshd-session-15489   [000] ..... 493919.362071: <stack trace>
 => __arm64_sys_write+0x8/0x40
 => invoke_syscall+0x50/0x120
 => el0_svc_common.constprop.0+0x48/0xf0
 => do_el0_svc+0x24/0x38
 => el0_svc+0x30/0xf8
 => el0t_64_sync_handler+0x120/0x130
 => el0t_64_sync+0x190/0x198
    sshd-session-15489   [000] ..... 493919.371031: __arm64_sys_write+0x4/0x40 <-invoke_syscall+0x50/0x120
    sshd-session-15489   [000] ..... 493919.371035: <stack trace>
 => __arm64_sys_write+0x8/0x40
 => invoke_syscall+0x50/0x120
 => el0_svc_common.constprop.0+0x48/0xf0
 => do_el0_svc+0x24/0x38
 => el0_svc+0x30/0xf8
 => el0t_64_sync_handler+0x120/0x130
 => el0t_64_sync+0x190/0x198
    sshd-session-15489   [000] ..... 493919.391907: __arm64_sys_write+0x4/0x40 <-invoke_syscall+0x50/0x120
    sshd-session-15489   [000] ..... 493919.391910: <stack trace>
 => __arm64_sys_write+0x8/0x40
 => invoke_syscall+0x50/0x120
 => el0_svc_common.constprop.0+0x48/0xf0
 => do_el0_svc+0x24/0x38
 => el0_svc+0x30/0xf8
 => el0t_64_sync_handler+0x120/0x130
 => el0t_64_sync+0x190/0x198
    sshd-session-15489   [000] ..... 493919.414014: __arm64_sys_write+0x4/0x40 <-invoke_syscall+0x50/0x120
    sshd-session-15489   [000] ..... 493919.414018: <stack trace>
 => __arm64_sys_write+0x8/0x40
 => invoke_syscall+0x50/0x120
 => el0_svc_common.constprop.0+0x48/0xf0
 => do_el0_svc+0x24/0x38
 => el0_svc+0x30/0xf8
 => el0t_64_sync_handler+0x120/0x130
 => el0t_64_sync+0x190/0x198
            bash-15508   [000] ..... 493919.414140: __arm64_sys_write+0x4/0x40 <-invoke_syscall+0x50/0x120
            bash-15508   [000] ..... 493919.414144: <stack trace>
 => __arm64_sys_write+0x8/0x40
 => invoke_syscall+0x50/0x120
 => el0_svc_common.constprop.0+0x48/0xf0
 => do_el0_svc+0x24/0x38
 => el0_svc+0x30/0xf8
 => el0t_64_sync_handler+0x120/0x130
 => el0t_64_sync+0x190/0x198
    sshd-session-15489   [000] ..... 493919.414298: __arm64_sys_write+0x4/0x40 <-invoke_syscall+0x50/0x120
    sshd-session-15489   [000] ..... 493919.414302: <stack trace>
 => __arm64_sys_write+0x8/0x40
 => invoke_syscall+0x50/0x120
 => el0_svc_common.constprop.0+0x48/0xf0
 => do_el0_svc+0x24/0x38
 => el0_svc+0x30/0xf8
 => el0t_64_sync_handler+0x120/0x130
 => el0t_64_sync+0x190/0x198
    sshd-session-15489   [000] ..... 493919.437183: __arm64_sys_write+0x4/0x40 <-invoke_syscall+0x50/0x120
    sshd-session-15489   [000] ..... 493919.437186: <stack trace>
 => __arm64_sys_write+0x8/0x40
 => invoke_syscall+0x50/0x120
 => el0_svc_common.constprop.0+0x48/0xf0
 => do_el0_svc+0x24/0x38
 => el0_svc+0x30/0xf8
 => el0t_64_sync_handler+0x120/0x130
 => el0t_64_sync+0x190/0x198
    sshd-session-15489   [000] ..... 493919.460502: __arm64_sys_write+0x4/0x40 <-invoke_syscall+0x50/0x120
    sshd-session-15489   [000] ..... 493919.460505: <stack trace>
 => __arm64_sys_write+0x8/0x40
 => invoke_syscall+0x50/0x120
 => el0_svc_common.constprop.0+0x48/0xf0
 => do_el0_svc+0x24/0x38
 => el0_svc+0x30/0xf8
 => el0t_64_sync_handler+0x120/0x130
 => el0t_64_sync+0x190/0x198
    sshd-session-15489   [000] ..... 493919.483180: __arm64_sys_write+0x4/0x40 <-invoke_syscall+0x50/0x120
    sshd-session-15489   [000] ..... 493919.483183: <stack trace>
 => __arm64_sys_write+0x8/0x40
 => invoke_syscall+0x50/0x120
 => el0_svc_common.constprop.0+0x48/0xf0
 => do_el0_svc+0x24/0x38
 => el0_svc+0x30/0xf8
 => el0t_64_sync_handler+0x120/0x130
 => el0t_64_sync+0x190/0x198
    sshd-session-15489   [000] ..... 493919.507385: __arm64_sys_write+0x4/0x40 <-invoke_syscall+0x50/0x120
    sshd-session-15489   [000] ..... 493919.507388: <stack trace>
 => __arm64_sys_write+0x8/0x40
 => invoke_syscall+0x50/0x120
 => el0_svc_common.constprop.0+0x48/0xf0
 => do_el0_svc+0x24/0x38
 => el0_svc+0x30/0xf8
 => el0t_64_sync_handler+0x120/0x130
 => el0t_64_sync+0x190/0x198
    sshd-session-15489   [000] ..... 493919.531156: __arm64_sys_write+0x4/0x40 <-invoke_syscall+0x50/0x120
    sshd-session-15489   [000] ..... 493919.531159: <stack trace>
 => __arm64_sys_write+0x8/0x40
 => invoke_syscall+0x50/0x120
 => el0_svc_common.constprop.0+0x48/0xf0
 => do_el0_svc+0x24/0x38
 => el0_svc+0x30/0xf8
 => el0t_64_sync_handler+0x120/0x130
 => el0t_64_sync+0x190/0x198
    sshd-session-15489   [000] ..... 493919.552847: __arm64_sys_write+0x4/0x40 <-invoke_syscall+0x50/0x120
    sshd-session-15489   [000] ..... 493919.552850: <stack trace>
 => __arm64_sys_write+0x8/0x40
 => invoke_syscall+0x50/0x120
 => el0_svc_common.constprop.0+0x48/0xf0
 => do_el0_svc+0x24/0x38
 => el0_svc+0x30/0xf8
 => el0t_64_sync_handler+0x120/0x130
 => el0t_64_sync+0x190/0x198
    sshd-session-15489   [000] ..... 493919.575918: __arm64_sys_write+0x4/0x40 <-invoke_syscall+0x50/0x120
    sshd-session-15489   [000] ..... 493919.575922: <stack trace>
 => __arm64_sys_write+0x8/0x40
 => invoke_syscall+0x50/0x120
 => el0_svc_common.constprop.0+0x48/0xf0
 => do_el0_svc+0x24/0x38
 => el0_svc+0x30/0xf8
 => el0t_64_sync_handler+0x120/0x130
 => el0t_64_sync+0x190/0x198
    sshd-session-15489   [000] ..... 493919.598369: __arm64_sys_write+0x4/0x40 <-invoke_syscall+0x50/0x120
    sshd-session-15489   [000] ..... 493919.598372: <stack trace>
 => __arm64_sys_write+0x8/0x40
 => invoke_syscall+0x50/0x120
 => el0_svc_common.constprop.0+0x48/0xf0
 => do_el0_svc+0x24/0x38
 => el0_svc+0x30/0xf8
 => el0t_64_sync_handler+0x120/0x130
 => el0t_64_sync+0x190/0x198
    sshd-session-15489   [000] ..... 493919.620577: __arm64_sys_write+0x4/0x40 <-invoke_syscall+0x50/0x120
    sshd-session-15489   [000] ..... 493919.620581: <stack trace>
 => __arm64_sys_write+0x8/0x40
 => invoke_syscall+0x50/0x120
 => el0_svc_common.constprop.0+0x48/0xf0
 => do_el0_svc+0x24/0x38
 => el0_svc+0x30/0xf8
 => el0t_64_sync_handler+0x120/0x130
 => el0t_64_sync+0x190/0x198
    sshd-session-15489   [000] ..... 493919.641707: __arm64_sys_write+0x4/0x40 <-invoke_syscall+0x50/0x120
    sshd-session-15489   [000] ..... 493919.641711: <stack trace>
 => __arm64_sys_write+0x8/0x40
 => invoke_syscall+0x50/0x120
 => el0_svc_common.constprop.0+0x48/0xf0
 => do_el0_svc+0x24/0x38
 => el0_svc+0x30/0xf8
 => el0t_64_sync_handler+0x120/0x130
 => el0t_64_sync+0x190/0x198
    sshd-session-15489   [000] ..... 493919.664802: __arm64_sys_write+0x4/0x40 <-invoke_syscall+0x50/0x120
    sshd-session-15489   [000] ..... 493919.664806: <stack trace>
 => __arm64_sys_write+0x8/0x40
 => invoke_syscall+0x50/0x120
 => el0_svc_common.constprop.0+0x48/0xf0
 => do_el0_svc+0x24/0x38
 => el0_svc+0x30/0xf8
 => el0t_64_sync_handler+0x120/0x130
 => el0t_64_sync+0x190/0x198
    sshd-session-15489   [000] ..... 493919.688044: __arm64_sys_write+0x4/0x40 <-invoke_syscall+0x50/0x120
    sshd-session-15489   [000] ..... 493919.688047: <stack trace>
 => __arm64_sys_write+0x8/0x40
 => invoke_syscall+0x50/0x120
 => el0_svc_common.constprop.0+0x48/0xf0
 => do_el0_svc+0x24/0x38
 => el0_svc+0x30/0xf8
 => el0t_64_sync_handler+0x120/0x130
 => el0t_64_sync+0x190/0x198
    sshd-session-15489   [000] ..... 493919.711265: __arm64_sys_write+0x4/0x40 <-invoke_syscall+0x50/0x120
    sshd-session-15489   [000] ..... 493919.711269: <stack trace>
 => __arm64_sys_write+0x8/0x40
 => invoke_syscall+0x50/0x120
 => el0_svc_common.constprop.0+0x48/0xf0
 => do_el0_svc+0x24/0x38
 => el0_svc+0x30/0xf8
 => el0t_64_sync_handler+0x120/0x130
 => el0t_64_sync+0x190/0x198
    sshd-session-15489   [000] ..... 493919.733637: __arm64_sys_write+0x4/0x40 <-invoke_syscall+0x50/0x120
    sshd-session-15489   [000] ..... 493919.733641: <stack trace>
 => __arm64_sys_write+0x8/0x40
 => invoke_syscall+0x50/0x120
 => el0_svc_common.constprop.0+0x48/0xf0
 => do_el0_svc+0x24/0x38
 => el0_svc+0x30/0xf8
 => el0t_64_sync_handler+0x120/0x130
 => el0t_64_sync+0x190/0x198
    sshd-session-15489   [000] ..... 493919.757159: __arm64_sys_write+0x4/0x40 <-invoke_syscall+0x50/0x120
    sshd-session-15489   [000] ..... 493919.757163: <stack trace>
 => __arm64_sys_write+0x8/0x40
 => invoke_syscall+0x50/0x120
 => el0_svc_common.constprop.0+0x48/0xf0
 => do_el0_svc+0x24/0x38
 => el0_svc+0x30/0xf8
 => el0t_64_sync_handler+0x120/0x130
 => el0t_64_sync+0x190/0x198
    sshd-session-15489   [000] ..... 493919.781157: __arm64_sys_write+0x4/0x40 <-invoke_syscall+0x50/0x120
    sshd-session-15489   [000] ..... 493919.781161: <stack trace>
 => __arm64_sys_write+0x8/0x40
 => invoke_syscall+0x50/0x120
 => el0_svc_common.constprop.0+0x48/0xf0
 => do_el0_svc+0x24/0x38
 => el0_svc+0x30/0xf8
 => el0t_64_sync_handler+0x120/0x130
 => el0t_64_sync+0x190/0x198
    sshd-session-15489   [001] ..... 493919.886098: __arm64_sys_write+0x4/0x40 <-invoke_syscall+0x50/0x120
    sshd-session-15489   [001] ..... 493919.886104: <stack trace>
 => __arm64_sys_write+0x8/0x40
 => invoke_syscall+0x50/0x120
 => el0_svc_common.constprop.0+0x48/0xf0
 => do_el0_svc+0x24/0x38
 => el0_svc+0x30/0xf8
 => el0t_64_sync_handler+0x120/0x130
 => el0t_64_sync+0x190/0x198
    sshd-session-15489   [002] ..... 493919.897697: __arm64_sys_write+0x4/0x40 <-invoke_syscall+0x50/0x120
    sshd-session-15489   [002] ..... 493919.897701: <stack trace>
 => __arm64_sys_write+0x8/0x40
 => invoke_syscall+0x50/0x120
 => el0_svc_common.constprop.0+0x48/0xf0
 => do_el0_svc+0x24/0x38
 => el0_svc+0x30/0xf8
 => el0t_64_sync_handler+0x120/0x130
 => el0t_64_sync+0x190/0x198
    sshd-session-15489   [002] ..... 493919.921789: __arm64_sys_write+0x4/0x40 <-invoke_syscall+0x50/0x120
    sshd-session-15489   [002] ..... 493919.921793: <stack trace>
 => __arm64_sys_write+0x8/0x40
 => invoke_syscall+0x50/0x120
 => el0_svc_common.constprop.0+0x48/0xf0
 => do_el0_svc+0x24/0x38
 => el0_svc+0x30/0xf8
 => el0t_64_sync_handler+0x120/0x130
 => el0t_64_sync+0x190/0x198
    sshd-session-15489   [002] ..... 493919.945160: __arm64_sys_write+0x4/0x40 <-invoke_syscall+0x50/0x120
    sshd-session-15489   [002] ..... 493919.945164: <stack trace>
 => __arm64_sys_write+0x8/0x40
 => invoke_syscall+0x50/0x120
 => el0_svc_common.constprop.0+0x48/0xf0
 => do_el0_svc+0x24/0x38
 => el0_svc+0x30/0xf8
 => el0t_64_sync_handler+0x120/0x130
 => el0t_64_sync+0x190/0x198
    sshd-session-15489   [002] ..... 493919.967963: __arm64_sys_write+0x4/0x40 <-invoke_syscall+0x50/0x120
    sshd-session-15489   [002] ..... 493919.967967: <stack trace>
 => __arm64_sys_write+0x8/0x40
 => invoke_syscall+0x50/0x120
 => el0_svc_common.constprop.0+0x48/0xf0
 => do_el0_svc+0x24/0x38
 => el0_svc+0x30/0xf8
 => el0t_64_sync_handler+0x120/0x130
 => el0t_64_sync+0x190/0x198
    sshd-session-15489   [002] ..... 493919.990164: __arm64_sys_write+0x4/0x40 <-invoke_syscall+0x50/0x120
    sshd-session-15489   [002] ..... 493919.990167: <stack trace>
 => __arm64_sys_write+0x8/0x40
 => invoke_syscall+0x50/0x120
 => el0_svc_common.constprop.0+0x48/0xf0
 => do_el0_svc+0x24/0x38
 => el0_svc+0x30/0xf8
 => el0t_64_sync_handler+0x120/0x130
 => el0t_64_sync+0x190/0x198
    sshd-session-15489   [001] ..... 493920.014021: __arm64_sys_write+0x4/0x40 <-invoke_syscall+0x50/0x120
    sshd-session-15489   [001] ..... 493920.014025: <stack trace>
 => __arm64_sys_write+0x8/0x40
 => invoke_syscall+0x50/0x120
 => el0_svc_common.constprop.0+0x48/0xf0
 => do_el0_svc+0x24/0x38
 => el0_svc+0x30/0xf8
 => el0t_64_sync_handler+0x120/0x130
 => el0t_64_sync+0x190/0x198
    sshd-session-15489   [001] ..... 493920.037685: __arm64_sys_write+0x4/0x40 <-invoke_syscall+0x50/0x120
    sshd-session-15489   [001] ..... 493920.037689: <stack trace>
 => __arm64_sys_write+0x8/0x40
 => invoke_syscall+0x50/0x120
 => el0_svc_common.constprop.0+0x48/0xf0
 => do_el0_svc+0x24/0x38
 => el0_svc+0x30/0xf8
 => el0t_64_sync_handler+0x120/0x130
 => el0t_64_sync+0x190/0x198
    sshd-session-15489   [001] ..... 493920.059984: __arm64_sys_write+0x4/0x40 <-invoke_syscall+0x50/0x120
    sshd-session-15489   [001] ..... 493920.059988: <stack trace>
 => __arm64_sys_write+0x8/0x40
 => invoke_syscall+0x50/0x120
 => el0_svc_common.constprop.0+0x48/0xf0
 => do_el0_svc+0x24/0x38
 => el0_svc+0x30/0xf8
 => el0t_64_sync_handler+0x120/0x130
 => el0t_64_sync+0x190/0x198
    sshd-session-15489   [001] ..... 493920.083904: __arm64_sys_write+0x4/0x40 <-invoke_syscall+0x50/0x120
    sshd-session-15489   [001] ..... 493920.083908: <stack trace>
 => __arm64_sys_write+0x8/0x40
 => invoke_syscall+0x50/0x120
 => el0_svc_common.constprop.0+0x48/0xf0
 => do_el0_svc+0x24/0x38
 => el0_svc+0x30/0xf8
 => el0t_64_sync_handler+0x120/0x130
 => el0t_64_sync+0x190/0x198
    sshd-session-15489   [001] ..... 493920.103737: __arm64_sys_write+0x4/0x40 <-invoke_syscall+0x50/0x120
    sshd-session-15489   [001] ..... 493920.103740: <stack trace>
 => __arm64_sys_write+0x8/0x40
 => invoke_syscall+0x50/0x120
 => el0_svc_common.constprop.0+0x48/0xf0
 => do_el0_svc+0x24/0x38
 => el0_svc+0x30/0xf8
 => el0t_64_sync_handler+0x120/0x130
 => el0t_64_sync+0x190/0x198
            bash-15508   [000] ..... 493920.103838: __arm64_sys_write+0x4/0x40 <-invoke_syscall+0x50/0x120
            bash-15508   [000] ..... 493920.103843: <stack trace>
 => __arm64_sys_write+0x8/0x40
 => invoke_syscall+0x50/0x120
 => el0_svc_common.constprop.0+0x48/0xf0
 => do_el0_svc+0x24/0x38
 => el0_svc+0x30/0xf8
 => el0t_64_sync_handler+0x120/0x130
 => el0t_64_sync+0x190/0x198
            bash-15508   [000] ..... 493920.103940: __arm64_sys_write+0x4/0x40 <-invoke_syscall+0x50/0x120
            bash-15508   [000] ..... 493920.103942: <stack trace>
 => __arm64_sys_write+0x8/0x40
 => invoke_syscall+0x50/0x120
 => el0_svc_common.constprop.0+0x48/0xf0
 => do_el0_svc+0x24/0x38
 => el0_svc+0x30/0xf8
 => el0t_64_sync_handler+0x120/0x130
 => el0t_64_sync+0x190/0x198
    sshd-session-15489   [001] ..... 493920.105204: __arm64_sys_write+0x4/0x40 <-invoke_syscall+0x50/0x120
    sshd-session-15489   [001] ..... 493920.105211: <stack trace>
 => __arm64_sys_write+0x8/0x40
 => invoke_syscall+0x50/0x120
 => el0_svc_common.constprop.0+0x48/0xf0
 => do_el0_svc+0x24/0x38
 => el0_svc+0x30/0xf8
 => el0t_64_sync_handler+0x120/0x130
 => el0t_64_sync+0x190/0x198
       free_test-16867   [003] ..... 493920.107806: __arm64_sys_write+0x4/0x40 <-invoke_syscall+0x50/0x120
       free_test-16867   [003] ..... 493920.107814: <stack trace>
 => __arm64_sys_write+0x8/0x40
 => invoke_syscall+0x50/0x120
 => el0_svc_common.constprop.0+0x48/0xf0
 => do_el0_svc+0x24/0x38
 => el0_svc+0x30/0xf8
 => el0t_64_sync_handler+0x120/0x130
 => el0t_64_sync+0x190/0x198
       free_test-16867   [003] ..... 493920.107942: __arm64_sys_write+0x4/0x40 <-invoke_syscall+0x50/0x120
       free_test-16867   [003] ..... 493920.107946: <stack trace>
 => __arm64_sys_write+0x8/0x40
 => invoke_syscall+0x50/0x120
 => el0_svc_common.constprop.0+0x48/0xf0
 => do_el0_svc+0x24/0x38
 => el0_svc+0x30/0xf8
 => el0t_64_sync_handler+0x120/0x130
 => el0t_64_sync+0x190/0x198
    sshd-session-15489   [001] ..... 493920.108362: __arm64_sys_write+0x4/0x40 <-invoke_syscall+0x50/0x120
    sshd-session-15489   [001] ..... 493920.108367: <stack trace>
 => __arm64_sys_write+0x8/0x40
 => invoke_syscall+0x50/0x120
 => el0_svc_common.constprop.0+0x48/0xf0
 => do_el0_svc+0x24/0x38
 => el0_svc+0x30/0xf8
 => el0t_64_sync_handler+0x120/0x130
 => el0t_64_sync+0x190/0x198
    sshd-session-15489   [001] ..... 493920.108505: __arm64_sys_write+0x4/0x40 <-invoke_syscall+0x50/0x120
    sshd-session-15489   [001] ..... 493920.108508: <stack trace>
 => __arm64_sys_write+0x8/0x40
 => invoke_syscall+0x50/0x120
 => el0_svc_common.constprop.0+0x48/0xf0
 => do_el0_svc+0x24/0x38
 => el0_svc+0x30/0xf8
 => el0t_64_sync_handler+0x120/0x130
 => el0t_64_sync+0x190/0x198
            bash-15508   [000] ..... 493920.109205: __arm64_sys_write+0x4/0x40 <-invoke_syscall+0x50/0x120
            bash-15508   [000] ..... 493920.109210: <stack trace>
 => __arm64_sys_write+0x8/0x40
 => invoke_syscall+0x50/0x120
 => el0_svc_common.constprop.0+0x48/0xf0
 => do_el0_svc+0x24/0x38
 => el0_svc+0x30/0xf8
 => el0t_64_sync_handler+0x120/0x130
 => el0t_64_sync+0x190/0x198
            bash-15508   [000] ..... 493920.109341: __arm64_sys_write+0x4/0x40 <-invoke_syscall+0x50/0x120
            bash-15508   [000] ..... 493920.109344: <stack trace>
 => __arm64_sys_write+0x8/0x40
 => invoke_syscall+0x50/0x120
 => el0_svc_common.constprop.0+0x48/0xf0
 => do_el0_svc+0x24/0x38
 => el0_svc+0x30/0xf8
 => el0t_64_sync_handler+0x120/0x130
 => el0t_64_sync+0x190/0x198
    sshd-session-15489   [001] ..... 493920.109348: __arm64_sys_write+0x4/0x40 <-invoke_syscall+0x50/0x120
    sshd-session-15489   [001] ..... 493920.109351: <stack trace>
 => __arm64_sys_write+0x8/0x40
 => invoke_syscall+0x50/0x120
 => el0_svc_common.constprop.0+0x48/0xf0
 => do_el0_svc+0x24/0x38
 => el0_svc+0x30/0xf8
 => el0t_64_sync_handler+0x120/0x130
 => el0t_64_sync+0x190/0x198
    sshd-session-15489   [001] ..... 493920.109482: __arm64_sys_write+0x4/0x40 <-invoke_syscall+0x50/0x120
    sshd-session-15489   [001] ..... 493920.109485: <stack trace>
 => __arm64_sys_write+0x8/0x40
 => invoke_syscall+0x50/0x120
 => el0_svc_common.constprop.0+0x48/0xf0
 => do_el0_svc+0x24/0x38
 => el0_svc+0x30/0xf8
 => el0t_64_sync_handler+0x120/0x130
 => el0t_64_sync+0x190/0x198
    sshd-session-15489   [001] ..... 493920.126655: __arm64_sys_write+0x4/0x40 <-invoke_syscall+0x50/0x120
    sshd-session-15489   [001] ..... 493920.126660: <stack trace>
 => __arm64_sys_write+0x8/0x40
 => invoke_syscall+0x50/0x120
 => el0_svc_common.constprop.0+0x48/0xf0
 => do_el0_svc+0x24/0x38
 => el0_svc+0x30/0xf8
 => el0t_64_sync_handler+0x120/0x130
 => el0t_64_sync+0x190/0x198
    sshd-session-15489   [001] ..... 493920.148415: __arm64_sys_write+0x4/0x40 <-invoke_syscall+0x50/0x120
    sshd-session-15489   [001] ..... 493920.148419: <stack trace>
 => __arm64_sys_write+0x8/0x40
 => invoke_syscall+0x50/0x120
 => el0_svc_common.constprop.0+0x48/0xf0
 => do_el0_svc+0x24/0x38
 => el0_svc+0x30/0xf8
 => el0t_64_sync_handler+0x120/0x130
 => el0t_64_sync+0x190/0x198
    sshd-session-15489   [001] ..... 493920.172014: __arm64_sys_write+0x4/0x40 <-invoke_syscall+0x50/0x120
    sshd-session-15489   [001] ..... 493920.172017: <stack trace>
 => __arm64_sys_write+0x8/0x40
 => invoke_syscall+0x50/0x120
 => el0_svc_common.constprop.0+0x48/0xf0
 => do_el0_svc+0x24/0x38
 => el0_svc+0x30/0xf8
 => el0t_64_sync_handler+0x120/0x130
 => el0t_64_sync+0x190/0x198
    sshd-session-15489   [001] ..... 493920.194064: __arm64_sys_write+0x4/0x40 <-invoke_syscall+0x50/0x120
    sshd-session-15489   [001] ..... 493920.194067: <stack trace>
 => __arm64_sys_write+0x8/0x40
 => invoke_syscall+0x50/0x120
 => el0_svc_common.constprop.0+0x48/0xf0
 => do_el0_svc+0x24/0x38
 => el0_svc+0x30/0xf8
 => el0t_64_sync_handler+0x120/0x130
 => el0t_64_sync+0x190/0x198
    sshd-session-15489   [001] ..... 493920.217011: __arm64_sys_write+0x4/0x40 <-invoke_syscall+0x50/0x120
    sshd-session-15489   [001] ..... 493920.217014: <stack trace>
 => __arm64_sys_write+0x8/0x40
 => invoke_syscall+0x50/0x120
 => el0_svc_common.constprop.0+0x48/0xf0
 => do_el0_svc+0x24/0x38
 => el0_svc+0x30/0xf8
 => el0t_64_sync_handler+0x120/0x130
 => el0t_64_sync+0x190/0x198
    sshd-session-15489   [001] ..... 493920.246039: __arm64_sys_write+0x4/0x40 <-invoke_syscall+0x50/0x120
    sshd-session-15489   [001] ..... 493920.246042: <stack trace>
 => __arm64_sys_write+0x8/0x40
 => invoke_syscall+0x50/0x120
 => el0_svc_common.constprop.0+0x48/0xf0
 => do_el0_svc+0x24/0x38
 => el0_svc+0x30/0xf8
 => el0t_64_sync_handler+0x120/0x130
 => el0t_64_sync+0x190/0x198
    sshd-session-15489   [001] ..... 493920.262571: __arm64_sys_write+0x4/0x40 <-invoke_syscall+0x50/0x120
    sshd-session-15489   [001] ..... 493920.262574: <stack trace>
 => __arm64_sys_write+0x8/0x40
 => invoke_syscall+0x50/0x120
 => el0_svc_common.constprop.0+0x48/0xf0
 => do_el0_svc+0x24/0x38
 => el0_svc+0x30/0xf8
 => el0t_64_sync_handler+0x120/0x130
 => el0t_64_sync+0x190/0x198
    sshd-session-15489   [001] ..... 493920.286613: __arm64_sys_write+0x4/0x40 <-invoke_syscall+0x50/0x120
    sshd-session-15489   [001] ..... 493920.286616: <stack trace>
 => __arm64_sys_write+0x8/0x40
 => invoke_syscall+0x50/0x120
 => el0_svc_common.constprop.0+0x48/0xf0
 => do_el0_svc+0x24/0x38
 => el0_svc+0x30/0xf8
 => el0t_64_sync_handler+0x120/0x130
 => el0t_64_sync+0x190/0x198
    sshd-session-15489   [001] ..... 493920.308505: __arm64_sys_write+0x4/0x40 <-invoke_syscall+0x50/0x120
    sshd-session-15489   [001] ..... 493920.308509: <stack trace>
 => __arm64_sys_write+0x8/0x40
 => invoke_syscall+0x50/0x120
 => el0_svc_common.constprop.0+0x48/0xf0
 => do_el0_svc+0x24/0x38
 => el0_svc+0x30/0xf8
 => el0t_64_sync_handler+0x120/0x130
 => el0t_64_sync+0x190/0x198
    sshd-session-15489   [001] ..... 493920.410239: __arm64_sys_write+0x4/0x40 <-invoke_syscall+0x50/0x120
    sshd-session-15489   [001] ..... 493920.410243: <stack trace>
 => __arm64_sys_write+0x8/0x40
 => invoke_syscall+0x50/0x120
 => el0_svc_common.constprop.0+0x48/0xf0
 => do_el0_svc+0x24/0x38
 => el0_svc+0x30/0xf8
 => el0t_64_sync_handler+0x120/0x130
 => el0t_64_sync+0x190/0x198
    sshd-session-15489   [001] ..... 493920.410342: __arm64_sys_write+0x4/0x40 <-invoke_syscall+0x50/0x120
    sshd-session-15489   [001] ..... 493920.410345: <stack trace>
 => __arm64_sys_write+0x8/0x40
 => invoke_syscall+0x50/0x120
 => el0_svc_common.constprop.0+0x48/0xf0
 => do_el0_svc+0x24/0x38
 => el0_svc+0x30/0xf8
 => el0t_64_sync_handler+0x120/0x130
 => el0t_64_sync+0x190/0x198
    sshd-session-15489   [001] ..... 493920.429663: __arm64_sys_write+0x4/0x40 <-invoke_syscall+0x50/0x120
    sshd-session-15489   [001] ..... 493920.429667: <stack trace>
 => __arm64_sys_write+0x8/0x40
 => invoke_syscall+0x50/0x120
 => el0_svc_common.constprop.0+0x48/0xf0
 => do_el0_svc+0x24/0x38
 => el0_svc+0x30/0xf8
 => el0t_64_sync_handler+0x120/0x130
 => el0t_64_sync+0x190/0x198
    sshd-session-15489   [001] ..... 493920.451261: __arm64_sys_write+0x4/0x40 <-invoke_syscall+0x50/0x120
    sshd-session-15489   [001] ..... 493920.451264: <stack trace>
 => __arm64_sys_write+0x8/0x40
 => invoke_syscall+0x50/0x120
 => el0_svc_common.constprop.0+0x48/0xf0
 => do_el0_svc+0x24/0x38
 => el0_svc+0x30/0xf8
 => el0t_64_sync_handler+0x120/0x130
 => el0t_64_sync+0x190/0x198
    sshd-session-15489   [001] ..... 493920.472890: __arm64_sys_write+0x4/0x40 <-invoke_syscall+0x50/0x120
    sshd-session-15489   [001] ..... 493920.472893: <stack trace>
 => __arm64_sys_write+0x8/0x40
 => invoke_syscall+0x50/0x120
 => el0_svc_common.constprop.0+0x48/0xf0
 => do_el0_svc+0x24/0x38
 => el0_svc+0x30/0xf8
 => el0t_64_sync_handler+0x120/0x130
 => el0t_64_sync+0x190/0x198
    sshd-session-15489   [001] ..... 493920.495456: __arm64_sys_write+0x4/0x40 <-invoke_syscall+0x50/0x120
    sshd-session-15489   [001] ..... 493920.495460: <stack trace>
 => __arm64_sys_write+0x8/0x40
 => invoke_syscall+0x50/0x120
 => el0_svc_common.constprop.0+0x48/0xf0
 => do_el0_svc+0x24/0x38
 => el0_svc+0x30/0xf8
 => el0t_64_sync_handler+0x120/0x130
 => el0t_64_sync+0x190/0x198
    sshd-session-15489   [001] ..... 493920.519314: __arm64_sys_write+0x4/0x40 <-invoke_syscall+0x50/0x120
    sshd-session-15489   [001] ..... 493920.519317: <stack trace>
 => __arm64_sys_write+0x8/0x40
 => invoke_syscall+0x50/0x120
 => el0_svc_common.constprop.0+0x48/0xf0
 => do_el0_svc+0x24/0x38
 => el0_svc+0x30/0xf8
 => el0t_64_sync_handler+0x120/0x130
 => el0t_64_sync+0x190/0x198
    sshd-session-15489   [001] ..... 493920.540505: __arm64_sys_write+0x4/0x40 <-invoke_syscall+0x50/0x120
    sshd-session-15489   [001] ..... 493920.540508: <stack trace>
 => __arm64_sys_write+0x8/0x40
 => invoke_syscall+0x50/0x120
 => el0_svc_common.constprop.0+0x48/0xf0
 => do_el0_svc+0x24/0x38
 => el0_svc+0x30/0xf8
 => el0t_64_sync_handler+0x120/0x130
 => el0t_64_sync+0x190/0x198
    sshd-session-15489   [001] ..... 493920.565987: __arm64_sys_write+0x4/0x40 <-invoke_syscall+0x50/0x120
    sshd-session-15489   [001] ..... 493920.565991: <stack trace>
 => __arm64_sys_write+0x8/0x40
 => invoke_syscall+0x50/0x120
 => el0_svc_common.constprop.0+0x48/0xf0
 => do_el0_svc+0x24/0x38
 => el0_svc+0x30/0xf8
 => el0t_64_sync_handler+0x120/0x130
 => el0t_64_sync+0x190/0x198
    sshd-session-15489   [001] ..... 493920.587550: __arm64_sys_write+0x4/0x40 <-invoke_syscall+0x50/0x120
    sshd-session-15489   [001] ..... 493920.587553: <stack trace>
 => __arm64_sys_write+0x8/0x40
 => invoke_syscall+0x50/0x120
 => el0_svc_common.constprop.0+0x48/0xf0
 => do_el0_svc+0x24/0x38
 => el0_svc+0x30/0xf8
 => el0t_64_sync_handler+0x120/0x130
 => el0t_64_sync+0x190/0x198
    sshd-session-15489   [001] ..... 493920.610527: __arm64_sys_write+0x4/0x40 <-invoke_syscall+0x50/0x120
    sshd-session-15489   [001] ..... 493920.610530: <stack trace>
 => __arm64_sys_write+0x8/0x40
 => invoke_syscall+0x50/0x120
 => el0_svc_common.constprop.0+0x48/0xf0
 => do_el0_svc+0x24/0x38
 => el0_svc+0x30/0xf8
 => el0t_64_sync_handler+0x120/0x130
 => el0t_64_sync+0x190/0x198
    sshd-session-15489   [001] ..... 493920.634897: __arm64_sys_write+0x4/0x40 <-invoke_syscall+0x50/0x120
    sshd-session-15489   [001] ..... 493920.634900: <stack trace>
 => __arm64_sys_write+0x8/0x40
 => invoke_syscall+0x50/0x120
 => el0_svc_common.constprop.0+0x48/0xf0
 => do_el0_svc+0x24/0x38
 => el0_svc+0x30/0xf8
 => el0t_64_sync_handler+0x120/0x130
 => el0t_64_sync+0x190/0x198
    sshd-session-15489   [001] ..... 493920.657443: __arm64_sys_write+0x4/0x40 <-invoke_syscall+0x50/0x120
    sshd-session-15489   [001] ..... 493920.657446: <stack trace>
 => __arm64_sys_write+0x8/0x40
 => invoke_syscall+0x50/0x120
 => el0_svc_common.constprop.0+0x48/0xf0
 => do_el0_svc+0x24/0x38
 => el0_svc+0x30/0xf8
 => el0t_64_sync_handler+0x120/0x130
 => el0t_64_sync+0x190/0x198
    sshd-session-15489   [001] ..... 493920.680580: __arm64_sys_write+0x4/0x40 <-invoke_syscall+0x50/0x120
    sshd-session-15489   [001] ..... 493920.680583: <stack trace>
 => __arm64_sys_write+0x8/0x40
 => invoke_syscall+0x50/0x120
 => el0_svc_common.constprop.0+0x48/0xf0
 => do_el0_svc+0x24/0x38
 => el0_svc+0x30/0xf8
 => el0t_64_sync_handler+0x120/0x130
 => el0t_64_sync+0x190/0x198
    sshd-session-15489   [001] ..... 493920.702255: __arm64_sys_write+0x4/0x40 <-invoke_syscall+0x50/0x120
    sshd-session-15489   [001] ..... 493920.702258: <stack trace>
 => __arm64_sys_write+0x8/0x40
 => invoke_syscall+0x50/0x120
 => el0_svc_common.constprop.0+0x48/0xf0
 => do_el0_svc+0x24/0x38
 => el0_svc+0x30/0xf8
 => el0t_64_sync_handler+0x120/0x130
 => el0t_64_sync+0x190/0x198
    sshd-session-15489   [001] ..... 493920.725005: __arm64_sys_write+0x4/0x40 <-invoke_syscall+0x50/0x120
    sshd-session-15489   [001] ..... 493920.725008: <stack trace>
 => __arm64_sys_write+0x8/0x40
 => invoke_syscall+0x50/0x120
 => el0_svc_common.constprop.0+0x48/0xf0
 => do_el0_svc+0x24/0x38
 => el0_svc+0x30/0xf8
 => el0t_64_sync_handler+0x120/0x130
 => el0t_64_sync+0x190/0x198
    sshd-session-15489   [001] ..... 493920.747534: __arm64_sys_write+0x4/0x40 <-invoke_syscall+0x50/0x120
    sshd-session-15489   [001] ..... 493920.747538: <stack trace>
 => __arm64_sys_write+0x8/0x40
 => invoke_syscall+0x50/0x120
 => el0_svc_common.constprop.0+0x48/0xf0
 => do_el0_svc+0x24/0x38
 => el0_svc+0x30/0xf8
 => el0t_64_sync_handler+0x120/0x130
 => el0t_64_sync+0x190/0x198
    sshd-session-15489   [001] ..... 493920.771177: __arm64_sys_write+0x4/0x40 <-invoke_syscall+0x50/0x120
    sshd-session-15489   [001] ..... 493920.771180: <stack trace>
 => __arm64_sys_write+0x8/0x40
 => invoke_syscall+0x50/0x120
 => el0_svc_common.constprop.0+0x48/0xf0
 => do_el0_svc+0x24/0x38
 => el0_svc+0x30/0xf8
 => el0t_64_sync_handler+0x120/0x130
 => el0t_64_sync+0x190/0x198
    sshd-session-15489   [001] ..... 493920.794852: __arm64_sys_write+0x4/0x40 <-invoke_syscall+0x50/0x120
    sshd-session-15489   [001] ..... 493920.794855: <stack trace>
 => __arm64_sys_write+0x8/0x40
 => invoke_syscall+0x50/0x120
 => el0_svc_common.constprop.0+0x48/0xf0
 => do_el0_svc+0x24/0x38
 => el0_svc+0x30/0xf8
 => el0t_64_sync_handler+0x120/0x130
 => el0t_64_sync+0x190/0x198
    sshd-session-15489   [001] ..... 493920.818821: __arm64_sys_write+0x4/0x40 <-invoke_syscall+0x50/0x120
    sshd-session-15489   [001] ..... 493920.818825: <stack trace>
 => __arm64_sys_write+0x8/0x40
 => invoke_syscall+0x50/0x120
 => el0_svc_common.constprop.0+0x48/0xf0
 => do_el0_svc+0x24/0x38
 => el0_svc+0x30/0xf8
 => el0t_64_sync_handler+0x120/0x130
 => el0t_64_sync+0x190/0x198
    sshd-session-15489   [001] ..... 493920.934038: __arm64_sys_write+0x4/0x40 <-invoke_syscall+0x50/0x120
    sshd-session-15489   [001] ..... 493920.934042: <stack trace>
 => __arm64_sys_write+0x8/0x40
 => invoke_syscall+0x50/0x120
 => el0_svc_common.constprop.0+0x48/0xf0
 => do_el0_svc+0x24/0x38
 => el0_svc+0x30/0xf8
 => el0t_64_sync_handler+0x120/0x130
 => el0t_64_sync+0x190/0x198
    sshd-session-15489   [001] ..... 493920.934275: __arm64_sys_write+0x4/0x40 <-invoke_syscall+0x50/0x120
    sshd-session-15489   [001] ..... 493920.934278: <stack trace>
 => __arm64_sys_write+0x8/0x40
 => invoke_syscall+0x50/0x120
 => el0_svc_common.constprop.0+0x48/0xf0
 => do_el0_svc+0x24/0x38
 => el0_svc+0x30/0xf8
 => el0t_64_sync_handler+0x120/0x130
 => el0t_64_sync+0x190/0x198
    sshd-session-15489   [001] ..... 493920.943925: __arm64_sys_write+0x4/0x40 <-invoke_syscall+0x50/0x120
    sshd-session-15489   [001] ..... 493920.943929: <stack trace>
 => __arm64_sys_write+0x8/0x40
 => invoke_syscall+0x50/0x120
 => el0_svc_common.constprop.0+0x48/0xf0
 => do_el0_svc+0x24/0x38
 => el0_svc+0x30/0xf8
 => el0t_64_sync_handler+0x120/0x130
 => el0t_64_sync+0x190/0x198
    sshd-session-15489   [001] ..... 493920.965887: __arm64_sys_write+0x4/0x40 <-invoke_syscall+0x50/0x120
    sshd-session-15489   [001] ..... 493920.965890: <stack trace>
 => __arm64_sys_write+0x8/0x40
 => invoke_syscall+0x50/0x120
 => el0_svc_common.constprop.0+0x48/0xf0
 => do_el0_svc+0x24/0x38
 => el0_svc+0x30/0xf8
 => el0t_64_sync_handler+0x120/0x130
 => el0t_64_sync+0x190/0x198
    sshd-session-15489   [001] ..... 493920.987672: __arm64_sys_write+0x4/0x40 <-invoke_syscall+0x50/0x120
    sshd-session-15489   [001] ..... 493920.987676: <stack trace>
 => __arm64_sys_write+0x8/0x40
 => invoke_syscall+0x50/0x120
 => el0_svc_common.constprop.0+0x48/0xf0
 => do_el0_svc+0x24/0x38
 => el0_svc+0x30/0xf8
 => el0t_64_sync_handler+0x120/0x130
 => el0t_64_sync+0x190/0x198
    sshd-session-15489   [001] ..... 493921.011244: __arm64_sys_write+0x4/0x40 <-invoke_syscall+0x50/0x120
    sshd-session-15489   [001] ..... 493921.011248: <stack trace>
 => __arm64_sys_write+0x8/0x40
 => invoke_syscall+0x50/0x120
 => el0_svc_common.constprop.0+0x48/0xf0
 => do_el0_svc+0x24/0x38
 => el0_svc+0x30/0xf8
 => el0t_64_sync_handler+0x120/0x130
 => el0t_64_sync+0x190/0x198
    sshd-session-15489   [001] ..... 493921.033686: __arm64_sys_write+0x4/0x40 <-invoke_syscall+0x50/0x120
    sshd-session-15489   [001] ..... 493921.033689: <stack trace>
 => __arm64_sys_write+0x8/0x40
 => invoke_syscall+0x50/0x120
 => el0_svc_common.constprop.0+0x48/0xf0
 => do_el0_svc+0x24/0x38
 => el0_svc+0x30/0xf8
 => el0t_64_sync_handler+0x120/0x130
 => el0t_64_sync+0x190/0x198
    sshd-session-15489   [001] ..... 493921.056518: __arm64_sys_write+0x4/0x40 <-invoke_syscall+0x50/0x120
    sshd-session-15489   [001] ..... 493921.056522: <stack trace>
 => __arm64_sys_write+0x8/0x40
 => invoke_syscall+0x50/0x120
 => el0_svc_common.constprop.0+0x48/0xf0
 => do_el0_svc+0x24/0x38
 => el0_svc+0x30/0xf8
 => el0t_64_sync_handler+0x120/0x130
 => el0t_64_sync+0x190/0x198
    sshd-session-15489   [001] ..... 493921.080663: __arm64_sys_write+0x4/0x40 <-invoke_syscall+0x50/0x120
    sshd-session-15489   [001] ..... 493921.080666: <stack trace>
 => __arm64_sys_write+0x8/0x40
 => invoke_syscall+0x50/0x120
 => el0_svc_common.constprop.0+0x48/0xf0
 => do_el0_svc+0x24/0x38
 => el0_svc+0x30/0xf8
 => el0t_64_sync_handler+0x120/0x130
 => el0t_64_sync+0x190/0x198
    sshd-session-15489   [001] ..... 493921.104246: __arm64_sys_write+0x4/0x40 <-invoke_syscall+0x50/0x120
    sshd-session-15489   [001] ..... 493921.104249: <stack trace>
 => __arm64_sys_write+0x8/0x40
 => invoke_syscall+0x50/0x120
 => el0_svc_common.constprop.0+0x48/0xf0
 => do_el0_svc+0x24/0x38
 => el0_svc+0x30/0xf8
 => el0t_64_sync_handler+0x120/0x130
 => el0t_64_sync+0x190/0x198
    sshd-session-15489   [001] ..... 493921.130584: __arm64_sys_write+0x4/0x40 <-invoke_syscall+0x50/0x120
    sshd-session-15489   [001] ..... 493921.130587: <stack trace>
 => __arm64_sys_write+0x8/0x40
 => invoke_syscall+0x50/0x120
 => el0_svc_common.constprop.0+0x48/0xf0
 => do_el0_svc+0x24/0x38
 => el0_svc+0x30/0xf8
 => el0t_64_sync_handler+0x120/0x130
 => el0t_64_sync+0x190/0x198
    sshd-session-15489   [001] ..... 493921.147621: __arm64_sys_write+0x4/0x40 <-invoke_syscall+0x50/0x120
    sshd-session-15489   [001] ..... 493921.147624: <stack trace>
 => __arm64_sys_write+0x8/0x40
 => invoke_syscall+0x50/0x120
 => el0_svc_common.constprop.0+0x48/0xf0
 => do_el0_svc+0x24/0x38
 => el0_svc+0x30/0xf8
 => el0t_64_sync_handler+0x120/0x130
 => el0t_64_sync+0x190/0x198
    sshd-session-15489   [001] ..... 493921.169992: __arm64_sys_write+0x4/0x40 <-invoke_syscall+0x50/0x120
    sshd-session-15489   [001] ..... 493921.169996: <stack trace>
 => __arm64_sys_write+0x8/0x40
 => invoke_syscall+0x50/0x120
 => el0_svc_common.constprop.0+0x48/0xf0
 => do_el0_svc+0x24/0x38
 => el0_svc+0x30/0xf8
 => el0t_64_sync_handler+0x120/0x130
 => el0t_64_sync+0x190/0x198
    sshd-session-15489   [001] ..... 493921.193555: __arm64_sys_write+0x4/0x40 <-invoke_syscall+0x50/0x120
    sshd-session-15489   [001] ..... 493921.193558: <stack trace>
 => __arm64_sys_write+0x8/0x40
 => invoke_syscall+0x50/0x120
 => el0_svc_common.constprop.0+0x48/0xf0
 => do_el0_svc+0x24/0x38
 => el0_svc+0x30/0xf8
 => el0t_64_sync_handler+0x120/0x130
 => el0t_64_sync+0x190/0x198
    sshd-session-15489   [001] ..... 493921.216374: __arm64_sys_write+0x4/0x40 <-invoke_syscall+0x50/0x120
    sshd-session-15489   [001] ..... 493921.216378: <stack trace>
 => __arm64_sys_write+0x8/0x40
 => invoke_syscall+0x50/0x120
 => el0_svc_common.constprop.0+0x48/0xf0
 => do_el0_svc+0x24/0x38
 => el0_svc+0x30/0xf8
 => el0t_64_sync_handler+0x120/0x130
 => el0t_64_sync+0x190/0x198
    sshd-session-15489   [001] ..... 493921.237394: __arm64_sys_write+0x4/0x40 <-invoke_syscall+0x50/0x120
    sshd-session-15489   [001] ..... 493921.237397: <stack trace>
 => __arm64_sys_write+0x8/0x40
 => invoke_syscall+0x50/0x120
 => el0_svc_common.constprop.0+0x48/0xf0
 => do_el0_svc+0x24/0x38
 => el0_svc+0x30/0xf8
 => el0t_64_sync_handler+0x120/0x130
 => el0t_64_sync+0x190/0x198
    sshd-session-15489   [001] ..... 493921.261280: __arm64_sys_write+0x4/0x40 <-invoke_syscall+0x50/0x120
    sshd-session-15489   [001] ..... 493921.261284: <stack trace>
 => __arm64_sys_write+0x8/0x40
 => invoke_syscall+0x50/0x120
 => el0_svc_common.constprop.0+0x48/0xf0
 => do_el0_svc+0x24/0x38
 => el0_svc+0x30/0xf8
 => el0t_64_sync_handler+0x120/0x130
 => el0t_64_sync+0x190/0x198
    sshd-session-15489   [001] ..... 493921.283726: __arm64_sys_write+0x4/0x40 <-invoke_syscall+0x50/0x120
    sshd-session-15489   [001] ..... 493921.283729: <stack trace>
 => __arm64_sys_write+0x8/0x40
 => invoke_syscall+0x50/0x120
 => el0_svc_common.constprop.0+0x48/0xf0
 => do_el0_svc+0x24/0x38
 => el0_svc+0x30/0xf8
 => el0t_64_sync_handler+0x120/0x130
 => el0t_64_sync+0x190/0x198
    sshd-session-15489   [001] ..... 493921.307020: __arm64_sys_write+0x4/0x40 <-invoke_syscall+0x50/0x120
    sshd-session-15489   [001] ..... 493921.307024: <stack trace>
 => __arm64_sys_write+0x8/0x40
 => invoke_syscall+0x50/0x120
 => el0_svc_common.constprop.0+0x48/0xf0
 => do_el0_svc+0x24/0x38
 => el0_svc+0x30/0xf8
 => el0t_64_sync_handler+0x120/0x130
 => el0t_64_sync+0x190/0x198
    sshd-session-15489   [001] ..... 493921.330286: __arm64_sys_write+0x4/0x40 <-invoke_syscall+0x50/0x120
    sshd-session-15489   [001] ..... 493921.330289: <stack trace>
 => __arm64_sys_write+0x8/0x40
 => invoke_syscall+0x50/0x120
 => el0_svc_common.constprop.0+0x48/0xf0
 => do_el0_svc+0x24/0x38
 => el0_svc+0x30/0xf8
 => el0t_64_sync_handler+0x120/0x130
 => el0t_64_sync+0x190/0x198
    sshd-session-15489   [001] ..... 493921.352667: __arm64_sys_write+0x4/0x40 <-invoke_syscall+0x50/0x120
    sshd-session-15489   [001] ..... 493921.352670: <stack trace>
 => __arm64_sys_write+0x8/0x40
 => invoke_syscall+0x50/0x120
 => el0_svc_common.constprop.0+0x48/0xf0
 => do_el0_svc+0x24/0x38
 => el0_svc+0x30/0xf8
 => el0t_64_sync_handler+0x120/0x130
 => el0t_64_sync+0x190/0x198
    sshd-session-15489   [002] ..... 493921.458307: __arm64_sys_write+0x4/0x40 <-invoke_syscall+0x50/0x120
    sshd-session-15489   [002] ..... 493921.458311: <stack trace>
 => __arm64_sys_write+0x8/0x40
 => invoke_syscall+0x50/0x120
 => el0_svc_common.constprop.0+0x48/0xf0
 => do_el0_svc+0x24/0x38
 => el0_svc+0x30/0xf8
 => el0t_64_sync_handler+0x120/0x130
 => el0t_64_sync+0x190/0x198
    sshd-session-15489   [002] ..... 493921.458667: __arm64_sys_write+0x4/0x40 <-invoke_syscall+0x50/0x120
    sshd-session-15489   [002] ..... 493921.458670: <stack trace>
 => __arm64_sys_write+0x8/0x40
 => invoke_syscall+0x50/0x120
 => el0_svc_common.constprop.0+0x48/0xf0
 => do_el0_svc+0x24/0x38
 => el0_svc+0x30/0xf8
 => el0t_64_sync_handler+0x120/0x130
 => el0t_64_sync+0x190/0x198
    sshd-session-15489   [002] ..... 493921.468694: __arm64_sys_write+0x4/0x40 <-invoke_syscall+0x50/0x120
    sshd-session-15489   [002] ..... 493921.468697: <stack trace>
 => __arm64_sys_write+0x8/0x40
 => invoke_syscall+0x50/0x120
 => el0_svc_common.constprop.0+0x48/0xf0
 => do_el0_svc+0x24/0x38
 => el0_svc+0x30/0xf8
 => el0t_64_sync_handler+0x120/0x130
 => el0t_64_sync+0x190/0x198
    sshd-session-15489   [002] ..... 493921.490691: __arm64_sys_write+0x4/0x40 <-invoke_syscall+0x50/0x120
    sshd-session-15489   [002] ..... 493921.490694: <stack trace>
 => __arm64_sys_write+0x8/0x40
 => invoke_syscall+0x50/0x120
 => el0_svc_common.constprop.0+0x48/0xf0
 => do_el0_svc+0x24/0x38
 => el0_svc+0x30/0xf8
 => el0t_64_sync_handler+0x120/0x130
 => el0t_64_sync+0x190/0x198
  NetworkManager-649     [002] ..... 493921.762846: __arm64_sys_write+0x4/0x40 <-invoke_syscall+0x50/0x120
  NetworkManager-649     [002] ..... 493921.762853: <stack trace>
 => __arm64_sys_write+0x8/0x40
 => invoke_syscall+0x50/0x120
 => el0_svc_common.constprop.0+0x48/0xf0
 => do_el0_svc+0x24/0x38
 => el0_svc+0x30/0xf8
 => el0t_64_sync_handler+0x120/0x130
 => el0t_64_sync+0x190/0x198
  NetworkManager-649     [002] ..... 493921.763056: __arm64_sys_write+0x4/0x40 <-invoke_syscall+0x50/0x120
  NetworkManager-649     [002] ..... 493921.763060: <stack trace>
 => __arm64_sys_write+0x8/0x40
 => invoke_syscall+0x50/0x120
 => el0_svc_common.constprop.0+0x48/0xf0
 => do_el0_svc+0x24/0x38
 => el0_svc+0x30/0xf8
 => el0t_64_sync_handler+0x120/0x130
 => el0t_64_sync+0x190/0x198
    sshd-session-16754   [002] ..... 493925.281550: __arm64_sys_write+0x4/0x40 <-invoke_syscall+0x50/0x120
    sshd-session-16754   [002] ..... 493925.281557: <stack trace>
 => __arm64_sys_write+0x8/0x40
 => invoke_syscall+0x50/0x120
 => el0_svc_common.constprop.0+0x48/0xf0
 => do_el0_svc+0x24/0x38
 => el0_svc+0x30/0xf8
 => el0t_64_sync_handler+0x120/0x130
 => el0t_64_sync+0x190/0x198
            bash-16773   [003] ..... 493925.281804: __arm64_sys_write+0x4/0x40 <-invoke_syscall+0x50/0x120
            bash-16773   [003] ..... 493925.281808: <stack trace>
 => __arm64_sys_write+0x8/0x40
 => invoke_syscall+0x50/0x120
 => el0_svc_common.constprop.0+0x48/0xf0
 => do_el0_svc+0x24/0x38
 => el0_svc+0x30/0xf8
 => el0t_64_sync_handler+0x120/0x130
 => el0t_64_sync+0x190/0x198
    sshd-session-16754   [002] ..... 493925.282123: __arm64_sys_write+0x4/0x40 <-invoke_syscall+0x50/0x120
    sshd-session-16754   [002] ..... 493925.282126: <stack trace>
 => __arm64_sys_write+0x8/0x40
 => invoke_syscall+0x50/0x120
 => el0_svc_common.constprop.0+0x48/0xf0
 => do_el0_svc+0x24/0x38
 => el0_svc+0x30/0xf8
 => el0t_64_sync_handler+0x120/0x130
 => el0t_64_sync+0x190/0x198
    sshd-session-16754   [002] ..... 493925.282322: __arm64_sys_write+0x4/0x40 <-invoke_syscall+0x50/0x120
    sshd-session-16754   [002] ..... 493925.282325: <stack trace>
 => __arm64_sys_write+0x8/0x40
 => invoke_syscall+0x50/0x120
 => el0_svc_common.constprop.0+0x48/0xf0
 => do_el0_svc+0x24/0x38
 => el0_svc+0x30/0xf8
 => el0t_64_sync_handler+0x120/0x130
 => el0t_64_sync+0x190/0x198
    sshd-session-16754   [002] ..... 493925.291904: __arm64_sys_write+0x4/0x40 <-invoke_syscall+0x50/0x120
    sshd-session-16754   [002] ..... 493925.291908: <stack trace>
 => __arm64_sys_write+0x8/0x40
 => invoke_syscall+0x50/0x120
 => el0_svc_common.constprop.0+0x48/0xf0
 => do_el0_svc+0x24/0x38
 => el0_svc+0x30/0xf8
 => el0t_64_sync_handler+0x120/0x130
 => el0t_64_sync+0x190/0x198
    sshd-session-16754   [002] ..... 493925.314833: __arm64_sys_write+0x4/0x40 <-invoke_syscall+0x50/0x120
    sshd-session-16754   [002] ..... 493925.314837: <stack trace>
 => __arm64_sys_write+0x8/0x40
 => invoke_syscall+0x50/0x120
 => el0_svc_common.constprop.0+0x48/0xf0
 => do_el0_svc+0x24/0x38
 => el0_svc+0x30/0xf8
 => el0t_64_sync_handler+0x120/0x130
 => el0t_64_sync+0x190/0x198
    sshd-session-16754   [002] ..... 493925.337965: __arm64_sys_write+0x4/0x40 <-invoke_syscall+0x50/0x120
    sshd-session-16754   [002] ..... 493925.337969: <stack trace>
 => __arm64_sys_write+0x8/0x40
 => invoke_syscall+0x50/0x120
 => el0_svc_common.constprop.0+0x48/0xf0
 => do_el0_svc+0x24/0x38
 => el0_svc+0x30/0xf8
 => el0t_64_sync_handler+0x120/0x130
 => el0t_64_sync+0x190/0x198
    sshd-session-16754   [002] ..... 493925.363499: __arm64_sys_write+0x4/0x40 <-invoke_syscall+0x50/0x120
    sshd-session-16754   [002] ..... 493925.363503: <stack trace>
 => __arm64_sys_write+0x8/0x40
 => invoke_syscall+0x50/0x120
 => el0_svc_common.constprop.0+0x48/0xf0
 => do_el0_svc+0x24/0x38
 => el0_svc+0x30/0xf8
 => el0t_64_sync_handler+0x120/0x130
 => el0t_64_sync+0x190/0x198
    sshd-session-16754   [002] ..... 493925.385799: __arm64_sys_write+0x4/0x40 <-invoke_syscall+0x50/0x120
    sshd-session-16754   [002] ..... 493925.385803: <stack trace>
 => __arm64_sys_write+0x8/0x40
 => invoke_syscall+0x50/0x120
 => el0_svc_common.constprop.0+0x48/0xf0
 => do_el0_svc+0x24/0x38
 => el0_svc+0x30/0xf8
 => el0t_64_sync_handler+0x120/0x130
 => el0t_64_sync+0x190/0x198
    sshd-session-16754   [002] ..... 493925.407173: __arm64_sys_write+0x4/0x40 <-invoke_syscall+0x50/0x120
    sshd-session-16754   [002] ..... 493925.407177: <stack trace>
 => __arm64_sys_write+0x8/0x40
 => invoke_syscall+0x50/0x120
 => el0_svc_common.constprop.0+0x48/0xf0
 => do_el0_svc+0x24/0x38
 => el0_svc+0x30/0xf8
 => el0t_64_sync_handler+0x120/0x130
 => el0t_64_sync+0x190/0x198
    sshd-session-16754   [002] ..... 493925.432925: __arm64_sys_write+0x4/0x40 <-invoke_syscall+0x50/0x120
    sshd-session-16754   [002] ..... 493925.432929: <stack trace>
 => __arm64_sys_write+0x8/0x40
 => invoke_syscall+0x50/0x120
 => el0_svc_common.constprop.0+0x48/0xf0
 => do_el0_svc+0x24/0x38
 => el0_svc+0x30/0xf8
 => el0t_64_sync_handler+0x120/0x130
 => el0t_64_sync+0x190/0x198
            bash-16773   [003] ..... 493925.433033: __arm64_sys_write+0x4/0x40 <-invoke_syscall+0x50/0x120
            bash-16773   [003] ..... 493925.433036: <stack trace>
 => __arm64_sys_write+0x8/0x40
 => invoke_syscall+0x50/0x120
 => el0_svc_common.constprop.0+0x48/0xf0
 => do_el0_svc+0x24/0x38
 => el0_svc+0x30/0xf8
 => el0t_64_sync_handler+0x120/0x130
 => el0t_64_sync+0x190/0x198
    sshd-session-16754   [002] ..... 493925.433167: __arm64_sys_write+0x4/0x40 <-invoke_syscall+0x50/0x120
    sshd-session-16754   [002] ..... 493925.433170: <stack trace>
 => __arm64_sys_write+0x8/0x40
 => invoke_syscall+0x50/0x120
 => el0_svc_common.constprop.0+0x48/0xf0
 => do_el0_svc+0x24/0x38
 => el0_svc+0x30/0xf8
 => el0t_64_sync_handler+0x120/0x130
 => el0t_64_sync+0x190/0x198
    sshd-session-16754   [002] ..... 493925.451126: __arm64_sys_write+0x4/0x40 <-invoke_syscall+0x50/0x120
    sshd-session-16754   [002] ..... 493925.451129: <stack trace>
 => __arm64_sys_write+0x8/0x40
 => invoke_syscall+0x50/0x120
 => el0_svc_common.constprop.0+0x48/0xf0
 => do_el0_svc+0x24/0x38
 => el0_svc+0x30/0xf8
 => el0t_64_sync_handler+0x120/0x130
 => el0t_64_sync+0x190/0x198
    sshd-session-16754   [002] ..... 493925.473845: __arm64_sys_write+0x4/0x40 <-invoke_syscall+0x50/0x120
    sshd-session-16754   [002] ..... 493925.473849: <stack trace>
 => __arm64_sys_write+0x8/0x40
 => invoke_syscall+0x50/0x120
 => el0_svc_common.constprop.0+0x48/0xf0
 => do_el0_svc+0x24/0x38
 => el0_svc+0x30/0xf8
 => el0t_64_sync_handler+0x120/0x130
 => el0t_64_sync+0x190/0x198
    sshd-session-16754   [002] ..... 493925.497854: __arm64_sys_write+0x4/0x40 <-invoke_syscall+0x50/0x120
    sshd-session-16754   [002] ..... 493925.497857: <stack trace>
 => __arm64_sys_write+0x8/0x40
 => invoke_syscall+0x50/0x120
 => el0_svc_common.constprop.0+0x48/0xf0
 => do_el0_svc+0x24/0x38
 => el0_svc+0x30/0xf8
 => el0t_64_sync_handler+0x120/0x130
 => el0t_64_sync+0x190/0x198
    sshd-session-16754   [002] ..... 493925.521851: __arm64_sys_write+0x4/0x40 <-invoke_syscall+0x50/0x120
    sshd-session-16754   [002] ..... 493925.521855: <stack trace>
 => __arm64_sys_write+0x8/0x40
 => invoke_syscall+0x50/0x120
 => el0_svc_common.constprop.0+0x48/0xf0
 => do_el0_svc+0x24/0x38
 => el0_svc+0x30/0xf8
 => el0t_64_sync_handler+0x120/0x130
 => el0t_64_sync+0x190/0x198
    sshd-session-16754   [002] ..... 493925.545634: __arm64_sys_write+0x4/0x40 <-invoke_syscall+0x50/0x120
    sshd-session-16754   [002] ..... 493925.545637: <stack trace>
 => __arm64_sys_write+0x8/0x40
 => invoke_syscall+0x50/0x120
 => el0_svc_common.constprop.0+0x48/0xf0
 => do_el0_svc+0x24/0x38
 => el0_svc+0x30/0xf8
 => el0t_64_sync_handler+0x120/0x130
 => el0t_64_sync+0x190/0x198
    sshd-session-16754   [002] ..... 493925.652863: __arm64_sys_write+0x4/0x40 <-invoke_syscall+0x50/0x120
    sshd-session-16754   [002] ..... 493925.652867: <stack trace>
 => __arm64_sys_write+0x8/0x40
 => invoke_syscall+0x50/0x120
 => el0_svc_common.constprop.0+0x48/0xf0
 => do_el0_svc+0x24/0x38
 => el0_svc+0x30/0xf8
 => el0t_64_sync_handler+0x120/0x130
 => el0t_64_sync+0x190/0x198
    sshd-session-16754   [002] ..... 493925.653077: __arm64_sys_write+0x4/0x40 <-invoke_syscall+0x50/0x120
    sshd-session-16754   [002] ..... 493925.653080: <stack trace>
 => __arm64_sys_write+0x8/0x40
 => invoke_syscall+0x50/0x120
 => el0_svc_common.constprop.0+0x48/0xf0
 => do_el0_svc+0x24/0x38
 => el0_svc+0x30/0xf8
 => el0t_64_sync_handler+0x120/0x130
 => el0t_64_sync+0x190/0x198
    sshd-session-16754   [002] ..... 493925.663239: __arm64_sys_write+0x4/0x40 <-invoke_syscall+0x50/0x120
    sshd-session-16754   [002] ..... 493925.663242: <stack trace>
 => __arm64_sys_write+0x8/0x40
 => invoke_syscall+0x50/0x120
 => el0_svc_common.constprop.0+0x48/0xf0
 => do_el0_svc+0x24/0x38
 => el0_svc+0x30/0xf8
 => el0t_64_sync_handler+0x120/0x130
 => el0t_64_sync+0x190/0x198
    sshd-session-16754   [002] ..... 493925.686428: __arm64_sys_write+0x4/0x40 <-invoke_syscall+0x50/0x120
    sshd-session-16754   [002] ..... 493925.686431: <stack trace>
 => __arm64_sys_write+0x8/0x40
 => invoke_syscall+0x50/0x120
 => el0_svc_common.constprop.0+0x48/0xf0
 => do_el0_svc+0x24/0x38
 => el0_svc+0x30/0xf8
 => el0t_64_sync_handler+0x120/0x130
 => el0t_64_sync+0x190/0x198
    sshd-session-16754   [002] ..... 493925.710706: __arm64_sys_write+0x4/0x40 <-invoke_syscall+0x50/0x120
    sshd-session-16754   [002] ..... 493925.710709: <stack trace>
 => __arm64_sys_write+0x8/0x40
 => invoke_syscall+0x50/0x120
 => el0_svc_common.constprop.0+0x48/0xf0
 => do_el0_svc+0x24/0x38
 => el0_svc+0x30/0xf8
 => el0t_64_sync_handler+0x120/0x130
 => el0t_64_sync+0x190/0x198
    sshd-session-16754   [002] ..... 493925.733247: __arm64_sys_write+0x4/0x40 <-invoke_syscall+0x50/0x120
    sshd-session-16754   [002] ..... 493925.733250: <stack trace>
 => __arm64_sys_write+0x8/0x40
 => invoke_syscall+0x50/0x120
 => el0_svc_common.constprop.0+0x48/0xf0
 => do_el0_svc+0x24/0x38
 => el0_svc+0x30/0xf8
 => el0t_64_sync_handler+0x120/0x130
 => el0t_64_sync+0x190/0x198
    sshd-session-16754   [002] ..... 493925.754923: __arm64_sys_write+0x4/0x40 <-invoke_syscall+0x50/0x120
    sshd-session-16754   [002] ..... 493925.754927: <stack trace>
 => __arm64_sys_write+0x8/0x40
 => invoke_syscall+0x50/0x120
 => el0_svc_common.constprop.0+0x48/0xf0
 => do_el0_svc+0x24/0x38
 => el0_svc+0x30/0xf8
 => el0t_64_sync_handler+0x120/0x130
 => el0t_64_sync+0x190/0x198
    sshd-session-16754   [002] ..... 493925.777733: __arm64_sys_write+0x4/0x40 <-invoke_syscall+0x50/0x120
    sshd-session-16754   [002] ..... 493925.777737: <stack trace>
 => __arm64_sys_write+0x8/0x40
 => invoke_syscall+0x50/0x120
 => el0_svc_common.constprop.0+0x48/0xf0
 => do_el0_svc+0x24/0x38
 => el0_svc+0x30/0xf8
 => el0t_64_sync_handler+0x120/0x130
 => el0t_64_sync+0x190/0x198
    sshd-session-16754   [002] ..... 493925.801153: __arm64_sys_write+0x4/0x40 <-invoke_syscall+0x50/0x120
    sshd-session-16754   [002] ..... 493925.801157: <stack trace>
 => __arm64_sys_write+0x8/0x40
 => invoke_syscall+0x50/0x120
 => el0_svc_common.constprop.0+0x48/0xf0
 => do_el0_svc+0x24/0x38
 => el0_svc+0x30/0xf8
 => el0t_64_sync_handler+0x120/0x130
 => el0t_64_sync+0x190/0x198
    sshd-session-16754   [002] ..... 493925.824112: __arm64_sys_write+0x4/0x40 <-invoke_syscall+0x50/0x120
    sshd-session-16754   [002] ..... 493925.824115: <stack trace>
 => __arm64_sys_write+0x8/0x40
 => invoke_syscall+0x50/0x120
 => el0_svc_common.constprop.0+0x48/0xf0
 => do_el0_svc+0x24/0x38
 => el0_svc+0x30/0xf8
 => el0t_64_sync_handler+0x120/0x130
 => el0t_64_sync+0x190/0x198
    sshd-session-16754   [002] ..... 493925.846857: __arm64_sys_write+0x4/0x40 <-invoke_syscall+0x50/0x120
    sshd-session-16754   [002] ..... 493925.846860: <stack trace>
 => __arm64_sys_write+0x8/0x40
 => invoke_syscall+0x50/0x120
 => el0_svc_common.constprop.0+0x48/0xf0
 => do_el0_svc+0x24/0x38
 => el0_svc+0x30/0xf8
 => el0t_64_sync_handler+0x120/0x130
 => el0t_64_sync+0x190/0x198
    sshd-session-16754   [002] ..... 493925.870109: __arm64_sys_write+0x4/0x40 <-invoke_syscall+0x50/0x120
    sshd-session-16754   [002] ..... 493925.870113: <stack trace>
 => __arm64_sys_write+0x8/0x40
 => invoke_syscall+0x50/0x120
 => el0_svc_common.constprop.0+0x48/0xf0
 => do_el0_svc+0x24/0x38
 => el0_svc+0x30/0xf8
 => el0t_64_sync_handler+0x120/0x130
 => el0t_64_sync+0x190/0x198
    sshd-session-16754   [002] ..... 493925.893912: __arm64_sys_write+0x4/0x40 <-invoke_syscall+0x50/0x120
    sshd-session-16754   [002] ..... 493925.893915: <stack trace>
 => __arm64_sys_write+0x8/0x40
 => invoke_syscall+0x50/0x120
 => el0_svc_common.constprop.0+0x48/0xf0
 => do_el0_svc+0x24/0x38
 => el0_svc+0x30/0xf8
 => el0t_64_sync_handler+0x120/0x130
 => el0t_64_sync+0x190/0x198
    sshd-session-16754   [002] ..... 493925.916203: __arm64_sys_write+0x4/0x40 <-invoke_syscall+0x50/0x120
    sshd-session-16754   [002] ..... 493925.916206: <stack trace>
 => __arm64_sys_write+0x8/0x40
 => invoke_syscall+0x50/0x120
 => el0_svc_common.constprop.0+0x48/0xf0
 => do_el0_svc+0x24/0x38
 => el0_svc+0x30/0xf8
 => el0t_64_sync_handler+0x120/0x130
 => el0t_64_sync+0x190/0x198
    sshd-session-16754   [002] ..... 493925.941798: __arm64_sys_write+0x4/0x40 <-invoke_syscall+0x50/0x120
    sshd-session-16754   [002] ..... 493925.941802: <stack trace>
 => __arm64_sys_write+0x8/0x40
 => invoke_syscall+0x50/0x120
 => el0_svc_common.constprop.0+0x48/0xf0
 => do_el0_svc+0x24/0x38
 => el0_svc+0x30/0xf8
 => el0t_64_sync_handler+0x120/0x130
 => el0t_64_sync+0x190/0x198
    sshd-session-16754   [002] ..... 493925.964512: __arm64_sys_write+0x4/0x40 <-invoke_syscall+0x50/0x120
    sshd-session-16754   [002] ..... 493925.964516: <stack trace>
 => __arm64_sys_write+0x8/0x40
 => invoke_syscall+0x50/0x120
 => el0_svc_common.constprop.0+0x48/0xf0
 => do_el0_svc+0x24/0x38
 => el0_svc+0x30/0xf8
 => el0t_64_sync_handler+0x120/0x130
 => el0t_64_sync+0x190/0x198
    sshd-session-16754   [002] ..... 493925.988236: __arm64_sys_write+0x4/0x40 <-invoke_syscall+0x50/0x120
    sshd-session-16754   [002] ..... 493925.988239: <stack trace>
 => __arm64_sys_write+0x8/0x40
 => invoke_syscall+0x50/0x120
 => el0_svc_common.constprop.0+0x48/0xf0
 => do_el0_svc+0x24/0x38
 => el0_svc+0x30/0xf8
 => el0t_64_sync_handler+0x120/0x130
 => el0t_64_sync+0x190/0x198
    sshd-session-16754   [002] ..... 493926.010988: __arm64_sys_write+0x4/0x40 <-invoke_syscall+0x50/0x120
    sshd-session-16754   [002] ..... 493926.010992: <stack trace>
 => __arm64_sys_write+0x8/0x40
 => invoke_syscall+0x50/0x120
 => el0_svc_common.constprop.0+0x48/0xf0
 => do_el0_svc+0x24/0x38
 => el0_svc+0x30/0xf8
 => el0t_64_sync_handler+0x120/0x130
 => el0t_64_sync+0x190/0x198
    sshd-session-16754   [002] ..... 493926.031463: __arm64_sys_write+0x4/0x40 <-invoke_syscall+0x50/0x120
    sshd-session-16754   [002] ..... 493926.031466: <stack trace>
 => __arm64_sys_write+0x8/0x40
 => invoke_syscall+0x50/0x120
 => el0_svc_common.constprop.0+0x48/0xf0
 => do_el0_svc+0x24/0x38
 => el0_svc+0x30/0xf8
 => el0t_64_sync_handler+0x120/0x130
 => el0t_64_sync+0x190/0x198
    sshd-session-16754   [002] ..... 493926.054086: __arm64_sys_write+0x4/0x40 <-invoke_syscall+0x50/0x120
    sshd-session-16754   [002] ..... 493926.054089: <stack trace>
 => __arm64_sys_write+0x8/0x40
 => invoke_syscall+0x50/0x120
 => el0_svc_common.constprop.0+0x48/0xf0
 => do_el0_svc+0x24/0x38
 => el0_svc+0x30/0xf8
 => el0t_64_sync_handler+0x120/0x130
 => el0t_64_sync+0x190/0x198
    sshd-session-16754   [002] ..... 493926.084110: __arm64_sys_write+0x4/0x40 <-invoke_syscall+0x50/0x120
    sshd-session-16754   [002] ..... 493926.084114: <stack trace>
 => __arm64_sys_write+0x8/0x40
 => invoke_syscall+0x50/0x120
 => el0_svc_common.constprop.0+0x48/0xf0
 => do_el0_svc+0x24/0x38
 => el0_svc+0x30/0xf8
 => el0t_64_sync_handler+0x120/0x130
 => el0t_64_sync+0x190/0x198
    sshd-session-16754   [002] ..... 493926.176850: __arm64_sys_write+0x4/0x40 <-invoke_syscall+0x50/0x120
    sshd-session-16754   [002] ..... 493926.176854: <stack trace>
 => __arm64_sys_write+0x8/0x40
 => invoke_syscall+0x50/0x120
 => el0_svc_common.constprop.0+0x48/0xf0
 => do_el0_svc+0x24/0x38
 => el0_svc+0x30/0xf8
 => el0t_64_sync_handler+0x120/0x130
 => el0t_64_sync+0x190/0x198
    sshd-session-16754   [002] ..... 493926.177487: __arm64_sys_write+0x4/0x40 <-invoke_syscall+0x50/0x120
    sshd-session-16754   [002] ..... 493926.177490: <stack trace>
 => __arm64_sys_write+0x8/0x40
 => invoke_syscall+0x50/0x120
 => el0_svc_common.constprop.0+0x48/0xf0
 => do_el0_svc+0x24/0x38
 => el0_svc+0x30/0xf8
 => el0t_64_sync_handler+0x120/0x130
 => el0t_64_sync+0x190/0x198
    sshd-session-16754   [002] ..... 493926.177734: __arm64_sys_write+0x4/0x40 <-invoke_syscall+0x50/0x120
    sshd-session-16754   [002] ..... 493926.177737: <stack trace>
 => __arm64_sys_write+0x8/0x40
 => invoke_syscall+0x50/0x120
 => el0_svc_common.constprop.0+0x48/0xf0
 => do_el0_svc+0x24/0x38
 => el0_svc+0x30/0xf8
 => el0t_64_sync_handler+0x120/0x130
 => el0t_64_sync+0x190/0x198
    sshd-session-16754   [002] ..... 493926.198166: __arm64_sys_write+0x4/0x40 <-invoke_syscall+0x50/0x120
    sshd-session-16754   [002] ..... 493926.198169: <stack trace>
 => __arm64_sys_write+0x8/0x40
 => invoke_syscall+0x50/0x120
 => el0_svc_common.constprop.0+0x48/0xf0
 => do_el0_svc+0x24/0x38
 => el0_svc+0x30/0xf8
 => el0t_64_sync_handler+0x120/0x130
 => el0t_64_sync+0x190/0x198
    sshd-session-16754   [002] ..... 493926.221209: __arm64_sys_write+0x4/0x40 <-invoke_syscall+0x50/0x120
    sshd-session-16754   [002] ..... 493926.221212: <stack trace>
 => __arm64_sys_write+0x8/0x40
 => invoke_syscall+0x50/0x120
 => el0_svc_common.constprop.0+0x48/0xf0
 => do_el0_svc+0x24/0x38
 => el0_svc+0x30/0xf8
 => el0t_64_sync_handler+0x120/0x130
 => el0t_64_sync+0x190/0x198
    sshd-session-16754   [002] ..... 493926.241759: __arm64_sys_write+0x4/0x40 <-invoke_syscall+0x50/0x120
    sshd-session-16754   [002] ..... 493926.241763: <stack trace>
 => __arm64_sys_write+0x8/0x40
 => invoke_syscall+0x50/0x120
 => el0_svc_common.constprop.0+0x48/0xf0
 => do_el0_svc+0x24/0x38
 => el0_svc+0x30/0xf8
 => el0t_64_sync_handler+0x120/0x130
 => el0t_64_sync+0x190/0x198
    sshd-session-16754   [002] ..... 493926.262907: __arm64_sys_write+0x4/0x40 <-invoke_syscall+0x50/0x120
    sshd-session-16754   [002] ..... 493926.262910: <stack trace>
 => __arm64_sys_write+0x8/0x40
 => invoke_syscall+0x50/0x120
 => el0_svc_common.constprop.0+0x48/0xf0
 => do_el0_svc+0x24/0x38
 => el0_svc+0x30/0xf8
 => el0t_64_sync_handler+0x120/0x130
 => el0t_64_sync+0x190/0x198
    sshd-session-16754   [002] ..... 493926.293935: __arm64_sys_write+0x4/0x40 <-invoke_syscall+0x50/0x120
    sshd-session-16754   [002] ..... 493926.293938: <stack trace>
 => __arm64_sys_write+0x8/0x40
 => invoke_syscall+0x50/0x120
 => el0_svc_common.constprop.0+0x48/0xf0
 => do_el0_svc+0x24/0x38
 => el0_svc+0x30/0xf8
 => el0t_64_sync_handler+0x120/0x130
 => el0t_64_sync+0x190/0x198
    sshd-session-16754   [002] ..... 493926.309525: __arm64_sys_write+0x4/0x40 <-invoke_syscall+0x50/0x120
    sshd-session-16754   [002] ..... 493926.309528: <stack trace>
 => __arm64_sys_write+0x8/0x40
 => invoke_syscall+0x50/0x120
 => el0_svc_common.constprop.0+0x48/0xf0
 => do_el0_svc+0x24/0x38
 => el0_svc+0x30/0xf8
 => el0t_64_sync_handler+0x120/0x130
 => el0t_64_sync+0x190/0x198
    sshd-session-16754   [002] ..... 493926.333747: __arm64_sys_write+0x4/0x40 <-invoke_syscall+0x50/0x120
    sshd-session-16754   [002] ..... 493926.333751: <stack trace>
 => __arm64_sys_write+0x8/0x40
 => invoke_syscall+0x50/0x120
 => el0_svc_common.constprop.0+0x48/0xf0
 => do_el0_svc+0x24/0x38
 => el0_svc+0x30/0xf8
 => el0t_64_sync_handler+0x120/0x130
 => el0t_64_sync+0x190/0x198
    sshd-session-16754   [002] ..... 493926.356847: __arm64_sys_write+0x4/0x40 <-invoke_syscall+0x50/0x120
    sshd-session-16754   [002] ..... 493926.356851: <stack trace>
 => __arm64_sys_write+0x8/0x40
 => invoke_syscall+0x50/0x120
 => el0_svc_common.constprop.0+0x48/0xf0
 => do_el0_svc+0x24/0x38
 => el0_svc+0x30/0xf8
 => el0t_64_sync_handler+0x120/0x130
 => el0t_64_sync+0x190/0x198
    sshd-session-16754   [002] ..... 493926.381071: __arm64_sys_write+0x4/0x40 <-invoke_syscall+0x50/0x120
    sshd-session-16754   [002] ..... 493926.381074: <stack trace>
 => __arm64_sys_write+0x8/0x40
 => invoke_syscall+0x50/0x120
 => el0_svc_common.constprop.0+0x48/0xf0
 => do_el0_svc+0x24/0x38
 => el0_svc+0x30/0xf8
 => el0t_64_sync_handler+0x120/0x130
 => el0t_64_sync+0x190/0x198
    sshd-session-16754   [002] ..... 493926.402957: __arm64_sys_write+0x4/0x40 <-invoke_syscall+0x50/0x120
    sshd-session-16754   [002] ..... 493926.402960: <stack trace>
 => __arm64_sys_write+0x8/0x40
 => invoke_syscall+0x50/0x120
 => el0_svc_common.constprop.0+0x48/0xf0
 => do_el0_svc+0x24/0x38
 => el0_svc+0x30/0xf8
 => el0t_64_sync_handler+0x120/0x130
 => el0t_64_sync+0x190/0x198
    sshd-session-16754   [002] ..... 493926.427605: __arm64_sys_write+0x4/0x40 <-invoke_syscall+0x50/0x120
    sshd-session-16754   [002] ..... 493926.427608: <stack trace>
 => __arm64_sys_write+0x8/0x40
 => invoke_syscall+0x50/0x120
 => el0_svc_common.constprop.0+0x48/0xf0
 => do_el0_svc+0x24/0x38
 => el0_svc+0x30/0xf8
 => el0t_64_sync_handler+0x120/0x130
 => el0t_64_sync+0x190/0x198
    sshd-session-16754   [002] ..... 493926.450565: __arm64_sys_write+0x4/0x40 <-invoke_syscall+0x50/0x120
    sshd-session-16754   [002] ..... 493926.450568: <stack trace>
 => __arm64_sys_write+0x8/0x40
 => invoke_syscall+0x50/0x120
 => el0_svc_common.constprop.0+0x48/0xf0
 => do_el0_svc+0x24/0x38
 => el0_svc+0x30/0xf8
 => el0t_64_sync_handler+0x120/0x130
 => el0t_64_sync+0x190/0x198
    sshd-session-16754   [002] ..... 493926.475480: __arm64_sys_write+0x4/0x40 <-invoke_syscall+0x50/0x120
    sshd-session-16754   [002] ..... 493926.475484: <stack trace>
 => __arm64_sys_write+0x8/0x40
 => invoke_syscall+0x50/0x120
 => el0_svc_common.constprop.0+0x48/0xf0
 => do_el0_svc+0x24/0x38
 => el0_svc+0x30/0xf8
 => el0t_64_sync_handler+0x120/0x130
 => el0t_64_sync+0x190/0x198
    sshd-session-16754   [002] ..... 493926.497166: __arm64_sys_write+0x4/0x40 <-invoke_syscall+0x50/0x120
    sshd-session-16754   [002] ..... 493926.497170: <stack trace>
 => __arm64_sys_write+0x8/0x40
 => invoke_syscall+0x50/0x120
 => el0_svc_common.constprop.0+0x48/0xf0
 => do_el0_svc+0x24/0x38
 => el0_svc+0x30/0xf8
 => el0t_64_sync_handler+0x120/0x130
 => el0t_64_sync+0x190/0x198
    sshd-session-16754   [002] ..... 493926.521495: __arm64_sys_write+0x4/0x40 <-invoke_syscall+0x50/0x120
    sshd-session-16754   [002] ..... 493926.521498: <stack trace>
 => __arm64_sys_write+0x8/0x40
 => invoke_syscall+0x50/0x120
 => el0_svc_common.constprop.0+0x48/0xf0
 => do_el0_svc+0x24/0x38
 => el0_svc+0x30/0xf8
 => el0t_64_sync_handler+0x120/0x130
 => el0t_64_sync+0x190/0x198
    sshd-session-16754   [002] ..... 493926.545299: __arm64_sys_write+0x4/0x40 <-invoke_syscall+0x50/0x120
    sshd-session-16754   [002] ..... 493926.545303: <stack trace>
 => __arm64_sys_write+0x8/0x40
 => invoke_syscall+0x50/0x120
 => el0_svc_common.constprop.0+0x48/0xf0
 => do_el0_svc+0x24/0x38
 => el0_svc+0x30/0xf8
 => el0t_64_sync_handler+0x120/0x130
 => el0t_64_sync+0x190/0x198
    sshd-session-16754   [002] ..... 493926.567095: __arm64_sys_write+0x4/0x40 <-invoke_syscall+0x50/0x120
    sshd-session-16754   [002] ..... 493926.567099: <stack trace>
 => __arm64_sys_write+0x8/0x40
 => invoke_syscall+0x50/0x120
 => el0_svc_common.constprop.0+0x48/0xf0
 => do_el0_svc+0x24/0x38
 => el0_svc+0x30/0xf8
 => el0t_64_sync_handler+0x120/0x130
 => el0t_64_sync+0x190/0x198
    sshd-session-16754   [002] ..... 493926.593371: __arm64_sys_write+0x4/0x40 <-invoke_syscall+0x50/0x120
    sshd-session-16754   [002] ..... 493926.593375: <stack trace>
 => __arm64_sys_write+0x8/0x40
 => invoke_syscall+0x50/0x120
 => el0_svc_common.constprop.0+0x48/0xf0
 => do_el0_svc+0x24/0x38
 => el0_svc+0x30/0xf8
 => el0t_64_sync_handler+0x120/0x130
 => el0t_64_sync+0x190/0x198
    sshd-session-16754   [002] ..... 493926.700144: __arm64_sys_write+0x4/0x40 <-invoke_syscall+0x50/0x120
    sshd-session-16754   [002] ..... 493926.700147: <stack trace>
 => __arm64_sys_write+0x8/0x40
 => invoke_syscall+0x50/0x120
 => el0_svc_common.constprop.0+0x48/0xf0
 => do_el0_svc+0x24/0x38
 => el0_svc+0x30/0xf8
 => el0t_64_sync_handler+0x120/0x130
 => el0t_64_sync+0x190/0x198
    sshd-session-16754   [002] ..... 493926.700355: __arm64_sys_write+0x4/0x40 <-invoke_syscall+0x50/0x120
    sshd-session-16754   [002] ..... 493926.700358: <stack trace>
 => __arm64_sys_write+0x8/0x40
 => invoke_syscall+0x50/0x120
 => el0_svc_common.constprop.0+0x48/0xf0
 => do_el0_svc+0x24/0x38
 => el0_svc+0x30/0xf8
 => el0t_64_sync_handler+0x120/0x130
 => el0t_64_sync+0x190/0x198
    sshd-session-16754   [002] ..... 493926.712844: __arm64_sys_write+0x4/0x40 <-invoke_syscall+0x50/0x120
    sshd-session-16754   [002] ..... 493926.712848: <stack trace>
 => __arm64_sys_write+0x8/0x40
 => invoke_syscall+0x50/0x120
 => el0_svc_common.constprop.0+0x48/0xf0
 => do_el0_svc+0x24/0x38
 => el0_svc+0x30/0xf8
 => el0t_64_sync_handler+0x120/0x130
 => el0t_64_sync+0x190/0x198
    sshd-session-16754   [002] ..... 493926.736031: __arm64_sys_write+0x4/0x40 <-invoke_syscall+0x50/0x120
    sshd-session-16754   [002] ..... 493926.736034: <stack trace>
 => __arm64_sys_write+0x8/0x40
 => invoke_syscall+0x50/0x120
 => el0_svc_common.constprop.0+0x48/0xf0
 => do_el0_svc+0x24/0x38
 => el0_svc+0x30/0xf8
 => el0t_64_sync_handler+0x120/0x130
 => el0t_64_sync+0x190/0x198
    sshd-session-16754   [002] ..... 493926.765008: __arm64_sys_write+0x4/0x40 <-invoke_syscall+0x50/0x120
    sshd-session-16754   [002] ..... 493926.765012: <stack trace>
 => __arm64_sys_write+0x8/0x40
 => invoke_syscall+0x50/0x120
 => el0_svc_common.constprop.0+0x48/0xf0
 => do_el0_svc+0x24/0x38
 => el0_svc+0x30/0xf8
 => el0t_64_sync_handler+0x120/0x130
 => el0t_64_sync+0x190/0x198
    sshd-session-16754   [002] ..... 493926.781023: __arm64_sys_write+0x4/0x40 <-invoke_syscall+0x50/0x120
    sshd-session-16754   [002] ..... 493926.781026: <stack trace>
 => __arm64_sys_write+0x8/0x40
 => invoke_syscall+0x50/0x120
 => el0_svc_common.constprop.0+0x48/0xf0
 => do_el0_svc+0x24/0x38
 => el0_svc+0x30/0xf8
 => el0t_64_sync_handler+0x120/0x130
 => el0t_64_sync+0x190/0x198
    sshd-session-16754   [002] ..... 493926.805820: __arm64_sys_write+0x4/0x40 <-invoke_syscall+0x50/0x120
    sshd-session-16754   [002] ..... 493926.805823: <stack trace>
 => __arm64_sys_write+0x8/0x40
 => invoke_syscall+0x50/0x120
 => el0_svc_common.constprop.0+0x48/0xf0
 => do_el0_svc+0x24/0x38
 => el0_svc+0x30/0xf8
 => el0t_64_sync_handler+0x120/0x130
 => el0t_64_sync+0x190/0x198
    sshd-session-16754   [002] ..... 493926.829242: __arm64_sys_write+0x4/0x40 <-invoke_syscall+0x50/0x120
    sshd-session-16754   [002] ..... 493926.829245: <stack trace>
 => __arm64_sys_write+0x8/0x40
 => invoke_syscall+0x50/0x120
 => el0_svc_common.constprop.0+0x48/0xf0
 => do_el0_svc+0x24/0x38
 => el0_svc+0x30/0xf8
 => el0t_64_sync_handler+0x120/0x130
 => el0t_64_sync+0x190/0x198
    sshd-session-16754   [002] ..... 493926.853049: __arm64_sys_write+0x4/0x40 <-invoke_syscall+0x50/0x120
    sshd-session-16754   [002] ..... 493926.853053: <stack trace>
 => __arm64_sys_write+0x8/0x40
 => invoke_syscall+0x50/0x120
 => el0_svc_common.constprop.0+0x48/0xf0
 => do_el0_svc+0x24/0x38
 => el0_svc+0x30/0xf8
 => el0t_64_sync_handler+0x120/0x130
 => el0t_64_sync+0x190/0x198
    sshd-session-16754   [002] ..... 493926.877851: __arm64_sys_write+0x4/0x40 <-invoke_syscall+0x50/0x120
    sshd-session-16754   [002] ..... 493926.877855: <stack trace>
 => __arm64_sys_write+0x8/0x40
 => invoke_syscall+0x50/0x120
 => el0_svc_common.constprop.0+0x48/0xf0
 => do_el0_svc+0x24/0x38
 => el0_svc+0x30/0xf8
 => el0t_64_sync_handler+0x120/0x130
 => el0t_64_sync+0x190/0x198
    sshd-session-16754   [002] ..... 493926.900862: __arm64_sys_write+0x4/0x40 <-invoke_syscall+0x50/0x120
    sshd-session-16754   [002] ..... 493926.900865: <stack trace>
 => __arm64_sys_write+0x8/0x40
 => invoke_syscall+0x50/0x120
 => el0_svc_common.constprop.0+0x48/0xf0
 => do_el0_svc+0x24/0x38
 => el0_svc+0x30/0xf8
 => el0t_64_sync_handler+0x120/0x130
 => el0t_64_sync+0x190/0x198
    sshd-session-16754   [002] ..... 493926.923579: __arm64_sys_write+0x4/0x40 <-invoke_syscall+0x50/0x120
    sshd-session-16754   [002] ..... 493926.923582: <stack trace>
 => __arm64_sys_write+0x8/0x40
 => invoke_syscall+0x50/0x120
 => el0_svc_common.constprop.0+0x48/0xf0
 => do_el0_svc+0x24/0x38
 => el0_svc+0x30/0xf8
 => el0t_64_sync_handler+0x120/0x130
 => el0t_64_sync+0x190/0x198
    sshd-session-16754   [002] ..... 493926.946943: __arm64_sys_write+0x4/0x40 <-invoke_syscall+0x50/0x120
    sshd-session-16754   [002] ..... 493926.946947: <stack trace>
 => __arm64_sys_write+0x8/0x40
 => invoke_syscall+0x50/0x120
 => el0_svc_common.constprop.0+0x48/0xf0
 => do_el0_svc+0x24/0x38
 => el0_svc+0x30/0xf8
 => el0t_64_sync_handler+0x120/0x130
 => el0t_64_sync+0x190/0x198
    sshd-session-16754   [002] ..... 493926.968889: __arm64_sys_write+0x4/0x40 <-invoke_syscall+0x50/0x120
    sshd-session-16754   [002] ..... 493926.968893: <stack trace>
 => __arm64_sys_write+0x8/0x40
 => invoke_syscall+0x50/0x120
 => el0_svc_common.constprop.0+0x48/0xf0
 => do_el0_svc+0x24/0x38
 => el0_svc+0x30/0xf8
 => el0t_64_sync_handler+0x120/0x130
 => el0t_64_sync+0x190/0x198
    sshd-session-16754   [002] ..... 493926.990909: __arm64_sys_write+0x4/0x40 <-invoke_syscall+0x50/0x120
    sshd-session-16754   [002] ..... 493926.990912: <stack trace>
 => __arm64_sys_write+0x8/0x40
 => invoke_syscall+0x50/0x120
 => el0_svc_common.constprop.0+0x48/0xf0
 => do_el0_svc+0x24/0x38
 => el0_svc+0x30/0xf8
 => el0t_64_sync_handler+0x120/0x130
 => el0t_64_sync+0x190/0x198
    sshd-session-16754   [000] ..... 493927.018489: __arm64_sys_write+0x4/0x40 <-invoke_syscall+0x50/0x120
    sshd-session-16754   [000] ..... 493927.018494: <stack trace>
 => __arm64_sys_write+0x8/0x40
 => invoke_syscall+0x50/0x120
 => el0_svc_common.constprop.0+0x48/0xf0
 => do_el0_svc+0x24/0x38
 => el0_svc+0x30/0xf8
 => el0t_64_sync_handler+0x120/0x130
 => el0t_64_sync+0x190/0x198
    sshd-session-16754   [000] ..... 493927.038150: __arm64_sys_write+0x4/0x40 <-invoke_syscall+0x50/0x120
    sshd-session-16754   [000] ..... 493927.038154: <stack trace>
 => __arm64_sys_write+0x8/0x40
 => invoke_syscall+0x50/0x120
 => el0_svc_common.constprop.0+0x48/0xf0
 => do_el0_svc+0x24/0x38
 => el0_svc+0x30/0xf8
 => el0t_64_sync_handler+0x120/0x130
 => el0t_64_sync+0x190/0x198
    sshd-session-16754   [000] ..... 493927.062353: __arm64_sys_write+0x4/0x40 <-invoke_syscall+0x50/0x120
    sshd-session-16754   [000] ..... 493927.062356: <stack trace>
 => __arm64_sys_write+0x8/0x40
 => invoke_syscall+0x50/0x120
 => el0_svc_common.constprop.0+0x48/0xf0
 => do_el0_svc+0x24/0x38
 => el0_svc+0x30/0xf8
 => el0t_64_sync_handler+0x120/0x130
 => el0t_64_sync+0x190/0x198
    sshd-session-16754   [000] ..... 493927.083912: __arm64_sys_write+0x4/0x40 <-invoke_syscall+0x50/0x120
    sshd-session-16754   [000] ..... 493927.083916: <stack trace>
 => __arm64_sys_write+0x8/0x40
 => invoke_syscall+0x50/0x120
 => el0_svc_common.constprop.0+0x48/0xf0
 => do_el0_svc+0x24/0x38
 => el0_svc+0x30/0xf8
 => el0t_64_sync_handler+0x120/0x130
 => el0t_64_sync+0x190/0x198
    sshd-session-16754   [000] ..... 493927.107392: __arm64_sys_write+0x4/0x40 <-invoke_syscall+0x50/0x120
    sshd-session-16754   [000] ..... 493927.107396: <stack trace>
 => __arm64_sys_write+0x8/0x40
 => invoke_syscall+0x50/0x120
 => el0_svc_common.constprop.0+0x48/0xf0
 => do_el0_svc+0x24/0x38
 => el0_svc+0x30/0xf8
 => el0t_64_sync_handler+0x120/0x130
 => el0t_64_sync+0x190/0x198
    sshd-session-16754   [000] ..... 493927.131865: __arm64_sys_write+0x4/0x40 <-invoke_syscall+0x50/0x120
    sshd-session-16754   [000] ..... 493927.131871: <stack trace>
 => __arm64_sys_write+0x8/0x40
 => invoke_syscall+0x50/0x120
 => el0_svc_common.constprop.0+0x48/0xf0
 => do_el0_svc+0x24/0x38
 => el0_svc+0x30/0xf8
 => el0t_64_sync_handler+0x120/0x130
 => el0t_64_sync+0x190/0x198
    sshd-session-16754   [000] ..... 493927.225771: __arm64_sys_write+0x4/0x40 <-invoke_syscall+0x50/0x120
    sshd-session-16754   [000] ..... 493927.225775: <stack trace>
 => __arm64_sys_write+0x8/0x40
 => invoke_syscall+0x50/0x120
 => el0_svc_common.constprop.0+0x48/0xf0
 => do_el0_svc+0x24/0x38
 => el0_svc+0x30/0xf8
 => el0t_64_sync_handler+0x120/0x130
 => el0t_64_sync+0x190/0x198
    sshd-session-16754   [002] ..... 493927.228107: __arm64_sys_write+0x4/0x40 <-invoke_syscall+0x50/0x120
    sshd-session-16754   [002] ..... 493927.228111: <stack trace>
 => __arm64_sys_write+0x8/0x40
 => invoke_syscall+0x50/0x120
 => el0_svc_common.constprop.0+0x48/0xf0
 => do_el0_svc+0x24/0x38
 => el0_svc+0x30/0xf8
 => el0t_64_sync_handler+0x120/0x130
 => el0t_64_sync+0x190/0x198
    sshd-session-16754   [000] ..... 493927.251530: __arm64_sys_write+0x4/0x40 <-invoke_syscall+0x50/0x120
    sshd-session-16754   [000] ..... 493927.251534: <stack trace>
 => __arm64_sys_write+0x8/0x40
 => invoke_syscall+0x50/0x120
 => el0_svc_common.constprop.0+0x48/0xf0
 => do_el0_svc+0x24/0x38
 => el0_svc+0x30/0xf8
 => el0t_64_sync_handler+0x120/0x130
 => el0t_64_sync+0x190/0x198
    sshd-session-16754   [000] ..... 493927.274952: __arm64_sys_write+0x4/0x40 <-invoke_syscall+0x50/0x120
    sshd-session-16754   [000] ..... 493927.274955: <stack trace>
 => __arm64_sys_write+0x8/0x40
 => invoke_syscall+0x50/0x120
 => el0_svc_common.constprop.0+0x48/0xf0
 => do_el0_svc+0x24/0x38
 => el0_svc+0x30/0xf8
 => el0t_64_sync_handler+0x120/0x130
 => el0t_64_sync+0x190/0x198
    sshd-session-16754   [000] ..... 493927.297947: __arm64_sys_write+0x4/0x40 <-invoke_syscall+0x50/0x120
    sshd-session-16754   [000] ..... 493927.297951: <stack trace>
 => __arm64_sys_write+0x8/0x40
 => invoke_syscall+0x50/0x120
 => el0_svc_common.constprop.0+0x48/0xf0
 => do_el0_svc+0x24/0x38
 => el0_svc+0x30/0xf8
 => el0t_64_sync_handler+0x120/0x130
 => el0t_64_sync+0x190/0x198
    sshd-session-16754   [003] ..... 493927.324546: __arm64_sys_write+0x4/0x40 <-invoke_syscall+0x50/0x120
    sshd-session-16754   [003] ..... 493927.324550: <stack trace>
 => __arm64_sys_write+0x8/0x40
 => invoke_syscall+0x50/0x120
 => el0_svc_common.constprop.0+0x48/0xf0
 => do_el0_svc+0x24/0x38
 => el0_svc+0x30/0xf8
 => el0t_64_sync_handler+0x120/0x130
 => el0t_64_sync+0x190/0x198
    sshd-session-16754   [000] ..... 493927.341889: __arm64_sys_write+0x4/0x40 <-invoke_syscall+0x50/0x120
    sshd-session-16754   [000] ..... 493927.341892: <stack trace>
 => __arm64_sys_write+0x8/0x40
 => invoke_syscall+0x50/0x120
 => el0_svc_common.constprop.0+0x48/0xf0
 => do_el0_svc+0x24/0x38
 => el0_svc+0x30/0xf8
 => el0t_64_sync_handler+0x120/0x130
 => el0t_64_sync+0x190/0x198
    sshd-session-16754   [000] ..... 493927.363584: __arm64_sys_write+0x4/0x40 <-invoke_syscall+0x50/0x120
    sshd-session-16754   [000] ..... 493927.363587: <stack trace>
 => __arm64_sys_write+0x8/0x40
 => invoke_syscall+0x50/0x120
 => el0_svc_common.constprop.0+0x48/0xf0
 => do_el0_svc+0x24/0x38
 => el0_svc+0x30/0xf8
 => el0t_64_sync_handler+0x120/0x130
 => el0t_64_sync+0x190/0x198
    sshd-session-16754   [000] ..... 493927.386524: __arm64_sys_write+0x4/0x40 <-invoke_syscall+0x50/0x120
    sshd-session-16754   [000] ..... 493927.386528: <stack trace>
 => __arm64_sys_write+0x8/0x40
 => invoke_syscall+0x50/0x120
 => el0_svc_common.constprop.0+0x48/0xf0
 => do_el0_svc+0x24/0x38
 => el0_svc+0x30/0xf8
 => el0t_64_sync_handler+0x120/0x130
 => el0t_64_sync+0x190/0x198
    sshd-session-16754   [000] ..... 493927.417405: __arm64_sys_write+0x4/0x40 <-invoke_syscall+0x50/0x120
    sshd-session-16754   [000] ..... 493927.417408: <stack trace>
 => __arm64_sys_write+0x8/0x40
 => invoke_syscall+0x50/0x120
 => el0_svc_common.constprop.0+0x48/0xf0
 => do_el0_svc+0x24/0x38
 => el0_svc+0x30/0xf8
 => el0t_64_sync_handler+0x120/0x130
 => el0t_64_sync+0x190/0x198
    sshd-session-16754   [000] ..... 493927.431710: __arm64_sys_write+0x4/0x40 <-invoke_syscall+0x50/0x120
    sshd-session-16754   [000] ..... 493927.431714: <stack trace>
 => __arm64_sys_write+0x8/0x40
 => invoke_syscall+0x50/0x120
 => el0_svc_common.constprop.0+0x48/0xf0
 => do_el0_svc+0x24/0x38
 => el0_svc+0x30/0xf8
 => el0t_64_sync_handler+0x120/0x130
 => el0t_64_sync+0x190/0x198
    sshd-session-16754   [000] ..... 493927.456200: __arm64_sys_write+0x4/0x40 <-invoke_syscall+0x50/0x120
    sshd-session-16754   [000] ..... 493927.456204: <stack trace>
 => __arm64_sys_write+0x8/0x40
 => invoke_syscall+0x50/0x120
 => el0_svc_common.constprop.0+0x48/0xf0
 => do_el0_svc+0x24/0x38
 => el0_svc+0x30/0xf8
 => el0t_64_sync_handler+0x120/0x130
 => el0t_64_sync+0x190/0x198
    sshd-session-16754   [000] ..... 493927.480190: __arm64_sys_write+0x4/0x40 <-invoke_syscall+0x50/0x120
    sshd-session-16754   [000] ..... 493927.480193: <stack trace>
 => __arm64_sys_write+0x8/0x40
 => invoke_syscall+0x50/0x120
 => el0_svc_common.constprop.0+0x48/0xf0
 => do_el0_svc+0x24/0x38
 => el0_svc+0x30/0xf8
 => el0t_64_sync_handler+0x120/0x130
 => el0t_64_sync+0x190/0x198
  NetworkManager-649     [002] ..... 493927.762861: __arm64_sys_write+0x4/0x40 <-invoke_syscall+0x50/0x120
  NetworkManager-649     [002] ..... 493927.762868: <stack trace>
 => __arm64_sys_write+0x8/0x40
 => invoke_syscall+0x50/0x120
 => el0_svc_common.constprop.0+0x48/0xf0
 => do_el0_svc+0x24/0x38
 => el0_svc+0x30/0xf8
 => el0t_64_sync_handler+0x120/0x130
 => el0t_64_sync+0x190/0x198
    sshd-session-16754   [000] ..... 493929.040941: __arm64_sys_write+0x4/0x40 <-invoke_syscall+0x50/0x120
    sshd-session-16754   [000] ..... 493929.040948: <stack trace>
 => __arm64_sys_write+0x8/0x40
 => invoke_syscall+0x50/0x120
 => el0_svc_common.constprop.0+0x48/0xf0
 => do_el0_svc+0x24/0x38
 => el0_svc+0x30/0xf8
 => el0t_64_sync_handler+0x120/0x130
 => el0t_64_sync+0x190/0x198
            bash-16773   [003] ..... 493929.041149: __arm64_sys_write+0x4/0x40 <-invoke_syscall+0x50/0x120
            bash-16773   [003] ..... 493929.041154: <stack trace>
 => __arm64_sys_write+0x8/0x40
 => invoke_syscall+0x50/0x120
 => el0_svc_common.constprop.0+0x48/0xf0
 => do_el0_svc+0x24/0x38
 => el0_svc+0x30/0xf8
 => el0t_64_sync_handler+0x120/0x130
 => el0t_64_sync+0x190/0x198
    sshd-session-16754   [000] ..... 493929.041304: __arm64_sys_write+0x4/0x40 <-invoke_syscall+0x50/0x120
    sshd-session-16754   [000] ..... 493929.041308: <stack trace>
 => __arm64_sys_write+0x8/0x40
 => invoke_syscall+0x50/0x120
 => el0_svc_common.constprop.0+0x48/0xf0
 => do_el0_svc+0x24/0x38
 => el0_svc+0x30/0xf8
 => el0t_64_sync_handler+0x120/0x130
 => el0t_64_sync+0x190/0x198
    sshd-session-16754   [000] ..... 493929.055522: __arm64_sys_write+0x4/0x40 <-invoke_syscall+0x50/0x120
    sshd-session-16754   [000] ..... 493929.055526: <stack trace>
 => __arm64_sys_write+0x8/0x40
 => invoke_syscall+0x50/0x120
 => el0_svc_common.constprop.0+0x48/0xf0
 => do_el0_svc+0x24/0x38
 => el0_svc+0x30/0xf8
 => el0t_64_sync_handler+0x120/0x130
 => el0t_64_sync+0x190/0x198
    sshd-session-16754   [000] ..... 493929.077048: __arm64_sys_write+0x4/0x40 <-invoke_syscall+0x50/0x120
    sshd-session-16754   [000] ..... 493929.077051: <stack trace>
 => __arm64_sys_write+0x8/0x40
 => invoke_syscall+0x50/0x120
 => el0_svc_common.constprop.0+0x48/0xf0
 => do_el0_svc+0x24/0x38
 => el0_svc+0x30/0xf8
 => el0t_64_sync_handler+0x120/0x130
 => el0t_64_sync+0x190/0x198
    sshd-session-16754   [000] ..... 493929.100029: __arm64_sys_write+0x4/0x40 <-invoke_syscall+0x50/0x120
    sshd-session-16754   [000] ..... 493929.100032: <stack trace>
 => __arm64_sys_write+0x8/0x40
 => invoke_syscall+0x50/0x120
 => el0_svc_common.constprop.0+0x48/0xf0
 => do_el0_svc+0x24/0x38
 => el0_svc+0x30/0xf8
 => el0t_64_sync_handler+0x120/0x130
 => el0t_64_sync+0x190/0x198
    sshd-session-16754   [000] ..... 493929.124365: __arm64_sys_write+0x4/0x40 <-invoke_syscall+0x50/0x120
    sshd-session-16754   [000] ..... 493929.124369: <stack trace>
 => __arm64_sys_write+0x8/0x40
 => invoke_syscall+0x50/0x120
 => el0_svc_common.constprop.0+0x48/0xf0
 => do_el0_svc+0x24/0x38
 => el0_svc+0x30/0xf8
 => el0t_64_sync_handler+0x120/0x130
 => el0t_64_sync+0x190/0x198
    sshd-session-16754   [000] ..... 493929.146467: __arm64_sys_write+0x4/0x40 <-invoke_syscall+0x50/0x120
    sshd-session-16754   [000] ..... 493929.146470: <stack trace>
 => __arm64_sys_write+0x8/0x40
 => invoke_syscall+0x50/0x120
 => el0_svc_common.constprop.0+0x48/0xf0
 => do_el0_svc+0x24/0x38
 => el0_svc+0x30/0xf8
 => el0t_64_sync_handler+0x120/0x130
 => el0t_64_sync+0x190/0x198
    sshd-session-16754   [000] ..... 493929.169152: __arm64_sys_write+0x4/0x40 <-invoke_syscall+0x50/0x120
    sshd-session-16754   [000] ..... 493929.169155: <stack trace>
 => __arm64_sys_write+0x8/0x40
 => invoke_syscall+0x50/0x120
 => el0_svc_common.constprop.0+0x48/0xf0
 => do_el0_svc+0x24/0x38
 => el0_svc+0x30/0xf8
 => el0t_64_sync_handler+0x120/0x130
 => el0t_64_sync+0x190/0x198
    sshd-session-16754   [000] ..... 493929.192577: __arm64_sys_write+0x4/0x40 <-invoke_syscall+0x50/0x120
    sshd-session-16754   [000] ..... 493929.192581: <stack trace>
 => __arm64_sys_write+0x8/0x40
 => invoke_syscall+0x50/0x120
 => el0_svc_common.constprop.0+0x48/0xf0
 => do_el0_svc+0x24/0x38
 => el0_svc+0x30/0xf8
 => el0t_64_sync_handler+0x120/0x130
 => el0t_64_sync+0x190/0x198
    sshd-session-16754   [000] ..... 493929.215461: __arm64_sys_write+0x4/0x40 <-invoke_syscall+0x50/0x120
    sshd-session-16754   [000] ..... 493929.215464: <stack trace>
 => __arm64_sys_write+0x8/0x40
 => invoke_syscall+0x50/0x120
 => el0_svc_common.constprop.0+0x48/0xf0
 => do_el0_svc+0x24/0x38
 => el0_svc+0x30/0xf8
 => el0t_64_sync_handler+0x120/0x130
 => el0t_64_sync+0x190/0x198
    sshd-session-16754   [000] ..... 493929.328260: __arm64_sys_write+0x4/0x40 <-invoke_syscall+0x50/0x120
    sshd-session-16754   [000] ..... 493929.328264: <stack trace>
 => __arm64_sys_write+0x8/0x40
 => invoke_syscall+0x50/0x120
 => el0_svc_common.constprop.0+0x48/0xf0
 => do_el0_svc+0x24/0x38
 => el0_svc+0x30/0xf8
 => el0t_64_sync_handler+0x120/0x130
 => el0t_64_sync+0x190/0x198
    sshd-session-16754   [000] ..... 493929.328292: __arm64_sys_write+0x4/0x40 <-invoke_syscall+0x50/0x120
    sshd-session-16754   [000] ..... 493929.328294: <stack trace>
 => __arm64_sys_write+0x8/0x40
 => invoke_syscall+0x50/0x120
 => el0_svc_common.constprop.0+0x48/0xf0
 => do_el0_svc+0x24/0x38
 => el0_svc+0x30/0xf8
 => el0t_64_sync_handler+0x120/0x130
 => el0t_64_sync+0x190/0x198
            bash-16773   [003] ..... 493929.328505: __arm64_sys_write+0x4/0x40 <-invoke_syscall+0x50/0x120
            bash-16773   [003] ..... 493929.328509: <stack trace>
 => __arm64_sys_write+0x8/0x40
 => invoke_syscall+0x50/0x120
 => el0_svc_common.constprop.0+0x48/0xf0
 => do_el0_svc+0x24/0x38
 => el0_svc+0x30/0xf8
 => el0t_64_sync_handler+0x120/0x130
 => el0t_64_sync+0x190/0x198
    sshd-session-16754   [000] ..... 493929.328671: __arm64_sys_write+0x4/0x40 <-invoke_syscall+0x50/0x120
    sshd-session-16754   [000] ..... 493929.328675: <stack trace>
 => __arm64_sys_write+0x8/0x40
 => invoke_syscall+0x50/0x120
 => el0_svc_common.constprop.0+0x48/0xf0
 => do_el0_svc+0x24/0x38
 => el0_svc+0x30/0xf8
 => el0t_64_sync_handler+0x120/0x130
 => el0t_64_sync+0x190/0x198
    sshd-session-16754   [000] ..... 493929.336942: __arm64_sys_write+0x4/0x40 <-invoke_syscall+0x50/0x120
    sshd-session-16754   [000] ..... 493929.336945: <stack trace>
 => __arm64_sys_write+0x8/0x40
 => invoke_syscall+0x50/0x120
 => el0_svc_common.constprop.0+0x48/0xf0
 => do_el0_svc+0x24/0x38
 => el0_svc+0x30/0xf8
 => el0t_64_sync_handler+0x120/0x130
 => el0t_64_sync+0x190/0x198
    sshd-session-16754   [000] ..... 493929.359245: __arm64_sys_write+0x4/0x40 <-invoke_syscall+0x50/0x120
    sshd-session-16754   [000] ..... 493929.359248: <stack trace>
 => __arm64_sys_write+0x8/0x40
 => invoke_syscall+0x50/0x120
 => el0_svc_common.constprop.0+0x48/0xf0
 => do_el0_svc+0x24/0x38
 => el0_svc+0x30/0xf8
 => el0t_64_sync_handler+0x120/0x130
 => el0t_64_sync+0x190/0x198
    sshd-session-16754   [000] ..... 493929.382887: __arm64_sys_write+0x4/0x40 <-invoke_syscall+0x50/0x120
    sshd-session-16754   [000] ..... 493929.382890: <stack trace>
 => __arm64_sys_write+0x8/0x40
 => invoke_syscall+0x50/0x120
 => el0_svc_common.constprop.0+0x48/0xf0
 => do_el0_svc+0x24/0x38
 => el0_svc+0x30/0xf8
 => el0t_64_sync_handler+0x120/0x130
 => el0t_64_sync+0x190/0x198
    sshd-session-16754   [000] ..... 493929.405456: __arm64_sys_write+0x4/0x40 <-invoke_syscall+0x50/0x120
    sshd-session-16754   [000] ..... 493929.405459: <stack trace>
 => __arm64_sys_write+0x8/0x40
 => invoke_syscall+0x50/0x120
 => el0_svc_common.constprop.0+0x48/0xf0
 => do_el0_svc+0x24/0x38
 => el0_svc+0x30/0xf8
 => el0t_64_sync_handler+0x120/0x130
 => el0t_64_sync+0x190/0x198
    sshd-session-16754   [000] ..... 493929.428840: __arm64_sys_write+0x4/0x40 <-invoke_syscall+0x50/0x120
    sshd-session-16754   [000] ..... 493929.428843: <stack trace>
 => __arm64_sys_write+0x8/0x40
 => invoke_syscall+0x50/0x120
 => el0_svc_common.constprop.0+0x48/0xf0
 => do_el0_svc+0x24/0x38
 => el0_svc+0x30/0xf8
 => el0t_64_sync_handler+0x120/0x130
 => el0t_64_sync+0x190/0x198
    sshd-session-16754   [000] ..... 493929.452618: __arm64_sys_write+0x4/0x40 <-invoke_syscall+0x50/0x120
    sshd-session-16754   [000] ..... 493929.452621: <stack trace>
 => __arm64_sys_write+0x8/0x40
 => invoke_syscall+0x50/0x120
 => el0_svc_common.constprop.0+0x48/0xf0
 => do_el0_svc+0x24/0x38
 => el0_svc+0x30/0xf8
 => el0t_64_sync_handler+0x120/0x130
 => el0t_64_sync+0x190/0x198
    sshd-session-16754   [000] ..... 493929.475363: __arm64_sys_write+0x4/0x40 <-invoke_syscall+0x50/0x120
    sshd-session-16754   [000] ..... 493929.475367: <stack trace>
 => __arm64_sys_write+0x8/0x40
 => invoke_syscall+0x50/0x120
 => el0_svc_common.constprop.0+0x48/0xf0
 => do_el0_svc+0x24/0x38
 => el0_svc+0x30/0xf8
 => el0t_64_sync_handler+0x120/0x130
 => el0t_64_sync+0x190/0x198
            bash-16773   [003] ..... 493929.475491: __arm64_sys_write+0x4/0x40 <-invoke_syscall+0x50/0x120
            bash-16773   [003] ..... 493929.475495: <stack trace>
 => __arm64_sys_write+0x8/0x40
 => invoke_syscall+0x50/0x120
 => el0_svc_common.constprop.0+0x48/0xf0
 => do_el0_svc+0x24/0x38
 => el0_svc+0x30/0xf8
 => el0t_64_sync_handler+0x120/0x130
 => el0t_64_sync+0x190/0x198
    sshd-session-16754   [000] ..... 493929.475626: __arm64_sys_write+0x4/0x40 <-invoke_syscall+0x50/0x120
    sshd-session-16754   [000] ..... 493929.475629: <stack trace>
 => __arm64_sys_write+0x8/0x40
 => invoke_syscall+0x50/0x120
 => el0_svc_common.constprop.0+0x48/0xf0
 => do_el0_svc+0x24/0x38
 => el0_svc+0x30/0xf8
 => el0t_64_sync_handler+0x120/0x130
 => el0t_64_sync+0x190/0x198
    sshd-session-16754   [000] ..... 493929.497966: __arm64_sys_write+0x4/0x40 <-invoke_syscall+0x50/0x120
    sshd-session-16754   [000] ..... 493929.497970: <stack trace>
 => __arm64_sys_write+0x8/0x40
 => invoke_syscall+0x50/0x120
 => el0_svc_common.constprop.0+0x48/0xf0
 => do_el0_svc+0x24/0x38
 => el0_svc+0x30/0xf8
 => el0t_64_sync_handler+0x120/0x130
 => el0t_64_sync+0x190/0x198
    sshd-session-16754   [000] ..... 493929.519985: __arm64_sys_write+0x4/0x40 <-invoke_syscall+0x50/0x120
    sshd-session-16754   [000] ..... 493929.519988: <stack trace>
 => __arm64_sys_write+0x8/0x40
 => invoke_syscall+0x50/0x120
 => el0_svc_common.constprop.0+0x48/0xf0
 => do_el0_svc+0x24/0x38
 => el0_svc+0x30/0xf8
 => el0t_64_sync_handler+0x120/0x130
 => el0t_64_sync+0x190/0x198
    sshd-session-16754   [000] ..... 493929.542942: __arm64_sys_write+0x4/0x40 <-invoke_syscall+0x50/0x120
    sshd-session-16754   [000] ..... 493929.542945: <stack trace>
 => __arm64_sys_write+0x8/0x40
 => invoke_syscall+0x50/0x120
 => el0_svc_common.constprop.0+0x48/0xf0
 => do_el0_svc+0x24/0x38
 => el0_svc+0x30/0xf8
 => el0t_64_sync_handler+0x120/0x130
 => el0t_64_sync+0x190/0x198
    sshd-session-16754   [000] ..... 493929.565673: __arm64_sys_write+0x4/0x40 <-invoke_syscall+0x50/0x120
    sshd-session-16754   [000] ..... 493929.565676: <stack trace>
 => __arm64_sys_write+0x8/0x40
 => invoke_syscall+0x50/0x120
 => el0_svc_common.constprop.0+0x48/0xf0
 => do_el0_svc+0x24/0x38
 => el0_svc+0x30/0xf8
 => el0t_64_sync_handler+0x120/0x130
 => el0t_64_sync+0x190/0x198
    sshd-session-16754   [000] ..... 493929.590345: __arm64_sys_write+0x4/0x40 <-invoke_syscall+0x50/0x120
    sshd-session-16754   [000] ..... 493929.590349: <stack trace>
 => __arm64_sys_write+0x8/0x40
 => invoke_syscall+0x50/0x120
 => el0_svc_common.constprop.0+0x48/0xf0
 => do_el0_svc+0x24/0x38
 => el0_svc+0x30/0xf8
 => el0t_64_sync_handler+0x120/0x130
 => el0t_64_sync+0x190/0x198
    sshd-session-16754   [000] ..... 493929.613194: __arm64_sys_write+0x4/0x40 <-invoke_syscall+0x50/0x120
    sshd-session-16754   [000] ..... 493929.613198: <stack trace>
 => __arm64_sys_write+0x8/0x40
 => invoke_syscall+0x50/0x120
 => el0_svc_common.constprop.0+0x48/0xf0
 => do_el0_svc+0x24/0x38
 => el0_svc+0x30/0xf8
 => el0t_64_sync_handler+0x120/0x130
 => el0t_64_sync+0x190/0x198
    sshd-session-16754   [000] ..... 493929.638031: __arm64_sys_write+0x4/0x40 <-invoke_syscall+0x50/0x120
    sshd-session-16754   [000] ..... 493929.638037: <stack trace>
 => __arm64_sys_write+0x8/0x40
 => invoke_syscall+0x50/0x120
 => el0_svc_common.constprop.0+0x48/0xf0
 => do_el0_svc+0x24/0x38
 => el0_svc+0x30/0xf8
 => el0t_64_sync_handler+0x120/0x130
 => el0t_64_sync+0x190/0x198
    sshd-session-16754   [000] ..... 493929.660972: __arm64_sys_write+0x4/0x40 <-invoke_syscall+0x50/0x120
    sshd-session-16754   [000] ..... 493929.660975: <stack trace>
 => __arm64_sys_write+0x8/0x40
 => invoke_syscall+0x50/0x120
 => el0_svc_common.constprop.0+0x48/0xf0
 => do_el0_svc+0x24/0x38
 => el0_svc+0x30/0xf8
 => el0t_64_sync_handler+0x120/0x130
 => el0t_64_sync+0x190/0x198
    sshd-session-16754   [000] ..... 493929.684911: __arm64_sys_write+0x4/0x40 <-invoke_syscall+0x50/0x120
    sshd-session-16754   [000] ..... 493929.684914: <stack trace>
 => __arm64_sys_write+0x8/0x40
 => invoke_syscall+0x50/0x120
 => el0_svc_common.constprop.0+0x48/0xf0
 => do_el0_svc+0x24/0x38
 => el0_svc+0x30/0xf8
 => el0t_64_sync_handler+0x120/0x130
 => el0t_64_sync+0x190/0x198
    sshd-session-16754   [000] ..... 493929.706608: __arm64_sys_write+0x4/0x40 <-invoke_syscall+0x50/0x120
    sshd-session-16754   [000] ..... 493929.706612: <stack trace>
 => __arm64_sys_write+0x8/0x40
 => invoke_syscall+0x50/0x120
 => el0_svc_common.constprop.0+0x48/0xf0
 => do_el0_svc+0x24/0x38
 => el0_svc+0x30/0xf8
 => el0t_64_sync_handler+0x120/0x130
 => el0t_64_sync+0x190/0x198
    sshd-session-16754   [000] ..... 493929.732014: __arm64_sys_write+0x4/0x40 <-invoke_syscall+0x50/0x120
    sshd-session-16754   [000] ..... 493929.732017: <stack trace>
 => __arm64_sys_write+0x8/0x40
 => invoke_syscall+0x50/0x120
 => el0_svc_common.constprop.0+0x48/0xf0
 => do_el0_svc+0x24/0x38
 => el0_svc+0x30/0xf8
 => el0t_64_sync_handler+0x120/0x130
 => el0t_64_sync+0x190/0x198
    sshd-session-16754   [000] ..... 493929.752549: __arm64_sys_write+0x4/0x40 <-invoke_syscall+0x50/0x120
    sshd-session-16754   [000] ..... 493929.752552: <stack trace>
 => __arm64_sys_write+0x8/0x40
 => invoke_syscall+0x50/0x120
 => el0_svc_common.constprop.0+0x48/0xf0
 => do_el0_svc+0x24/0x38
 => el0_svc+0x30/0xf8
 => el0t_64_sync_handler+0x120/0x130
 => el0t_64_sync+0x190/0x198
    sshd-session-16754   [000] ..... 493929.848025: __arm64_sys_write+0x4/0x40 <-invoke_syscall+0x50/0x120
    sshd-session-16754   [000] ..... 493929.848029: <stack trace>
 => __arm64_sys_write+0x8/0x40
 => invoke_syscall+0x50/0x120
 => el0_svc_common.constprop.0+0x48/0xf0
 => do_el0_svc+0x24/0x38
 => el0_svc+0x30/0xf8
 => el0t_64_sync_handler+0x120/0x130
 => el0t_64_sync+0x190/0x198
    sshd-session-16754   [000] ..... 493929.873307: __arm64_sys_write+0x4/0x40 <-invoke_syscall+0x50/0x120
    sshd-session-16754   [000] ..... 493929.873310: <stack trace>
 => __arm64_sys_write+0x8/0x40
 => invoke_syscall+0x50/0x120
 => el0_svc_common.constprop.0+0x48/0xf0
 => do_el0_svc+0x24/0x38
 => el0_svc+0x30/0xf8
 => el0t_64_sync_handler+0x120/0x130
 => el0t_64_sync+0x190/0x198
    sshd-session-16754   [000] ..... 493929.893305: __arm64_sys_write+0x4/0x40 <-invoke_syscall+0x50/0x120
    sshd-session-16754   [000] ..... 493929.893309: <stack trace>
 => __arm64_sys_write+0x8/0x40
 => invoke_syscall+0x50/0x120
 => el0_svc_common.constprop.0+0x48/0xf0
 => do_el0_svc+0x24/0x38
 => el0_svc+0x30/0xf8
 => el0t_64_sync_handler+0x120/0x130
 => el0t_64_sync+0x190/0x198
    sshd-session-16754   [000] ..... 493929.915989: __arm64_sys_write+0x4/0x40 <-invoke_syscall+0x50/0x120
    sshd-session-16754   [000] ..... 493929.915993: <stack trace>
 => __arm64_sys_write+0x8/0x40
 => invoke_syscall+0x50/0x120
 => el0_svc_common.constprop.0+0x48/0xf0
 => do_el0_svc+0x24/0x38
 => el0_svc+0x30/0xf8
 => el0t_64_sync_handler+0x120/0x130
 => el0t_64_sync+0x190/0x198
    sshd-session-16754   [000] ..... 493929.940083: __arm64_sys_write+0x4/0x40 <-invoke_syscall+0x50/0x120
    sshd-session-16754   [000] ..... 493929.940086: <stack trace>
 => __arm64_sys_write+0x8/0x40
 => invoke_syscall+0x50/0x120
 => el0_svc_common.constprop.0+0x48/0xf0
 => do_el0_svc+0x24/0x38
 => el0_svc+0x30/0xf8
 => el0t_64_sync_handler+0x120/0x130
 => el0t_64_sync+0x190/0x198
    sshd-session-16754   [000] ..... 493929.962326: __arm64_sys_write+0x4/0x40 <-invoke_syscall+0x50/0x120
    sshd-session-16754   [000] ..... 493929.962330: <stack trace>
 => __arm64_sys_write+0x8/0x40
 => invoke_syscall+0x50/0x120
 => el0_svc_common.constprop.0+0x48/0xf0
 => do_el0_svc+0x24/0x38
 => el0_svc+0x30/0xf8
 => el0t_64_sync_handler+0x120/0x130
 => el0t_64_sync+0x190/0x198
    sshd-session-16754   [000] ..... 493929.983931: __arm64_sys_write+0x4/0x40 <-invoke_syscall+0x50/0x120
    sshd-session-16754   [000] ..... 493929.983935: <stack trace>
 => __arm64_sys_write+0x8/0x40
 => invoke_syscall+0x50/0x120
 => el0_svc_common.constprop.0+0x48/0xf0
 => do_el0_svc+0x24/0x38
 => el0_svc+0x30/0xf8
 => el0t_64_sync_handler+0x120/0x130
 => el0t_64_sync+0x190/0x198
    sshd-session-16754   [000] ..... 493930.003988: __arm64_sys_write+0x4/0x40 <-invoke_syscall+0x50/0x120
    sshd-session-16754   [000] ..... 493930.003992: <stack trace>
 => __arm64_sys_write+0x8/0x40
 => invoke_syscall+0x50/0x120
 => el0_svc_common.constprop.0+0x48/0xf0
 => do_el0_svc+0x24/0x38
 => el0_svc+0x30/0xf8
 => el0t_64_sync_handler+0x120/0x130
 => el0t_64_sync+0x190/0x198
            bash-16773   [003] ..... 493930.004127: __arm64_sys_write+0x4/0x40 <-invoke_syscall+0x50/0x120
            bash-16773   [003] ..... 493930.004131: <stack trace>
 => __arm64_sys_write+0x8/0x40
 => invoke_syscall+0x50/0x120
 => el0_svc_common.constprop.0+0x48/0xf0
 => do_el0_svc+0x24/0x38
 => el0_svc+0x30/0xf8
 => el0t_64_sync_handler+0x120/0x130
 => el0t_64_sync+0x190/0x198
    sshd-session-16754   [000] ..... 493930.004263: __arm64_sys_write+0x4/0x40 <-invoke_syscall+0x50/0x120
    sshd-session-16754   [000] ..... 493930.004266: <stack trace>
 => __arm64_sys_write+0x8/0x40
 => invoke_syscall+0x50/0x120
 => el0_svc_common.constprop.0+0x48/0xf0
 => do_el0_svc+0x24/0x38
 => el0_svc+0x30/0xf8
 => el0t_64_sync_handler+0x120/0x130
 => el0t_64_sync+0x190/0x198
    sshd-session-16754   [000] ..... 493930.026708: __arm64_sys_write+0x4/0x40 <-invoke_syscall+0x50/0x120
    sshd-session-16754   [000] ..... 493930.026712: <stack trace>
 => __arm64_sys_write+0x8/0x40
 => invoke_syscall+0x50/0x120
 => el0_svc_common.constprop.0+0x48/0xf0
 => do_el0_svc+0x24/0x38
 => el0_svc+0x30/0xf8
 => el0t_64_sync_handler+0x120/0x130
 => el0t_64_sync+0x190/0x198
    sshd-session-16754   [000] ..... 493930.050873: __arm64_sys_write+0x4/0x40 <-invoke_syscall+0x50/0x120
    sshd-session-16754   [000] ..... 493930.050876: <stack trace>
 => __arm64_sys_write+0x8/0x40
 => invoke_syscall+0x50/0x120
 => el0_svc_common.constprop.0+0x48/0xf0
 => do_el0_svc+0x24/0x38
 => el0_svc+0x30/0xf8
 => el0t_64_sync_handler+0x120/0x130
 => el0t_64_sync+0x190/0x198
    sshd-session-16754   [000] ..... 493930.081741: __arm64_sys_write+0x4/0x40 <-invoke_syscall+0x50/0x120
    sshd-session-16754   [000] ..... 493930.081745: <stack trace>
 => __arm64_sys_write+0x8/0x40
 => invoke_syscall+0x50/0x120
 => el0_svc_common.constprop.0+0x48/0xf0
 => do_el0_svc+0x24/0x38
 => el0_svc+0x30/0xf8
 => el0t_64_sync_handler+0x120/0x130
 => el0t_64_sync+0x190/0x198
    sshd-session-16754   [000] ..... 493930.095238: __arm64_sys_write+0x4/0x40 <-invoke_syscall+0x50/0x120
    sshd-session-16754   [000] ..... 493930.095241: <stack trace>
 => __arm64_sys_write+0x8/0x40
 => invoke_syscall+0x50/0x120
 => el0_svc_common.constprop.0+0x48/0xf0
 => do_el0_svc+0x24/0x38
 => el0_svc+0x30/0xf8
 => el0t_64_sync_handler+0x120/0x130
 => el0t_64_sync+0x190/0x198
    sshd-session-16754   [000] ..... 493930.118630: __arm64_sys_write+0x4/0x40 <-invoke_syscall+0x50/0x120
    sshd-session-16754   [000] ..... 493930.118633: <stack trace>
 => __arm64_sys_write+0x8/0x40
 => invoke_syscall+0x50/0x120
 => el0_svc_common.constprop.0+0x48/0xf0
 => do_el0_svc+0x24/0x38
 => el0_svc+0x30/0xf8
 => el0t_64_sync_handler+0x120/0x130
 => el0t_64_sync+0x190/0x198
            bash-16773   [003] ..... 493930.118726: __arm64_sys_write+0x4/0x40 <-invoke_syscall+0x50/0x120
            bash-16773   [003] ..... 493930.118729: <stack trace>
 => __arm64_sys_write+0x8/0x40
 => invoke_syscall+0x50/0x120
 => el0_svc_common.constprop.0+0x48/0xf0
 => do_el0_svc+0x24/0x38
 => el0_svc+0x30/0xf8
 => el0t_64_sync_handler+0x120/0x130
 => el0t_64_sync+0x190/0x198
    sshd-session-16754   [000] ..... 493930.118856: __arm64_sys_write+0x4/0x40 <-invoke_syscall+0x50/0x120
    sshd-session-16754   [000] ..... 493930.118859: <stack trace>
 => __arm64_sys_write+0x8/0x40
 => invoke_syscall+0x50/0x120
 => el0_svc_common.constprop.0+0x48/0xf0
 => do_el0_svc+0x24/0x38
 => el0_svc+0x30/0xf8
 => el0t_64_sync_handler+0x120/0x130
 => el0t_64_sync+0x190/0x198
    sshd-session-16754   [000] ..... 493930.143419: __arm64_sys_write+0x4/0x40 <-invoke_syscall+0x50/0x120
    sshd-session-16754   [000] ..... 493930.143422: <stack trace>
 => __arm64_sys_write+0x8/0x40
 => invoke_syscall+0x50/0x120
 => el0_svc_common.constprop.0+0x48/0xf0
 => do_el0_svc+0x24/0x38
 => el0_svc+0x30/0xf8
 => el0t_64_sync_handler+0x120/0x130
 => el0t_64_sync+0x190/0x198
    sshd-session-16754   [000] ..... 493930.161191: __arm64_sys_write+0x4/0x40 <-invoke_syscall+0x50/0x120
    sshd-session-16754   [000] ..... 493930.161194: <stack trace>
 => __arm64_sys_write+0x8/0x40
 => invoke_syscall+0x50/0x120
 => el0_svc_common.constprop.0+0x48/0xf0
 => do_el0_svc+0x24/0x38
 => el0_svc+0x30/0xf8
 => el0t_64_sync_handler+0x120/0x130
 => el0t_64_sync+0x190/0x198
    sshd-session-16754   [000] ..... 493930.185217: __arm64_sys_write+0x4/0x40 <-invoke_syscall+0x50/0x120
    sshd-session-16754   [000] ..... 493930.185221: <stack trace>
 => __arm64_sys_write+0x8/0x40
 => invoke_syscall+0x50/0x120
 => el0_svc_common.constprop.0+0x48/0xf0
 => do_el0_svc+0x24/0x38
 => el0_svc+0x30/0xf8
 => el0t_64_sync_handler+0x120/0x130
 => el0t_64_sync+0x190/0x198
    sshd-session-16754   [000] ..... 493930.209796: __arm64_sys_write+0x4/0x40 <-invoke_syscall+0x50/0x120
    sshd-session-16754   [000] ..... 493930.209800: <stack trace>
 => __arm64_sys_write+0x8/0x40
 => invoke_syscall+0x50/0x120
 => el0_svc_common.constprop.0+0x48/0xf0
 => do_el0_svc+0x24/0x38
 => el0_svc+0x30/0xf8
 => el0t_64_sync_handler+0x120/0x130
 => el0t_64_sync+0x190/0x198
    sshd-session-16754   [000] ..... 493930.233261: __arm64_sys_write+0x4/0x40 <-invoke_syscall+0x50/0x120
    sshd-session-16754   [000] ..... 493930.233265: <stack trace>
 => __arm64_sys_write+0x8/0x40
 => invoke_syscall+0x50/0x120
 => el0_svc_common.constprop.0+0x48/0xf0
 => do_el0_svc+0x24/0x38
 => el0_svc+0x30/0xf8
 => el0t_64_sync_handler+0x120/0x130
 => el0t_64_sync+0x190/0x198
    sshd-session-16754   [000] ..... 493930.256234: __arm64_sys_write+0x4/0x40 <-invoke_syscall+0x50/0x120
    sshd-session-16754   [000] ..... 493930.256238: <stack trace>
 => __arm64_sys_write+0x8/0x40
 => invoke_syscall+0x50/0x120
 => el0_svc_common.constprop.0+0x48/0xf0
 => do_el0_svc+0x24/0x38
 => el0_svc+0x30/0xf8
 => el0t_64_sync_handler+0x120/0x130
 => el0t_64_sync+0x190/0x198
    sshd-session-16754   [000] ..... 493930.371488: __arm64_sys_write+0x4/0x40 <-invoke_syscall+0x50/0x120
    sshd-session-16754   [000] ..... 493930.371491: <stack trace>
 => __arm64_sys_write+0x8/0x40
 => invoke_syscall+0x50/0x120
 => el0_svc_common.constprop.0+0x48/0xf0
 => do_el0_svc+0x24/0x38
 => el0_svc+0x30/0xf8
 => el0t_64_sync_handler+0x120/0x130
 => el0t_64_sync+0x190/0x198
    sshd-session-16754   [000] ..... 493930.371782: __arm64_sys_write+0x4/0x40 <-invoke_syscall+0x50/0x120
    sshd-session-16754   [000] ..... 493930.371785: <stack trace>
 => __arm64_sys_write+0x8/0x40
 => invoke_syscall+0x50/0x120
 => el0_svc_common.constprop.0+0x48/0xf0
 => do_el0_svc+0x24/0x38
 => el0_svc+0x30/0xf8
 => el0t_64_sync_handler+0x120/0x130
 => el0t_64_sync+0x190/0x198
    sshd-session-16754   [000] ..... 493930.371810: __arm64_sys_write+0x4/0x40 <-invoke_syscall+0x50/0x120
    sshd-session-16754   [000] ..... 493930.371812: <stack trace>
 => __arm64_sys_write+0x8/0x40
 => invoke_syscall+0x50/0x120
 => el0_svc_common.constprop.0+0x48/0xf0
 => do_el0_svc+0x24/0x38
 => el0_svc+0x30/0xf8
 => el0t_64_sync_handler+0x120/0x130
 => el0t_64_sync+0x190/0x198
            bash-16773   [003] ..... 493930.371963: __arm64_sys_write+0x4/0x40 <-invoke_syscall+0x50/0x120
            bash-16773   [003] ..... 493930.371966: <stack trace>
 => __arm64_sys_write+0x8/0x40
 => invoke_syscall+0x50/0x120
 => el0_svc_common.constprop.0+0x48/0xf0
 => do_el0_svc+0x24/0x38
 => el0_svc+0x30/0xf8
 => el0t_64_sync_handler+0x120/0x130
 => el0t_64_sync+0x190/0x198
    sshd-session-16754   [000] ..... 493930.372093: __arm64_sys_write+0x4/0x40 <-invoke_syscall+0x50/0x120
    sshd-session-16754   [000] ..... 493930.372096: <stack trace>
 => __arm64_sys_write+0x8/0x40
 => invoke_syscall+0x50/0x120
 => el0_svc_common.constprop.0+0x48/0xf0
 => do_el0_svc+0x24/0x38
 => el0_svc+0x30/0xf8
 => el0t_64_sync_handler+0x120/0x130
 => el0t_64_sync+0x190/0x198
    sshd-session-16754   [000] ..... 493930.373961: __arm64_sys_write+0x4/0x40 <-invoke_syscall+0x50/0x120
    sshd-session-16754   [000] ..... 493930.373965: <stack trace>
 => __arm64_sys_write+0x8/0x40
 => invoke_syscall+0x50/0x120
 => el0_svc_common.constprop.0+0x48/0xf0
 => do_el0_svc+0x24/0x38
 => el0_svc+0x30/0xf8
 => el0t_64_sync_handler+0x120/0x130
 => el0t_64_sync+0x190/0x198
    sshd-session-16754   [000] ..... 493930.396630: __arm64_sys_write+0x4/0x40 <-invoke_syscall+0x50/0x120
    sshd-session-16754   [000] ..... 493930.396634: <stack trace>
 => __arm64_sys_write+0x8/0x40
 => invoke_syscall+0x50/0x120
 => el0_svc_common.constprop.0+0x48/0xf0
 => do_el0_svc+0x24/0x38
 => el0_svc+0x30/0xf8
 => el0t_64_sync_handler+0x120/0x130
 => el0t_64_sync+0x190/0x198
    sshd-session-16754   [000] ..... 493930.420495: __arm64_sys_write+0x4/0x40 <-invoke_syscall+0x50/0x120
    sshd-session-16754   [000] ..... 493930.420499: <stack trace>
 => __arm64_sys_write+0x8/0x40
 => invoke_syscall+0x50/0x120
 => el0_svc_common.constprop.0+0x48/0xf0
 => do_el0_svc+0x24/0x38
 => el0_svc+0x30/0xf8
 => el0t_64_sync_handler+0x120/0x130
 => el0t_64_sync+0x190/0x198
    sshd-session-16754   [000] ..... 493930.443969: __arm64_sys_write+0x4/0x40 <-invoke_syscall+0x50/0x120
    sshd-session-16754   [000] ..... 493930.443973: <stack trace>
 => __arm64_sys_write+0x8/0x40
 => invoke_syscall+0x50/0x120
 => el0_svc_common.constprop.0+0x48/0xf0
 => do_el0_svc+0x24/0x38
 => el0_svc+0x30/0xf8
 => el0t_64_sync_handler+0x120/0x130
 => el0t_64_sync+0x190/0x198
    sshd-session-16754   [000] ..... 493930.465372: __arm64_sys_write+0x4/0x40 <-invoke_syscall+0x50/0x120
    sshd-session-16754   [000] ..... 493930.465376: <stack trace>
 => __arm64_sys_write+0x8/0x40
 => invoke_syscall+0x50/0x120
 => el0_svc_common.constprop.0+0x48/0xf0
 => do_el0_svc+0x24/0x38
 => el0_svc+0x30/0xf8
 => el0t_64_sync_handler+0x120/0x130
 => el0t_64_sync+0x190/0x198
    sshd-session-16754   [000] ..... 493930.490015: __arm64_sys_write+0x4/0x40 <-invoke_syscall+0x50/0x120
    sshd-session-16754   [000] ..... 493930.490018: <stack trace>
 => __arm64_sys_write+0x8/0x40
 => invoke_syscall+0x50/0x120
 => el0_svc_common.constprop.0+0x48/0xf0
 => do_el0_svc+0x24/0x38
 => el0_svc+0x30/0xf8
 => el0t_64_sync_handler+0x120/0x130
 => el0t_64_sync+0x190/0x198
    sshd-session-16754   [000] ..... 493930.513350: __arm64_sys_write+0x4/0x40 <-invoke_syscall+0x50/0x120
    sshd-session-16754   [000] ..... 493930.513353: <stack trace>
 => __arm64_sys_write+0x8/0x40
 => invoke_syscall+0x50/0x120
 => el0_svc_common.constprop.0+0x48/0xf0
 => do_el0_svc+0x24/0x38
 => el0_svc+0x30/0xf8
 => el0t_64_sync_handler+0x120/0x130
 => el0t_64_sync+0x190/0x198
    sshd-session-16754   [000] ..... 493930.536397: __arm64_sys_write+0x4/0x40 <-invoke_syscall+0x50/0x120
    sshd-session-16754   [000] ..... 493930.536401: <stack trace>
 => __arm64_sys_write+0x8/0x40
 => invoke_syscall+0x50/0x120
 => el0_svc_common.constprop.0+0x48/0xf0
 => do_el0_svc+0x24/0x38
 => el0_svc+0x30/0xf8
 => el0t_64_sync_handler+0x120/0x130
 => el0t_64_sync+0x190/0x198
    sshd-session-16754   [000] ..... 493930.559359: __arm64_sys_write+0x4/0x40 <-invoke_syscall+0x50/0x120
    sshd-session-16754   [000] ..... 493930.559365: <stack trace>
 => __arm64_sys_write+0x8/0x40
 => invoke_syscall+0x50/0x120
 => el0_svc_common.constprop.0+0x48/0xf0
 => do_el0_svc+0x24/0x38
 => el0_svc+0x30/0xf8
 => el0t_64_sync_handler+0x120/0x130
 => el0t_64_sync+0x190/0x198
            bash-16773   [003] ..... 493930.559458: __arm64_sys_write+0x4/0x40 <-invoke_syscall+0x50/0x120
            bash-16773   [003] ..... 493930.559461: <stack trace>
 => __arm64_sys_write+0x8/0x40
 => invoke_syscall+0x50/0x120
 => el0_svc_common.constprop.0+0x48/0xf0
 => do_el0_svc+0x24/0x38
 => el0_svc+0x30/0xf8
 => el0t_64_sync_handler+0x120/0x130
 => el0t_64_sync+0x190/0x198
    sshd-session-16754   [000] ..... 493930.559586: __arm64_sys_write+0x4/0x40 <-invoke_syscall+0x50/0x120
    sshd-session-16754   [000] ..... 493930.559589: <stack trace>
 => __arm64_sys_write+0x8/0x40
 => invoke_syscall+0x50/0x120
 => el0_svc_common.constprop.0+0x48/0xf0
 => do_el0_svc+0x24/0x38
 => el0_svc+0x30/0xf8
 => el0t_64_sync_handler+0x120/0x130
 => el0t_64_sync+0x190/0x198
    sshd-session-16754   [000] ..... 493930.589500: __arm64_sys_write+0x4/0x40 <-invoke_syscall+0x50/0x120
    sshd-session-16754   [000] ..... 493930.589504: <stack trace>
 => __arm64_sys_write+0x8/0x40
 => invoke_syscall+0x50/0x120
 => el0_svc_common.constprop.0+0x48/0xf0
 => do_el0_svc+0x24/0x38
 => el0_svc+0x30/0xf8
 => el0t_64_sync_handler+0x120/0x130
 => el0t_64_sync+0x190/0x198
    sshd-session-16754   [000] ..... 493930.606211: __arm64_sys_write+0x4/0x40 <-invoke_syscall+0x50/0x120
    sshd-session-16754   [000] ..... 493930.606214: <stack trace>
 => __arm64_sys_write+0x8/0x40
 => invoke_syscall+0x50/0x120
 => el0_svc_common.constprop.0+0x48/0xf0
 => do_el0_svc+0x24/0x38
 => el0_svc+0x30/0xf8
 => el0t_64_sync_handler+0x120/0x130
 => el0t_64_sync+0x190/0x198
    sshd-session-16754   [000] ..... 493930.628191: __arm64_sys_write+0x4/0x40 <-invoke_syscall+0x50/0x120
    sshd-session-16754   [000] ..... 493930.628195: <stack trace>
 => __arm64_sys_write+0x8/0x40
 => invoke_syscall+0x50/0x120
 => el0_svc_common.constprop.0+0x48/0xf0
 => do_el0_svc+0x24/0x38
 => el0_svc+0x30/0xf8
 => el0t_64_sync_handler+0x120/0x130
 => el0t_64_sync+0x190/0x198
            bash-16773   [003] ..... 493930.628307: __arm64_sys_write+0x4/0x40 <-invoke_syscall+0x50/0x120
            bash-16773   [003] ..... 493930.628310: <stack trace>
 => __arm64_sys_write+0x8/0x40
 => invoke_syscall+0x50/0x120
 => el0_svc_common.constprop.0+0x48/0xf0
 => do_el0_svc+0x24/0x38
 => el0_svc+0x30/0xf8
 => el0t_64_sync_handler+0x120/0x130
 => el0t_64_sync+0x190/0x198
    sshd-session-16754   [000] ..... 493930.628434: __arm64_sys_write+0x4/0x40 <-invoke_syscall+0x50/0x120
    sshd-session-16754   [000] ..... 493930.628437: <stack trace>
 => __arm64_sys_write+0x8/0x40
 => invoke_syscall+0x50/0x120
 => el0_svc_common.constprop.0+0x48/0xf0
 => do_el0_svc+0x24/0x38
 => el0_svc+0x30/0xf8
 => el0t_64_sync_handler+0x120/0x130
 => el0t_64_sync+0x190/0x198
    sshd-session-16754   [000] ..... 493930.656827: __arm64_sys_write+0x4/0x40 <-invoke_syscall+0x50/0x120
    sshd-session-16754   [000] ..... 493930.656831: <stack trace>
 => __arm64_sys_write+0x8/0x40
 => invoke_syscall+0x50/0x120
 => el0_svc_common.constprop.0+0x48/0xf0
 => do_el0_svc+0x24/0x38
 => el0_svc+0x30/0xf8
 => el0t_64_sync_handler+0x120/0x130
 => el0t_64_sync+0x190/0x198
    sshd-session-16754   [000] ..... 493930.674662: __arm64_sys_write+0x4/0x40 <-invoke_syscall+0x50/0x120
    sshd-session-16754   [000] ..... 493930.674665: <stack trace>
 => __arm64_sys_write+0x8/0x40
 => invoke_syscall+0x50/0x120
 => el0_svc_common.constprop.0+0x48/0xf0
 => do_el0_svc+0x24/0x38
 => el0_svc+0x30/0xf8
 => el0t_64_sync_handler+0x120/0x130
 => el0t_64_sync+0x190/0x198
    sshd-session-16754   [000] ..... 493930.697891: __arm64_sys_write+0x4/0x40 <-invoke_syscall+0x50/0x120
    sshd-session-16754   [000] ..... 493930.697894: <stack trace>
 => __arm64_sys_write+0x8/0x40
 => invoke_syscall+0x50/0x120
 => el0_svc_common.constprop.0+0x48/0xf0
 => do_el0_svc+0x24/0x38
 => el0_svc+0x30/0xf8
 => el0t_64_sync_handler+0x120/0x130
 => el0t_64_sync+0x190/0x198
    sshd-session-16754   [000] ..... 493930.720976: __arm64_sys_write+0x4/0x40 <-invoke_syscall+0x50/0x120
    sshd-session-16754   [000] ..... 493930.720980: <stack trace>
 => __arm64_sys_write+0x8/0x40
 => invoke_syscall+0x50/0x120
 => el0_svc_common.constprop.0+0x48/0xf0
 => do_el0_svc+0x24/0x38
 => el0_svc+0x30/0xf8
 => el0t_64_sync_handler+0x120/0x130
 => el0t_64_sync+0x190/0x198
    sshd-session-16754   [000] ..... 493930.744971: __arm64_sys_write+0x4/0x40 <-invoke_syscall+0x50/0x120
    sshd-session-16754   [000] ..... 493930.744974: <stack trace>
 => __arm64_sys_write+0x8/0x40
 => invoke_syscall+0x50/0x120
 => el0_svc_common.constprop.0+0x48/0xf0
 => do_el0_svc+0x24/0x38
 => el0_svc+0x30/0xf8
 => el0t_64_sync_handler+0x120/0x130
 => el0t_64_sync+0x190/0x198
    sshd-session-16754   [000] ..... 493930.769419: __arm64_sys_write+0x4/0x40 <-invoke_syscall+0x50/0x120
    sshd-session-16754   [000] ..... 493930.769423: <stack trace>
 => __arm64_sys_write+0x8/0x40
 => invoke_syscall+0x50/0x120
 => el0_svc_common.constprop.0+0x48/0xf0
 => do_el0_svc+0x24/0x38
 => el0_svc+0x30/0xf8
 => el0t_64_sync_handler+0x120/0x130
 => el0t_64_sync+0x190/0x198
    sshd-session-16754   [000] ..... 493930.799407: __arm64_sys_write+0x4/0x40 <-invoke_syscall+0x50/0x120
    sshd-session-16754   [000] ..... 493930.799411: <stack trace>
 => __arm64_sys_write+0x8/0x40
 => invoke_syscall+0x50/0x120
 => el0_svc_common.constprop.0+0x48/0xf0
 => do_el0_svc+0x24/0x38
 => el0_svc+0x30/0xf8
 => el0t_64_sync_handler+0x120/0x130
 => el0t_64_sync+0x190/0x198
    sshd-session-16754   [000] ..... 493930.893987: __arm64_sys_write+0x4/0x40 <-invoke_syscall+0x50/0x120
    sshd-session-16754   [000] ..... 493930.893991: <stack trace>
 => __arm64_sys_write+0x8/0x40
 => invoke_syscall+0x50/0x120
 => el0_svc_common.constprop.0+0x48/0xf0
 => do_el0_svc+0x24/0x38
 => el0_svc+0x30/0xf8
 => el0t_64_sync_handler+0x120/0x130
 => el0t_64_sync+0x190/0x198
    sshd-session-16754   [000] ..... 493930.914121: __arm64_sys_write+0x4/0x40 <-invoke_syscall+0x50/0x120
    sshd-session-16754   [000] ..... 493930.914124: <stack trace>
 => __arm64_sys_write+0x8/0x40
 => invoke_syscall+0x50/0x120
 => el0_svc_common.constprop.0+0x48/0xf0
 => do_el0_svc+0x24/0x38
 => el0_svc+0x30/0xf8
 => el0t_64_sync_handler+0x120/0x130
 => el0t_64_sync+0x190/0x198
    sshd-session-16754   [000] ..... 493930.936649: __arm64_sys_write+0x4/0x40 <-invoke_syscall+0x50/0x120
    sshd-session-16754   [000] ..... 493930.936653: <stack trace>
 => __arm64_sys_write+0x8/0x40
 => invoke_syscall+0x50/0x120
 => el0_svc_common.constprop.0+0x48/0xf0
 => do_el0_svc+0x24/0x38
 => el0_svc+0x30/0xf8
 => el0t_64_sync_handler+0x120/0x130
 => el0t_64_sync+0x190/0x198
    sshd-session-16754   [000] ..... 493930.961295: __arm64_sys_write+0x4/0x40 <-invoke_syscall+0x50/0x120
    sshd-session-16754   [000] ..... 493930.961298: <stack trace>
 => __arm64_sys_write+0x8/0x40
 => invoke_syscall+0x50/0x120
 => el0_svc_common.constprop.0+0x48/0xf0
 => do_el0_svc+0x24/0x38
 => el0_svc+0x30/0xf8
 => el0t_64_sync_handler+0x120/0x130
 => el0t_64_sync+0x190/0x198
    sshd-session-16754   [000] ..... 493930.983531: __arm64_sys_write+0x4/0x40 <-invoke_syscall+0x50/0x120
    sshd-session-16754   [000] ..... 493930.983535: <stack trace>
 => __arm64_sys_write+0x8/0x40
 => invoke_syscall+0x50/0x120
 => el0_svc_common.constprop.0+0x48/0xf0
 => do_el0_svc+0x24/0x38
 => el0_svc+0x30/0xf8
 => el0t_64_sync_handler+0x120/0x130
 => el0t_64_sync+0x190/0x198
    sshd-session-16754   [000] ..... 493931.007798: __arm64_sys_write+0x4/0x40 <-invoke_syscall+0x50/0x120
    sshd-session-16754   [000] ..... 493931.007801: <stack trace>
 => __arm64_sys_write+0x8/0x40
 => invoke_syscall+0x50/0x120
 => el0_svc_common.constprop.0+0x48/0xf0
 => do_el0_svc+0x24/0x38
 => el0_svc+0x30/0xf8
 => el0t_64_sync_handler+0x120/0x130
 => el0t_64_sync+0x190/0x198
    sshd-session-16754   [000] ..... 493931.031330: __arm64_sys_write+0x4/0x40 <-invoke_syscall+0x50/0x120
    sshd-session-16754   [000] ..... 493931.031334: <stack trace>
 => __arm64_sys_write+0x8/0x40
 => invoke_syscall+0x50/0x120
 => el0_svc_common.constprop.0+0x48/0xf0
 => do_el0_svc+0x24/0x38
 => el0_svc+0x30/0xf8
 => el0t_64_sync_handler+0x120/0x130
 => el0t_64_sync+0x190/0x198
    sshd-session-16754   [002] ..... 493931.055856: __arm64_sys_write+0x4/0x40 <-invoke_syscall+0x50/0x120
    sshd-session-16754   [002] ..... 493931.055860: <stack trace>
 => __arm64_sys_write+0x8/0x40
 => invoke_syscall+0x50/0x120
 => el0_svc_common.constprop.0+0x48/0xf0
 => do_el0_svc+0x24/0x38
 => el0_svc+0x30/0xf8
 => el0t_64_sync_handler+0x120/0x130
 => el0t_64_sync+0x190/0x198
    sshd-session-16754   [002] ..... 493931.079739: __arm64_sys_write+0x4/0x40 <-invoke_syscall+0x50/0x120
    sshd-session-16754   [002] ..... 493931.079743: <stack trace>
 => __arm64_sys_write+0x8/0x40
 => invoke_syscall+0x50/0x120
 => el0_svc_common.constprop.0+0x48/0xf0
 => do_el0_svc+0x24/0x38
 => el0_svc+0x30/0xf8
 => el0t_64_sync_handler+0x120/0x130
 => el0t_64_sync+0x190/0x198
    sshd-session-16754   [002] ..... 493931.102876: __arm64_sys_write+0x4/0x40 <-invoke_syscall+0x50/0x120
    sshd-session-16754   [002] ..... 493931.102880: <stack trace>
 => __arm64_sys_write+0x8/0x40
 => invoke_syscall+0x50/0x120
 => el0_svc_common.constprop.0+0x48/0xf0
 => do_el0_svc+0x24/0x38
 => el0_svc+0x30/0xf8
 => el0t_64_sync_handler+0x120/0x130
 => el0t_64_sync+0x190/0x198
    sshd-session-16754   [002] ..... 493931.126269: __arm64_sys_write+0x4/0x40 <-invoke_syscall+0x50/0x120
    sshd-session-16754   [002] ..... 493931.126273: <stack trace>
 => __arm64_sys_write+0x8/0x40
 => invoke_syscall+0x50/0x120
 => el0_svc_common.constprop.0+0x48/0xf0
 => do_el0_svc+0x24/0x38
 => el0_svc+0x30/0xf8
 => el0t_64_sync_handler+0x120/0x130
 => el0t_64_sync+0x190/0x198
    sshd-session-16754   [002] ..... 493931.150997: __arm64_sys_write+0x4/0x40 <-invoke_syscall+0x50/0x120
    sshd-session-16754   [002] ..... 493931.151000: <stack trace>
 => __arm64_sys_write+0x8/0x40
 => invoke_syscall+0x50/0x120
 => el0_svc_common.constprop.0+0x48/0xf0
 => do_el0_svc+0x24/0x38
 => el0_svc+0x30/0xf8
 => el0t_64_sync_handler+0x120/0x130
 => el0t_64_sync+0x190/0x198
    sshd-session-16754   [002] ..... 493931.173582: __arm64_sys_write+0x4/0x40 <-invoke_syscall+0x50/0x120
    sshd-session-16754   [002] ..... 493931.173585: <stack trace>
 => __arm64_sys_write+0x8/0x40
 => invoke_syscall+0x50/0x120
 => el0_svc_common.constprop.0+0x48/0xf0
 => do_el0_svc+0x24/0x38
 => el0_svc+0x30/0xf8
 => el0t_64_sync_handler+0x120/0x130
 => el0t_64_sync+0x190/0x198
    sshd-session-16754   [002] ..... 493931.197580: __arm64_sys_write+0x4/0x40 <-invoke_syscall+0x50/0x120
    sshd-session-16754   [002] ..... 493931.197583: <stack trace>
 => __arm64_sys_write+0x8/0x40
 => invoke_syscall+0x50/0x120
 => el0_svc_common.constprop.0+0x48/0xf0
 => do_el0_svc+0x24/0x38
 => el0_svc+0x30/0xf8
 => el0t_64_sync_handler+0x120/0x130
 => el0t_64_sync+0x190/0x198
    sshd-session-16754   [002] ..... 493931.222046: __arm64_sys_write+0x4/0x40 <-invoke_syscall+0x50/0x120
    sshd-session-16754   [002] ..... 493931.222049: <stack trace>
 => __arm64_sys_write+0x8/0x40
 => invoke_syscall+0x50/0x120
 => el0_svc_common.constprop.0+0x48/0xf0
 => do_el0_svc+0x24/0x38
 => el0_svc+0x30/0xf8
 => el0t_64_sync_handler+0x120/0x130
 => el0t_64_sync+0x190/0x198
    sshd-session-16754   [002] ..... 493931.245071: __arm64_sys_write+0x4/0x40 <-invoke_syscall+0x50/0x120
    sshd-session-16754   [002] ..... 493931.245075: <stack trace>
 => __arm64_sys_write+0x8/0x40
 => invoke_syscall+0x50/0x120
 => el0_svc_common.constprop.0+0x48/0xf0
 => do_el0_svc+0x24/0x38
 => el0_svc+0x30/0xf8
 => el0t_64_sync_handler+0x120/0x130
 => el0t_64_sync+0x190/0x198
    sshd-session-16754   [002] ..... 493931.272070: __arm64_sys_write+0x4/0x40 <-invoke_syscall+0x50/0x120
    sshd-session-16754   [002] ..... 493931.272074: <stack trace>
 => __arm64_sys_write+0x8/0x40
 => invoke_syscall+0x50/0x120
 => el0_svc_common.constprop.0+0x48/0xf0
 => do_el0_svc+0x24/0x38
 => el0_svc+0x30/0xf8
 => el0t_64_sync_handler+0x120/0x130
 => el0t_64_sync+0x190/0x198
    sshd-session-16754   [002] ..... 493931.292928: __arm64_sys_write+0x4/0x40 <-invoke_syscall+0x50/0x120
    sshd-session-16754   [002] ..... 493931.292932: <stack trace>
 => __arm64_sys_write+0x8/0x40
 => invoke_syscall+0x50/0x120
 => el0_svc_common.constprop.0+0x48/0xf0
 => do_el0_svc+0x24/0x38
 => el0_svc+0x30/0xf8
 => el0t_64_sync_handler+0x120/0x130
 => el0t_64_sync+0x190/0x198
    sshd-session-16754   [000] ..... 493931.316025: __arm64_sys_write+0x4/0x40 <-invoke_syscall+0x50/0x120
    sshd-session-16754   [000] ..... 493931.316028: <stack trace>
 => __arm64_sys_write+0x8/0x40
 => invoke_syscall+0x50/0x120
 => el0_svc_common.constprop.0+0x48/0xf0
 => do_el0_svc+0x24/0x38
 => el0_svc+0x30/0xf8
 => el0t_64_sync_handler+0x120/0x130
 => el0t_64_sync+0x190/0x198
    sshd-session-16754   [000] ..... 493931.420050: __arm64_sys_write+0x4/0x40 <-invoke_syscall+0x50/0x120
    sshd-session-16754   [000] ..... 493931.420053: <stack trace>
 => __arm64_sys_write+0x8/0x40
 => invoke_syscall+0x50/0x120
 => el0_svc_common.constprop.0+0x48/0xf0
 => do_el0_svc+0x24/0x38
 => el0_svc+0x30/0xf8
 => el0t_64_sync_handler+0x120/0x130
 => el0t_64_sync+0x190/0x198
    sshd-session-16754   [000] ..... 493931.439999: __arm64_sys_write+0x4/0x40 <-invoke_syscall+0x50/0x120
    sshd-session-16754   [000] ..... 493931.440003: <stack trace>
 => __arm64_sys_write+0x8/0x40
 => invoke_syscall+0x50/0x120
 => el0_svc_common.constprop.0+0x48/0xf0
 => do_el0_svc+0x24/0x38
 => el0_svc+0x30/0xf8
 => el0t_64_sync_handler+0x120/0x130
 => el0t_64_sync+0x190/0x198
    sshd-session-16754   [000] ..... 493931.463487: __arm64_sys_write+0x4/0x40 <-invoke_syscall+0x50/0x120
    sshd-session-16754   [000] ..... 493931.463491: <stack trace>
 => __arm64_sys_write+0x8/0x40
 => invoke_syscall+0x50/0x120
 => el0_svc_common.constprop.0+0x48/0xf0
 => do_el0_svc+0x24/0x38
 => el0_svc+0x30/0xf8
 => el0t_64_sync_handler+0x120/0x130
 => el0t_64_sync+0x190/0x198
    sshd-session-16754   [000] ..... 493931.486971: __arm64_sys_write+0x4/0x40 <-invoke_syscall+0x50/0x120
    sshd-session-16754   [000] ..... 493931.486975: <stack trace>
 => __arm64_sys_write+0x8/0x40
 => invoke_syscall+0x50/0x120
 => el0_svc_common.constprop.0+0x48/0xf0
 => do_el0_svc+0x24/0x38
 => el0_svc+0x30/0xf8
 => el0t_64_sync_handler+0x120/0x130
 => el0t_64_sync+0x190/0x198
    sshd-session-16754   [000] ..... 493931.511200: __arm64_sys_write+0x4/0x40 <-invoke_syscall+0x50/0x120
    sshd-session-16754   [000] ..... 493931.511203: <stack trace>
 => __arm64_sys_write+0x8/0x40
 => invoke_syscall+0x50/0x120
 => el0_svc_common.constprop.0+0x48/0xf0
 => do_el0_svc+0x24/0x38
 => el0_svc+0x30/0xf8
 => el0t_64_sync_handler+0x120/0x130
 => el0t_64_sync+0x190/0x198
    sshd-session-16754   [000] ..... 493931.534239: __arm64_sys_write+0x4/0x40 <-invoke_syscall+0x50/0x120
    sshd-session-16754   [000] ..... 493931.534243: <stack trace>
 => __arm64_sys_write+0x8/0x40
 => invoke_syscall+0x50/0x120
 => el0_svc_common.constprop.0+0x48/0xf0
 => do_el0_svc+0x24/0x38
 => el0_svc+0x30/0xf8
 => el0t_64_sync_handler+0x120/0x130
 => el0t_64_sync+0x190/0x198
    sshd-session-16754   [000] ..... 493931.557019: __arm64_sys_write+0x4/0x40 <-invoke_syscall+0x50/0x120
    sshd-session-16754   [000] ..... 493931.557022: <stack trace>
 => __arm64_sys_write+0x8/0x40
 => invoke_syscall+0x50/0x120
 => el0_svc_common.constprop.0+0x48/0xf0
 => do_el0_svc+0x24/0x38
 => el0_svc+0x30/0xf8
 => el0t_64_sync_handler+0x120/0x130
 => el0t_64_sync+0x190/0x198
    sshd-session-16754   [000] ..... 493931.581182: __arm64_sys_write+0x4/0x40 <-invoke_syscall+0x50/0x120
    sshd-session-16754   [000] ..... 493931.581185: <stack trace>
 => __arm64_sys_write+0x8/0x40
 => invoke_syscall+0x50/0x120
 => el0_svc_common.constprop.0+0x48/0xf0
 => do_el0_svc+0x24/0x38
 => el0_svc+0x30/0xf8
 => el0t_64_sync_handler+0x120/0x130
 => el0t_64_sync+0x190/0x198
    sshd-session-16754   [000] ..... 493931.604737: __arm64_sys_write+0x4/0x40 <-invoke_syscall+0x50/0x120
    sshd-session-16754   [000] ..... 493931.604741: <stack trace>
 => __arm64_sys_write+0x8/0x40
 => invoke_syscall+0x50/0x120
 => el0_svc_common.constprop.0+0x48/0xf0
 => do_el0_svc+0x24/0x38
 => el0_svc+0x30/0xf8
 => el0t_64_sync_handler+0x120/0x130
 => el0t_64_sync+0x190/0x198
    sshd-session-16754   [000] ..... 493931.627871: __arm64_sys_write+0x4/0x40 <-invoke_syscall+0x50/0x120
    sshd-session-16754   [000] ..... 493931.627875: <stack trace>
 => __arm64_sys_write+0x8/0x40
 => invoke_syscall+0x50/0x120
 => el0_svc_common.constprop.0+0x48/0xf0
 => do_el0_svc+0x24/0x38
 => el0_svc+0x30/0xf8
 => el0t_64_sync_handler+0x120/0x130
 => el0t_64_sync+0x190/0x198
    sshd-session-16754   [000] ..... 493931.651238: __arm64_sys_write+0x4/0x40 <-invoke_syscall+0x50/0x120
    sshd-session-16754   [000] ..... 493931.651241: <stack trace>
 => __arm64_sys_write+0x8/0x40
 => invoke_syscall+0x50/0x120
 => el0_svc_common.constprop.0+0x48/0xf0
 => do_el0_svc+0x24/0x38
 => el0_svc+0x30/0xf8
 => el0t_64_sync_handler+0x120/0x130
 => el0t_64_sync+0x190/0x198
    sshd-session-16754   [000] ..... 493931.677146: __arm64_sys_write+0x4/0x40 <-invoke_syscall+0x50/0x120
    sshd-session-16754   [000] ..... 493931.677150: <stack trace>
 => __arm64_sys_write+0x8/0x40
 => invoke_syscall+0x50/0x120
 => el0_svc_common.constprop.0+0x48/0xf0
 => do_el0_svc+0x24/0x38
 => el0_svc+0x30/0xf8
 => el0t_64_sync_handler+0x120/0x130
 => el0t_64_sync+0x190/0x198
    sshd-session-16754   [000] ..... 493931.697694: __arm64_sys_write+0x4/0x40 <-invoke_syscall+0x50/0x120
    sshd-session-16754   [000] ..... 493931.697697: <stack trace>
 => __arm64_sys_write+0x8/0x40
 => invoke_syscall+0x50/0x120
 => el0_svc_common.constprop.0+0x48/0xf0
 => do_el0_svc+0x24/0x38
 => el0_svc+0x30/0xf8
 => el0t_64_sync_handler+0x120/0x130
 => el0t_64_sync+0x190/0x198
    sshd-session-16754   [000] ..... 493931.722507: __arm64_sys_write+0x4/0x40 <-invoke_syscall+0x50/0x120
    sshd-session-16754   [000] ..... 493931.722511: <stack trace>
 => __arm64_sys_write+0x8/0x40
 => invoke_syscall+0x50/0x120
 => el0_svc_common.constprop.0+0x48/0xf0
 => do_el0_svc+0x24/0x38
 => el0_svc+0x30/0xf8
 => el0t_64_sync_handler+0x120/0x130
 => el0t_64_sync+0x190/0x198
    sshd-session-16754   [000] ..... 493931.744933: __arm64_sys_write+0x4/0x40 <-invoke_syscall+0x50/0x120
    sshd-session-16754   [000] ..... 493931.744936: <stack trace>
 => __arm64_sys_write+0x8/0x40
 => invoke_syscall+0x50/0x120
 => el0_svc_common.constprop.0+0x48/0xf0
 => do_el0_svc+0x24/0x38
 => el0_svc+0x30/0xf8
 => el0t_64_sync_handler+0x120/0x130
 => el0t_64_sync+0x190/0x198
    sshd-session-16754   [000] ..... 493931.769579: __arm64_sys_write+0x4/0x40 <-invoke_syscall+0x50/0x120
    sshd-session-16754   [000] ..... 493931.769582: <stack trace>
 => __arm64_sys_write+0x8/0x40
 => invoke_syscall+0x50/0x120
 => el0_svc_common.constprop.0+0x48/0xf0
 => do_el0_svc+0x24/0x38
 => el0_svc+0x30/0xf8
 => el0t_64_sync_handler+0x120/0x130
 => el0t_64_sync+0x190/0x198
    sshd-session-16754   [000] ..... 493931.793442: __arm64_sys_write+0x4/0x40 <-invoke_syscall+0x50/0x120
    sshd-session-16754   [000] ..... 493931.793445: <stack trace>
 => __arm64_sys_write+0x8/0x40
 => invoke_syscall+0x50/0x120
 => el0_svc_common.constprop.0+0x48/0xf0
 => do_el0_svc+0x24/0x38
 => el0_svc+0x30/0xf8
 => el0t_64_sync_handler+0x120/0x130
 => el0t_64_sync+0x190/0x198
    sshd-session-16754   [000] ..... 493931.819788: __arm64_sys_write+0x4/0x40 <-invoke_syscall+0x50/0x120
    sshd-session-16754   [000] ..... 493931.819792: <stack trace>
 => __arm64_sys_write+0x8/0x40
 => invoke_syscall+0x50/0x120
 => el0_svc_common.constprop.0+0x48/0xf0
 => do_el0_svc+0x24/0x38
 => el0_svc+0x30/0xf8
 => el0t_64_sync_handler+0x120/0x130
 => el0t_64_sync+0x190/0x198
    sshd-session-16754   [000] ..... 493931.840121: __arm64_sys_write+0x4/0x40 <-invoke_syscall+0x50/0x120
    sshd-session-16754   [000] ..... 493931.840127: <stack trace>
 => __arm64_sys_write+0x8/0x40
 => invoke_syscall+0x50/0x120
 => el0_svc_common.constprop.0+0x48/0xf0
 => do_el0_svc+0x24/0x38
 => el0_svc+0x30/0xf8
 => el0t_64_sync_handler+0x120/0x130
 => el0t_64_sync+0x190/0x198
    sshd-session-16754   [000] ..... 493931.944575: __arm64_sys_write+0x4/0x40 <-invoke_syscall+0x50/0x120
    sshd-session-16754   [000] ..... 493931.944579: <stack trace>
 => __arm64_sys_write+0x8/0x40
 => invoke_syscall+0x50/0x120
 => el0_svc_common.constprop.0+0x48/0xf0
 => do_el0_svc+0x24/0x38
 => el0_svc+0x30/0xf8
 => el0t_64_sync_handler+0x120/0x130
 => el0t_64_sync+0x190/0x198
    sshd-session-16754   [000] ..... 493931.962429: __arm64_sys_write+0x4/0x40 <-invoke_syscall+0x50/0x120
    sshd-session-16754   [000] ..... 493931.962433: <stack trace>
 => __arm64_sys_write+0x8/0x40
 => invoke_syscall+0x50/0x120
 => el0_svc_common.constprop.0+0x48/0xf0
 => do_el0_svc+0x24/0x38
 => el0_svc+0x30/0xf8
 => el0t_64_sync_handler+0x120/0x130
 => el0t_64_sync+0x190/0x198
    sshd-session-16754   [000] ..... 493931.985097: __arm64_sys_write+0x4/0x40 <-invoke_syscall+0x50/0x120
    sshd-session-16754   [000] ..... 493931.985101: <stack trace>
 => __arm64_sys_write+0x8/0x40
 => invoke_syscall+0x50/0x120
 => el0_svc_common.constprop.0+0x48/0xf0
 => do_el0_svc+0x24/0x38
 => el0_svc+0x30/0xf8
 => el0t_64_sync_handler+0x120/0x130
 => el0t_64_sync+0x190/0x198
    sshd-session-16754   [000] ..... 493932.008935: __arm64_sys_write+0x4/0x40 <-invoke_syscall+0x50/0x120
    sshd-session-16754   [000] ..... 493932.008939: <stack trace>
 => __arm64_sys_write+0x8/0x40
 => invoke_syscall+0x50/0x120
 => el0_svc_common.constprop.0+0x48/0xf0
 => do_el0_svc+0x24/0x38
 => el0_svc+0x30/0xf8
 => el0t_64_sync_handler+0x120/0x130
 => el0t_64_sync+0x190/0x198
    sshd-session-16754   [000] ..... 493932.032238: __arm64_sys_write+0x4/0x40 <-invoke_syscall+0x50/0x120
    sshd-session-16754   [000] ..... 493932.032242: <stack trace>
 => __arm64_sys_write+0x8/0x40
 => invoke_syscall+0x50/0x120
 => el0_svc_common.constprop.0+0x48/0xf0
 => do_el0_svc+0x24/0x38
 => el0_svc+0x30/0xf8
 => el0t_64_sync_handler+0x120/0x130
 => el0t_64_sync+0x190/0x198
    sshd-session-16754   [000] ..... 493932.054676: __arm64_sys_write+0x4/0x40 <-invoke_syscall+0x50/0x120
    sshd-session-16754   [000] ..... 493932.054679: <stack trace>
 => __arm64_sys_write+0x8/0x40
 => invoke_syscall+0x50/0x120
 => el0_svc_common.constprop.0+0x48/0xf0
 => do_el0_svc+0x24/0x38
 => el0_svc+0x30/0xf8
 => el0t_64_sync_handler+0x120/0x130
 => el0t_64_sync+0x190/0x198
    sshd-session-16754   [000] ..... 493932.078948: __arm64_sys_write+0x4/0x40 <-invoke_syscall+0x50/0x120
    sshd-session-16754   [000] ..... 493932.078951: <stack trace>
 => __arm64_sys_write+0x8/0x40
 => invoke_syscall+0x50/0x120
 => el0_svc_common.constprop.0+0x48/0xf0
 => do_el0_svc+0x24/0x38
 => el0_svc+0x30/0xf8
 => el0t_64_sync_handler+0x120/0x130
 => el0t_64_sync+0x190/0x198
    sshd-session-16754   [000] ..... 493932.102922: __arm64_sys_write+0x4/0x40 <-invoke_syscall+0x50/0x120
    sshd-session-16754   [000] ..... 493932.102925: <stack trace>
 => __arm64_sys_write+0x8/0x40
 => invoke_syscall+0x50/0x120
 => el0_svc_common.constprop.0+0x48/0xf0
 => do_el0_svc+0x24/0x38
 => el0_svc+0x30/0xf8
 => el0t_64_sync_handler+0x120/0x130
 => el0t_64_sync+0x190/0x198
            bash-16773   [003] ..... 493932.103053: __arm64_sys_write+0x4/0x40 <-invoke_syscall+0x50/0x120
            bash-16773   [003] ..... 493932.103057: <stack trace>
 => __arm64_sys_write+0x8/0x40
 => invoke_syscall+0x50/0x120
 => el0_svc_common.constprop.0+0x48/0xf0
 => do_el0_svc+0x24/0x38
 => el0_svc+0x30/0xf8
 => el0t_64_sync_handler+0x120/0x130
 => el0t_64_sync+0x190/0x198
    sshd-session-16754   [000] ..... 493932.103174: __arm64_sys_write+0x4/0x40 <-invoke_syscall+0x50/0x120
    sshd-session-16754   [000] ..... 493932.103177: <stack trace>
 => __arm64_sys_write+0x8/0x40
 => invoke_syscall+0x50/0x120
 => el0_svc_common.constprop.0+0x48/0xf0
 => do_el0_svc+0x24/0x38
 => el0_svc+0x30/0xf8
 => el0t_64_sync_handler+0x120/0x130
 => el0t_64_sync+0x190/0x198
    sshd-session-16754   [000] ..... 493932.125901: __arm64_sys_write+0x4/0x40 <-invoke_syscall+0x50/0x120
    sshd-session-16754   [000] ..... 493932.125904: <stack trace>
 => __arm64_sys_write+0x8/0x40
 => invoke_syscall+0x50/0x120
 => el0_svc_common.constprop.0+0x48/0xf0
 => do_el0_svc+0x24/0x38
 => el0_svc+0x30/0xf8
 => el0t_64_sync_handler+0x120/0x130
 => el0t_64_sync+0x190/0x198
    sshd-session-16754   [000] ..... 493932.147078: __arm64_sys_write+0x4/0x40 <-invoke_syscall+0x50/0x120
    sshd-session-16754   [000] ..... 493932.147081: <stack trace>
 => __arm64_sys_write+0x8/0x40
 => invoke_syscall+0x50/0x120
 => el0_svc_common.constprop.0+0x48/0xf0
 => do_el0_svc+0x24/0x38
 => el0_svc+0x30/0xf8
 => el0t_64_sync_handler+0x120/0x130
 => el0t_64_sync+0x190/0x198
    sshd-session-16754   [000] ..... 493932.170472: __arm64_sys_write+0x4/0x40 <-invoke_syscall+0x50/0x120
    sshd-session-16754   [000] ..... 493932.170476: <stack trace>
 => __arm64_sys_write+0x8/0x40
 => invoke_syscall+0x50/0x120
 => el0_svc_common.constprop.0+0x48/0xf0
 => do_el0_svc+0x24/0x38
 => el0_svc+0x30/0xf8
 => el0t_64_sync_handler+0x120/0x130
 => el0t_64_sync+0x190/0x198
            bash-16773   [003] ..... 493932.170599: __arm64_sys_write+0x4/0x40 <-invoke_syscall+0x50/0x120
            bash-16773   [003] ..... 493932.170602: <stack trace>
 => __arm64_sys_write+0x8/0x40
 => invoke_syscall+0x50/0x120
 => el0_svc_common.constprop.0+0x48/0xf0
 => do_el0_svc+0x24/0x38
 => el0_svc+0x30/0xf8
 => el0t_64_sync_handler+0x120/0x130
 => el0t_64_sync+0x190/0x198
    sshd-session-16754   [000] ..... 493932.170731: __arm64_sys_write+0x4/0x40 <-invoke_syscall+0x50/0x120
    sshd-session-16754   [000] ..... 493932.170735: <stack trace>
 => __arm64_sys_write+0x8/0x40
 => invoke_syscall+0x50/0x120
 => el0_svc_common.constprop.0+0x48/0xf0
 => do_el0_svc+0x24/0x38
 => el0_svc+0x30/0xf8
 => el0t_64_sync_handler+0x120/0x130
 => el0t_64_sync+0x190/0x198
    sshd-session-16754   [000] ..... 493932.193145: __arm64_sys_write+0x4/0x40 <-invoke_syscall+0x50/0x120
    sshd-session-16754   [000] ..... 493932.193149: <stack trace>
 => __arm64_sys_write+0x8/0x40
 => invoke_syscall+0x50/0x120
 => el0_svc_common.constprop.0+0x48/0xf0
 => do_el0_svc+0x24/0x38
 => el0_svc+0x30/0xf8
 => el0t_64_sync_handler+0x120/0x130
 => el0t_64_sync+0x190/0x198
    sshd-session-16754   [000] ..... 493932.215361: __arm64_sys_write+0x4/0x40 <-invoke_syscall+0x50/0x120
    sshd-session-16754   [000] ..... 493932.215364: <stack trace>
 => __arm64_sys_write+0x8/0x40
 => invoke_syscall+0x50/0x120
 => el0_svc_common.constprop.0+0x48/0xf0
 => do_el0_svc+0x24/0x38
 => el0_svc+0x30/0xf8
 => el0t_64_sync_handler+0x120/0x130
 => el0t_64_sync+0x190/0x198
    sshd-session-16754   [000] ..... 493932.236239: __arm64_sys_write+0x4/0x40 <-invoke_syscall+0x50/0x120
    sshd-session-16754   [000] ..... 493932.236242: <stack trace>
 => __arm64_sys_write+0x8/0x40
 => invoke_syscall+0x50/0x120
 => el0_svc_common.constprop.0+0x48/0xf0
 => do_el0_svc+0x24/0x38
 => el0_svc+0x30/0xf8
 => el0t_64_sync_handler+0x120/0x130
 => el0t_64_sync+0x190/0x198
    sshd-session-16754   [000] ..... 493932.257066: __arm64_sys_write+0x4/0x40 <-invoke_syscall+0x50/0x120
    sshd-session-16754   [000] ..... 493932.257069: <stack trace>
 => __arm64_sys_write+0x8/0x40
 => invoke_syscall+0x50/0x120
 => el0_svc_common.constprop.0+0x48/0xf0
 => do_el0_svc+0x24/0x38
 => el0_svc+0x30/0xf8
 => el0t_64_sync_handler+0x120/0x130
 => el0t_64_sync+0x190/0x198
    sshd-session-16754   [000] ..... 493932.278835: __arm64_sys_write+0x4/0x40 <-invoke_syscall+0x50/0x120
    sshd-session-16754   [000] ..... 493932.278838: <stack trace>
 => __arm64_sys_write+0x8/0x40
 => invoke_syscall+0x50/0x120
 => el0_svc_common.constprop.0+0x48/0xf0
 => do_el0_svc+0x24/0x38
 => el0_svc+0x30/0xf8
 => el0t_64_sync_handler+0x120/0x130
 => el0t_64_sync+0x190/0x198
    sshd-session-16754   [000] ..... 493932.303028: __arm64_sys_write+0x4/0x40 <-invoke_syscall+0x50/0x120
    sshd-session-16754   [000] ..... 493932.303032: <stack trace>
 => __arm64_sys_write+0x8/0x40
 => invoke_syscall+0x50/0x120
 => el0_svc_common.constprop.0+0x48/0xf0
 => do_el0_svc+0x24/0x38
 => el0_svc+0x30/0xf8
 => el0t_64_sync_handler+0x120/0x130
 => el0t_64_sync+0x190/0x198
    sshd-session-16754   [000] ..... 493932.328862: __arm64_sys_write+0x4/0x40 <-invoke_syscall+0x50/0x120
    sshd-session-16754   [000] ..... 493932.328865: <stack trace>
 => __arm64_sys_write+0x8/0x40
 => invoke_syscall+0x50/0x120
 => el0_svc_common.constprop.0+0x48/0xf0
 => do_el0_svc+0x24/0x38
 => el0_svc+0x30/0xf8
 => el0t_64_sync_handler+0x120/0x130
 => el0t_64_sync+0x190/0x198
    sshd-session-16754   [000] ..... 493932.348653: __arm64_sys_write+0x4/0x40 <-invoke_syscall+0x50/0x120
    sshd-session-16754   [000] ..... 493932.348657: <stack trace>
 => __arm64_sys_write+0x8/0x40
 => invoke_syscall+0x50/0x120
 => el0_svc_common.constprop.0+0x48/0xf0
 => do_el0_svc+0x24/0x38
 => el0_svc+0x30/0xf8
 => el0t_64_sync_handler+0x120/0x130
 => el0t_64_sync+0x190/0x198
    sshd-session-16754   [000] ..... 493932.373032: __arm64_sys_write+0x4/0x40 <-invoke_syscall+0x50/0x120
    sshd-session-16754   [000] ..... 493932.373036: <stack trace>
 => __arm64_sys_write+0x8/0x40
 => invoke_syscall+0x50/0x120
 => el0_svc_common.constprop.0+0x48/0xf0
 => do_el0_svc+0x24/0x38
 => el0_svc+0x30/0xf8
 => el0t_64_sync_handler+0x120/0x130
 => el0t_64_sync+0x190/0x198
    sshd-session-16754   [000] ..... 493932.469293: __arm64_sys_write+0x4/0x40 <-invoke_syscall+0x50/0x120
    sshd-session-16754   [000] ..... 493932.469297: <stack trace>
 => __arm64_sys_write+0x8/0x40
 => invoke_syscall+0x50/0x120
 => el0_svc_common.constprop.0+0x48/0xf0
 => do_el0_svc+0x24/0x38
 => el0_svc+0x30/0xf8
 => el0t_64_sync_handler+0x120/0x130
 => el0t_64_sync+0x190/0x198
    sshd-session-16754   [000] ..... 493932.471009: __arm64_sys_write+0x4/0x40 <-invoke_syscall+0x50/0x120
    sshd-session-16754   [000] ..... 493932.471013: <stack trace>
 => __arm64_sys_write+0x8/0x40
 => invoke_syscall+0x50/0x120
 => el0_svc_common.constprop.0+0x48/0xf0
 => do_el0_svc+0x24/0x38
 => el0_svc+0x30/0xf8
 => el0t_64_sync_handler+0x120/0x130
 => el0t_64_sync+0x190/0x198
    sshd-session-16754   [000] ..... 493932.502874: __arm64_sys_write+0x4/0x40 <-invoke_syscall+0x50/0x120
    sshd-session-16754   [000] ..... 493932.502878: <stack trace>
 => __arm64_sys_write+0x8/0x40
 => invoke_syscall+0x50/0x120
 => el0_svc_common.constprop.0+0x48/0xf0
 => do_el0_svc+0x24/0x38
 => el0_svc+0x30/0xf8
 => el0t_64_sync_handler+0x120/0x130
 => el0t_64_sync+0x190/0x198
    sshd-session-16754   [000] ..... 493932.517434: __arm64_sys_write+0x4/0x40 <-invoke_syscall+0x50/0x120
    sshd-session-16754   [000] ..... 493932.517437: <stack trace>
 => __arm64_sys_write+0x8/0x40
 => invoke_syscall+0x50/0x120
 => el0_svc_common.constprop.0+0x48/0xf0
 => do_el0_svc+0x24/0x38
 => el0_svc+0x30/0xf8
 => el0t_64_sync_handler+0x120/0x130
 => el0t_64_sync+0x190/0x198
            bash-16773   [003] ..... 493932.517539: __arm64_sys_write+0x4/0x40 <-invoke_syscall+0x50/0x120
            bash-16773   [003] ..... 493932.517542: <stack trace>
 => __arm64_sys_write+0x8/0x40
 => invoke_syscall+0x50/0x120
 => el0_svc_common.constprop.0+0x48/0xf0
 => do_el0_svc+0x24/0x38
 => el0_svc+0x30/0xf8
 => el0t_64_sync_handler+0x120/0x130
 => el0t_64_sync+0x190/0x198
    sshd-session-16754   [000] ..... 493932.517671: __arm64_sys_write+0x4/0x40 <-invoke_syscall+0x50/0x120
    sshd-session-16754   [000] ..... 493932.517674: <stack trace>
 => __arm64_sys_write+0x8/0x40
 => invoke_syscall+0x50/0x120
 => el0_svc_common.constprop.0+0x48/0xf0
 => do_el0_svc+0x24/0x38
 => el0_svc+0x30/0xf8
 => el0t_64_sync_handler+0x120/0x130
 => el0t_64_sync+0x190/0x198
    sshd-session-16754   [000] ..... 493932.539740: __arm64_sys_write+0x4/0x40 <-invoke_syscall+0x50/0x120
    sshd-session-16754   [000] ..... 493932.539744: <stack trace>
 => __arm64_sys_write+0x8/0x40
 => invoke_syscall+0x50/0x120
 => el0_svc_common.constprop.0+0x48/0xf0
 => do_el0_svc+0x24/0x38
 => el0_svc+0x30/0xf8
 => el0t_64_sync_handler+0x120/0x130
 => el0t_64_sync+0x190/0x198
    sshd-session-16754   [000] ..... 493932.562549: __arm64_sys_write+0x4/0x40 <-invoke_syscall+0x50/0x120
    sshd-session-16754   [000] ..... 493932.562552: <stack trace>
 => __arm64_sys_write+0x8/0x40
 => invoke_syscall+0x50/0x120
 => el0_svc_common.constprop.0+0x48/0xf0
 => do_el0_svc+0x24/0x38
 => el0_svc+0x30/0xf8
 => el0t_64_sync_handler+0x120/0x130
 => el0t_64_sync+0x190/0x198
    sshd-session-16754   [000] ..... 493932.587013: __arm64_sys_write+0x4/0x40 <-invoke_syscall+0x50/0x120
    sshd-session-16754   [000] ..... 493932.587016: <stack trace>
 => __arm64_sys_write+0x8/0x40
 => invoke_syscall+0x50/0x120
 => el0_svc_common.constprop.0+0x48/0xf0
 => do_el0_svc+0x24/0x38
 => el0_svc+0x30/0xf8
 => el0t_64_sync_handler+0x120/0x130
 => el0t_64_sync+0x190/0x198
    sshd-session-16754   [000] ..... 493932.610024: __arm64_sys_write+0x4/0x40 <-invoke_syscall+0x50/0x120
    sshd-session-16754   [000] ..... 493932.610027: <stack trace>
 => __arm64_sys_write+0x8/0x40
 => invoke_syscall+0x50/0x120
 => el0_svc_common.constprop.0+0x48/0xf0
 => do_el0_svc+0x24/0x38
 => el0_svc+0x30/0xf8
 => el0t_64_sync_handler+0x120/0x130
 => el0t_64_sync+0x190/0x198
    sshd-session-16754   [000] ..... 493932.635660: __arm64_sys_write+0x4/0x40 <-invoke_syscall+0x50/0x120
    sshd-session-16754   [000] ..... 493932.635663: <stack trace>
 => __arm64_sys_write+0x8/0x40
 => invoke_syscall+0x50/0x120
 => el0_svc_common.constprop.0+0x48/0xf0
 => do_el0_svc+0x24/0x38
 => el0_svc+0x30/0xf8
 => el0t_64_sync_handler+0x120/0x130
 => el0t_64_sync+0x190/0x198
    sshd-session-16754   [000] ..... 493932.656907: __arm64_sys_write+0x4/0x40 <-invoke_syscall+0x50/0x120
    sshd-session-16754   [000] ..... 493932.656910: <stack trace>
 => __arm64_sys_write+0x8/0x40
 => invoke_syscall+0x50/0x120
 => el0_svc_common.constprop.0+0x48/0xf0
 => do_el0_svc+0x24/0x38
 => el0_svc+0x30/0xf8
 => el0t_64_sync_handler+0x120/0x130
 => el0t_64_sync+0x190/0x198
    sshd-session-16754   [000] ..... 493932.679718: __arm64_sys_write+0x4/0x40 <-invoke_syscall+0x50/0x120
    sshd-session-16754   [000] ..... 493932.679721: <stack trace>
 => __arm64_sys_write+0x8/0x40
 => invoke_syscall+0x50/0x120
 => el0_svc_common.constprop.0+0x48/0xf0
 => do_el0_svc+0x24/0x38
 => el0_svc+0x30/0xf8
 => el0t_64_sync_handler+0x120/0x130
 => el0t_64_sync+0x190/0x198
    sshd-session-16754   [000] ..... 493932.704540: __arm64_sys_write+0x4/0x40 <-invoke_syscall+0x50/0x120
    sshd-session-16754   [000] ..... 493932.704543: <stack trace>
 => __arm64_sys_write+0x8/0x40
 => invoke_syscall+0x50/0x120
 => el0_svc_common.constprop.0+0x48/0xf0
 => do_el0_svc+0x24/0x38
 => el0_svc+0x30/0xf8
 => el0t_64_sync_handler+0x120/0x130
 => el0t_64_sync+0x190/0x198
    sshd-session-16754   [000] ..... 493932.726173: __arm64_sys_write+0x4/0x40 <-invoke_syscall+0x50/0x120
    sshd-session-16754   [000] ..... 493932.726177: <stack trace>
 => __arm64_sys_write+0x8/0x40
 => invoke_syscall+0x50/0x120
 => el0_svc_common.constprop.0+0x48/0xf0
 => do_el0_svc+0x24/0x38
 => el0_svc+0x30/0xf8
 => el0t_64_sync_handler+0x120/0x130
 => el0t_64_sync+0x190/0x198
    sshd-session-16754   [000] ..... 493932.751915: __arm64_sys_write+0x4/0x40 <-invoke_syscall+0x50/0x120
    sshd-session-16754   [000] ..... 493932.751918: <stack trace>
 => __arm64_sys_write+0x8/0x40
 => invoke_syscall+0x50/0x120
 => el0_svc_common.constprop.0+0x48/0xf0
 => do_el0_svc+0x24/0x38
 => el0_svc+0x30/0xf8
 => el0t_64_sync_handler+0x120/0x130
 => el0t_64_sync+0x190/0x198
    sshd-session-16754   [000] ..... 493932.772955: __arm64_sys_write+0x4/0x40 <-invoke_syscall+0x50/0x120
    sshd-session-16754   [000] ..... 493932.772958: <stack trace>
 => __arm64_sys_write+0x8/0x40
 => invoke_syscall+0x50/0x120
 => el0_svc_common.constprop.0+0x48/0xf0
 => do_el0_svc+0x24/0x38
 => el0_svc+0x30/0xf8
 => el0t_64_sync_handler+0x120/0x130
 => el0t_64_sync+0x190/0x198
    sshd-session-16754   [000] ..... 493932.793571: __arm64_sys_write+0x4/0x40 <-invoke_syscall+0x50/0x120
    sshd-session-16754   [000] ..... 493932.793578: <stack trace>
 => __arm64_sys_write+0x8/0x40
 => invoke_syscall+0x50/0x120
 => el0_svc_common.constprop.0+0x48/0xf0
 => do_el0_svc+0x24/0x38
 => el0_svc+0x30/0xf8
 => el0t_64_sync_handler+0x120/0x130
 => el0t_64_sync+0x190/0x198
            bash-16773   [003] ..... 493932.793675: __arm64_sys_write+0x4/0x40 <-invoke_syscall+0x50/0x120
            bash-16773   [003] ..... 493932.793678: <stack trace>
 => __arm64_sys_write+0x8/0x40
 => invoke_syscall+0x50/0x120
 => el0_svc_common.constprop.0+0x48/0xf0
 => do_el0_svc+0x24/0x38
 => el0_svc+0x30/0xf8
 => el0t_64_sync_handler+0x120/0x130
 => el0t_64_sync+0x190/0x198
    sshd-session-16754   [000] ..... 493932.793805: __arm64_sys_write+0x4/0x40 <-invoke_syscall+0x50/0x120
    sshd-session-16754   [000] ..... 493932.793808: <stack trace>
 => __arm64_sys_write+0x8/0x40
 => invoke_syscall+0x50/0x120
 => el0_svc_common.constprop.0+0x48/0xf0
 => do_el0_svc+0x24/0x38
 => el0_svc+0x30/0xf8
 => el0t_64_sync_handler+0x120/0x130
 => el0t_64_sync+0x190/0x198
    sshd-session-16754   [000] ..... 493932.818233: __arm64_sys_write+0x4/0x40 <-invoke_syscall+0x50/0x120
    sshd-session-16754   [000] ..... 493932.818236: <stack trace>
 => __arm64_sys_write+0x8/0x40
 => invoke_syscall+0x50/0x120
 => el0_svc_common.constprop.0+0x48/0xf0
 => do_el0_svc+0x24/0x38
 => el0_svc+0x30/0xf8
 => el0t_64_sync_handler+0x120/0x130
 => el0t_64_sync+0x190/0x198
    sshd-session-16754   [000] ..... 493932.846379: __arm64_sys_write+0x4/0x40 <-invoke_syscall+0x50/0x120
    sshd-session-16754   [000] ..... 493932.846383: <stack trace>
 => __arm64_sys_write+0x8/0x40
 => invoke_syscall+0x50/0x120
 => el0_svc_common.constprop.0+0x48/0xf0
 => do_el0_svc+0x24/0x38
 => el0_svc+0x30/0xf8
 => el0t_64_sync_handler+0x120/0x130
 => el0t_64_sync+0x190/0x198
    sshd-session-16754   [000] ..... 493932.864742: __arm64_sys_write+0x4/0x40 <-invoke_syscall+0x50/0x120
    sshd-session-16754   [000] ..... 493932.864746: <stack trace>
 => __arm64_sys_write+0x8/0x40
 => invoke_syscall+0x50/0x120
 => el0_svc_common.constprop.0+0x48/0xf0
 => do_el0_svc+0x24/0x38
 => el0_svc+0x30/0xf8
 => el0t_64_sync_handler+0x120/0x130
 => el0t_64_sync+0x190/0x198
            bash-16773   [003] ..... 493932.864837: __arm64_sys_write+0x4/0x40 <-invoke_syscall+0x50/0x120
            bash-16773   [003] ..... 493932.864840: <stack trace>
 => __arm64_sys_write+0x8/0x40
 => invoke_syscall+0x50/0x120
 => el0_svc_common.constprop.0+0x48/0xf0
 => do_el0_svc+0x24/0x38
 => el0_svc+0x30/0xf8
 => el0t_64_sync_handler+0x120/0x130
 => el0t_64_sync+0x190/0x198
    sshd-session-16754   [000] ..... 493932.864980: __arm64_sys_write+0x4/0x40 <-invoke_syscall+0x50/0x120
    sshd-session-16754   [000] ..... 493932.864984: <stack trace>
 => __arm64_sys_write+0x8/0x40
 => invoke_syscall+0x50/0x120
 => el0_svc_common.constprop.0+0x48/0xf0
 => do_el0_svc+0x24/0x38
 => el0_svc+0x30/0xf8
 => el0t_64_sync_handler+0x120/0x130
 => el0t_64_sync+0x190/0x198
    sshd-session-16754   [000] ..... 493932.889397: __arm64_sys_write+0x4/0x40 <-invoke_syscall+0x50/0x120
    sshd-session-16754   [000] ..... 493932.889401: <stack trace>
 => __arm64_sys_write+0x8/0x40
 => invoke_syscall+0x50/0x120
 => el0_svc_common.constprop.0+0x48/0xf0
 => do_el0_svc+0x24/0x38
 => el0_svc+0x30/0xf8
 => el0t_64_sync_handler+0x120/0x130
 => el0t_64_sync+0x190/0x198
    sshd-session-16754   [000] ..... 493932.993497: __arm64_sys_write+0x4/0x40 <-invoke_syscall+0x50/0x120
    sshd-session-16754   [000] ..... 493932.993501: <stack trace>
 => __arm64_sys_write+0x8/0x40
 => invoke_syscall+0x50/0x120
 => el0_svc_common.constprop.0+0x48/0xf0
 => do_el0_svc+0x24/0x38
 => el0_svc+0x30/0xf8
 => el0t_64_sync_handler+0x120/0x130
 => el0t_64_sync+0x190/0x198
    sshd-session-16754   [000] ..... 493932.993525: __arm64_sys_write+0x4/0x40 <-invoke_syscall+0x50/0x120
    sshd-session-16754   [000] ..... 493932.993527: <stack trace>
 => __arm64_sys_write+0x8/0x40
 => invoke_syscall+0x50/0x120
 => el0_svc_common.constprop.0+0x48/0xf0
 => do_el0_svc+0x24/0x38
 => el0_svc+0x30/0xf8
 => el0t_64_sync_handler+0x120/0x130
 => el0t_64_sync+0x190/0x198
            bash-16773   [003] ..... 493932.993688: __arm64_sys_write+0x4/0x40 <-invoke_syscall+0x50/0x120
            bash-16773   [003] ..... 493932.993691: <stack trace>
 => __arm64_sys_write+0x8/0x40
 => invoke_syscall+0x50/0x120
 => el0_svc_common.constprop.0+0x48/0xf0
 => do_el0_svc+0x24/0x38
 => el0_svc+0x30/0xf8
 => el0t_64_sync_handler+0x120/0x130
 => el0t_64_sync+0x190/0x198
    sshd-session-16754   [000] ..... 493932.993834: __arm64_sys_write+0x4/0x40 <-invoke_syscall+0x50/0x120
    sshd-session-16754   [000] ..... 493932.993838: <stack trace>
 => __arm64_sys_write+0x8/0x40
 => invoke_syscall+0x50/0x120
 => el0_svc_common.constprop.0+0x48/0xf0
 => do_el0_svc+0x24/0x38
 => el0_svc+0x30/0xf8
 => el0t_64_sync_handler+0x120/0x130
 => el0t_64_sync+0x190/0x198
    sshd-session-16754   [000] ..... 493933.012400: __arm64_sys_write+0x4/0x40 <-invoke_syscall+0x50/0x120
    sshd-session-16754   [000] ..... 493933.012403: <stack trace>
 => __arm64_sys_write+0x8/0x40
 => invoke_syscall+0x50/0x120
 => el0_svc_common.constprop.0+0x48/0xf0
 => do_el0_svc+0x24/0x38
 => el0_svc+0x30/0xf8
 => el0t_64_sync_handler+0x120/0x130
 => el0t_64_sync+0x190/0x198
    sshd-session-16754   [000] ..... 493933.037282: __arm64_sys_write+0x4/0x40 <-invoke_syscall+0x50/0x120
    sshd-session-16754   [000] ..... 493933.037285: <stack trace>
 => __arm64_sys_write+0x8/0x40
 => invoke_syscall+0x50/0x120
 => el0_svc_common.constprop.0+0x48/0xf0
 => do_el0_svc+0x24/0x38
 => el0_svc+0x30/0xf8
 => el0t_64_sync_handler+0x120/0x130
 => el0t_64_sync+0x190/0x198
    sshd-session-16754   [000] ..... 493933.060654: __arm64_sys_write+0x4/0x40 <-invoke_syscall+0x50/0x120
    sshd-session-16754   [000] ..... 493933.060658: <stack trace>
 => __arm64_sys_write+0x8/0x40
 => invoke_syscall+0x50/0x120
 => el0_svc_common.constprop.0+0x48/0xf0
 => do_el0_svc+0x24/0x38
 => el0_svc+0x30/0xf8
 => el0t_64_sync_handler+0x120/0x130
 => el0t_64_sync+0x190/0x198
    sshd-session-16754   [000] ..... 493933.081968: __arm64_sys_write+0x4/0x40 <-invoke_syscall+0x50/0x120
    sshd-session-16754   [000] ..... 493933.081971: <stack trace>
 => __arm64_sys_write+0x8/0x40
 => invoke_syscall+0x50/0x120
 => el0_svc_common.constprop.0+0x48/0xf0
 => do_el0_svc+0x24/0x38
 => el0_svc+0x30/0xf8
 => el0t_64_sync_handler+0x120/0x130
 => el0t_64_sync+0x190/0x198
    sshd-session-16754   [000] ..... 493933.105827: __arm64_sys_write+0x4/0x40 <-invoke_syscall+0x50/0x120
    sshd-session-16754   [000] ..... 493933.105830: <stack trace>
 => __arm64_sys_write+0x8/0x40
 => invoke_syscall+0x50/0x120
 => el0_svc_common.constprop.0+0x48/0xf0
 => do_el0_svc+0x24/0x38
 => el0_svc+0x30/0xf8
 => el0t_64_sync_handler+0x120/0x130
 => el0t_64_sync+0x190/0x198
    sshd-session-16754   [000] ..... 493933.128923: __arm64_sys_write+0x4/0x40 <-invoke_syscall+0x50/0x120
    sshd-session-16754   [000] ..... 493933.128926: <stack trace>
 => __arm64_sys_write+0x8/0x40
 => invoke_syscall+0x50/0x120
 => el0_svc_common.constprop.0+0x48/0xf0
 => do_el0_svc+0x24/0x38
 => el0_svc+0x30/0xf8
 => el0t_64_sync_handler+0x120/0x130
 => el0t_64_sync+0x190/0x198
            bash-16773   [003] ..... 493933.129028: __arm64_sys_write+0x4/0x40 <-invoke_syscall+0x50/0x120
            bash-16773   [003] ..... 493933.129031: <stack trace>
 => __arm64_sys_write+0x8/0x40
 => invoke_syscall+0x50/0x120
 => el0_svc_common.constprop.0+0x48/0xf0
 => do_el0_svc+0x24/0x38
 => el0_svc+0x30/0xf8
 => el0t_64_sync_handler+0x120/0x130
 => el0t_64_sync+0x190/0x198
    sshd-session-16754   [000] ..... 493933.129151: __arm64_sys_write+0x4/0x40 <-invoke_syscall+0x50/0x120
    sshd-session-16754   [000] ..... 493933.129154: <stack trace>
 => __arm64_sys_write+0x8/0x40
 => invoke_syscall+0x50/0x120
 => el0_svc_common.constprop.0+0x48/0xf0
 => do_el0_svc+0x24/0x38
 => el0_svc+0x30/0xf8
 => el0t_64_sync_handler+0x120/0x130
 => el0t_64_sync+0x190/0x198
    sshd-session-16754   [000] ..... 493933.153685: __arm64_sys_write+0x4/0x40 <-invoke_syscall+0x50/0x120
    sshd-session-16754   [000] ..... 493933.153688: <stack trace>
 => __arm64_sys_write+0x8/0x40
 => invoke_syscall+0x50/0x120
 => el0_svc_common.constprop.0+0x48/0xf0
 => do_el0_svc+0x24/0x38
 => el0_svc+0x30/0xf8
 => el0t_64_sync_handler+0x120/0x130
 => el0t_64_sync+0x190/0x198
    sshd-session-16754   [000] ..... 493933.175082: __arm64_sys_write+0x4/0x40 <-invoke_syscall+0x50/0x120
    sshd-session-16754   [000] ..... 493933.175085: <stack trace>
 => __arm64_sys_write+0x8/0x40
 => invoke_syscall+0x50/0x120
 => el0_svc_common.constprop.0+0x48/0xf0
 => do_el0_svc+0x24/0x38
 => el0_svc+0x30/0xf8
 => el0t_64_sync_handler+0x120/0x130
 => el0t_64_sync+0x190/0x198
    sshd-session-16754   [000] ..... 493933.198364: __arm64_sys_write+0x4/0x40 <-invoke_syscall+0x50/0x120
    sshd-session-16754   [000] ..... 493933.198367: <stack trace>
 => __arm64_sys_write+0x8/0x40
 => invoke_syscall+0x50/0x120
 => el0_svc_common.constprop.0+0x48/0xf0
 => do_el0_svc+0x24/0x38
 => el0_svc+0x30/0xf8
 => el0t_64_sync_handler+0x120/0x130
 => el0t_64_sync+0x190/0x198
    sshd-session-16754   [000] ..... 493933.221368: __arm64_sys_write+0x4/0x40 <-invoke_syscall+0x50/0x120
    sshd-session-16754   [000] ..... 493933.221371: <stack trace>
 => __arm64_sys_write+0x8/0x40
 => invoke_syscall+0x50/0x120
 => el0_svc_common.constprop.0+0x48/0xf0
 => do_el0_svc+0x24/0x38
 => el0_svc+0x30/0xf8
 => el0t_64_sync_handler+0x120/0x130
 => el0t_64_sync+0x190/0x198
            bash-16773   [003] ..... 493933.221462: __arm64_sys_write+0x4/0x40 <-invoke_syscall+0x50/0x120
            bash-16773   [003] ..... 493933.221465: <stack trace>
 => __arm64_sys_write+0x8/0x40
 => invoke_syscall+0x50/0x120
 => el0_svc_common.constprop.0+0x48/0xf0
 => do_el0_svc+0x24/0x38
 => el0_svc+0x30/0xf8
 => el0t_64_sync_handler+0x120/0x130
 => el0t_64_sync+0x190/0x198
    sshd-session-16754   [000] ..... 493933.221604: __arm64_sys_write+0x4/0x40 <-invoke_syscall+0x50/0x120
    sshd-session-16754   [000] ..... 493933.221607: <stack trace>
 => __arm64_sys_write+0x8/0x40
 => invoke_syscall+0x50/0x120
 => el0_svc_common.constprop.0+0x48/0xf0
 => do_el0_svc+0x24/0x38
 => el0_svc+0x30/0xf8
 => el0t_64_sync_handler+0x120/0x130
 => el0t_64_sync+0x190/0x198
    sshd-session-16754   [000] ..... 493933.243699: __arm64_sys_write+0x4/0x40 <-invoke_syscall+0x50/0x120
    sshd-session-16754   [000] ..... 493933.243702: <stack trace>
 => __arm64_sys_write+0x8/0x40
 => invoke_syscall+0x50/0x120
 => el0_svc_common.constprop.0+0x48/0xf0
 => do_el0_svc+0x24/0x38
 => el0_svc+0x30/0xf8
 => el0t_64_sync_handler+0x120/0x130
 => el0t_64_sync+0x190/0x198
    sshd-session-16754   [000] ..... 493933.267949: __arm64_sys_write+0x4/0x40 <-invoke_syscall+0x50/0x120
    sshd-session-16754   [000] ..... 493933.267953: <stack trace>
 => __arm64_sys_write+0x8/0x40
 => invoke_syscall+0x50/0x120
 => el0_svc_common.constprop.0+0x48/0xf0
 => do_el0_svc+0x24/0x38
 => el0_svc+0x30/0xf8
 => el0t_64_sync_handler+0x120/0x130
 => el0t_64_sync+0x190/0x198
    sshd-session-16754   [000] ..... 493933.290697: __arm64_sys_write+0x4/0x40 <-invoke_syscall+0x50/0x120
    sshd-session-16754   [000] ..... 493933.290700: <stack trace>
 => __arm64_sys_write+0x8/0x40
 => invoke_syscall+0x50/0x120
 => el0_svc_common.constprop.0+0x48/0xf0
 => do_el0_svc+0x24/0x38
 => el0_svc+0x30/0xf8
 => el0t_64_sync_handler+0x120/0x130
 => el0t_64_sync+0x190/0x198
    sshd-session-16754   [000] ..... 493933.318057: __arm64_sys_write+0x4/0x40 <-invoke_syscall+0x50/0x120
    sshd-session-16754   [000] ..... 493933.318061: <stack trace>
 => __arm64_sys_write+0x8/0x40
 => invoke_syscall+0x50/0x120
 => el0_svc_common.constprop.0+0x48/0xf0
 => do_el0_svc+0x24/0x38
 => el0_svc+0x30/0xf8
 => el0t_64_sync_handler+0x120/0x130
 => el0t_64_sync+0x190/0x198
    sshd-session-16754   [000] ..... 493933.338995: __arm64_sys_write+0x4/0x40 <-invoke_syscall+0x50/0x120
    sshd-session-16754   [000] ..... 493933.338998: <stack trace>
 => __arm64_sys_write+0x8/0x40
 => invoke_syscall+0x50/0x120
 => el0_svc_common.constprop.0+0x48/0xf0
 => do_el0_svc+0x24/0x38
 => el0_svc+0x30/0xf8
 => el0t_64_sync_handler+0x120/0x130
 => el0t_64_sync+0x190/0x198
    sshd-session-16754   [000] ..... 493933.359658: __arm64_sys_write+0x4/0x40 <-invoke_syscall+0x50/0x120
    sshd-session-16754   [000] ..... 493933.359661: <stack trace>
 => __arm64_sys_write+0x8/0x40
 => invoke_syscall+0x50/0x120
 => el0_svc_common.constprop.0+0x48/0xf0
 => do_el0_svc+0x24/0x38
 => el0_svc+0x30/0xf8
 => el0t_64_sync_handler+0x120/0x130
 => el0t_64_sync+0x190/0x198
    sshd-session-16754   [000] ..... 493933.385290: __arm64_sys_write+0x4/0x40 <-invoke_syscall+0x50/0x120
    sshd-session-16754   [000] ..... 493933.385294: <stack trace>
 => __arm64_sys_write+0x8/0x40
 => invoke_syscall+0x50/0x120
 => el0_svc_common.constprop.0+0x48/0xf0
 => do_el0_svc+0x24/0x38
 => el0_svc+0x30/0xf8
 => el0t_64_sync_handler+0x120/0x130
 => el0t_64_sync+0x190/0x198
    sshd-session-16754   [000] ..... 493933.408057: __arm64_sys_write+0x4/0x40 <-invoke_syscall+0x50/0x120
    sshd-session-16754   [000] ..... 493933.408060: <stack trace>
 => __arm64_sys_write+0x8/0x40
 => invoke_syscall+0x50/0x120
 => el0_svc_common.constprop.0+0x48/0xf0
 => do_el0_svc+0x24/0x38
 => el0_svc+0x30/0xf8
 => el0t_64_sync_handler+0x120/0x130
 => el0t_64_sync+0x190/0x198
    sshd-session-16754   [000] ..... 493933.517623: __arm64_sys_write+0x4/0x40 <-invoke_syscall+0x50/0x120
    sshd-session-16754   [000] ..... 493933.517627: <stack trace>
 => __arm64_sys_write+0x8/0x40
 => invoke_syscall+0x50/0x120
 => el0_svc_common.constprop.0+0x48/0xf0
 => do_el0_svc+0x24/0x38
 => el0_svc+0x30/0xf8
 => el0t_64_sync_handler+0x120/0x130
 => el0t_64_sync+0x190/0x198
    sshd-session-16754   [000] ..... 493933.531310: __arm64_sys_write+0x4/0x40 <-invoke_syscall+0x50/0x120
    sshd-session-16754   [000] ..... 493933.531313: <stack trace>
 => __arm64_sys_write+0x8/0x40
 => invoke_syscall+0x50/0x120
 => el0_svc_common.constprop.0+0x48/0xf0
 => do_el0_svc+0x24/0x38
 => el0_svc+0x30/0xf8
 => el0t_64_sync_handler+0x120/0x130
 => el0t_64_sync+0x190/0x198
    sshd-session-16754   [000] ..... 493933.557645: __arm64_sys_write+0x4/0x40 <-invoke_syscall+0x50/0x120
    sshd-session-16754   [000] ..... 493933.557649: <stack trace>
 => __arm64_sys_write+0x8/0x40
 => invoke_syscall+0x50/0x120
 => el0_svc_common.constprop.0+0x48/0xf0
 => do_el0_svc+0x24/0x38
 => el0_svc+0x30/0xf8
 => el0t_64_sync_handler+0x120/0x130
 => el0t_64_sync+0x190/0x198
    sshd-session-16754   [000] ..... 493933.576177: __arm64_sys_write+0x4/0x40 <-invoke_syscall+0x50/0x120
    sshd-session-16754   [000] ..... 493933.576181: <stack trace>
 => __arm64_sys_write+0x8/0x40
 => invoke_syscall+0x50/0x120
 => el0_svc_common.constprop.0+0x48/0xf0
 => do_el0_svc+0x24/0x38
 => el0_svc+0x30/0xf8
 => el0t_64_sync_handler+0x120/0x130
 => el0t_64_sync+0x190/0x198
    sshd-session-16754   [000] ..... 493933.599342: __arm64_sys_write+0x4/0x40 <-invoke_syscall+0x50/0x120
    sshd-session-16754   [000] ..... 493933.599346: <stack trace>
 => __arm64_sys_write+0x8/0x40
 => invoke_syscall+0x50/0x120
 => el0_svc_common.constprop.0+0x48/0xf0
 => do_el0_svc+0x24/0x38
 => el0_svc+0x30/0xf8
 => el0t_64_sync_handler+0x120/0x130
 => el0t_64_sync+0x190/0x198
    sshd-session-16754   [000] ..... 493933.624417: __arm64_sys_write+0x4/0x40 <-invoke_syscall+0x50/0x120
    sshd-session-16754   [000] ..... 493933.624420: <stack trace>
 => __arm64_sys_write+0x8/0x40
 => invoke_syscall+0x50/0x120
 => el0_svc_common.constprop.0+0x48/0xf0
 => do_el0_svc+0x24/0x38
 => el0_svc+0x30/0xf8
 => el0t_64_sync_handler+0x120/0x130
 => el0t_64_sync+0x190/0x198
    sshd-session-16754   [000] ..... 493933.644603: __arm64_sys_write+0x4/0x40 <-invoke_syscall+0x50/0x120
    sshd-session-16754   [000] ..... 493933.644606: <stack trace>
 => __arm64_sys_write+0x8/0x40
 => invoke_syscall+0x50/0x120
 => el0_svc_common.constprop.0+0x48/0xf0
 => do_el0_svc+0x24/0x38
 => el0_svc+0x30/0xf8
 => el0t_64_sync_handler+0x120/0x130
 => el0t_64_sync+0x190/0x198
    sshd-session-16754   [000] ..... 493933.667417: __arm64_sys_write+0x4/0x40 <-invoke_syscall+0x50/0x120
    sshd-session-16754   [000] ..... 493933.667420: <stack trace>
 => __arm64_sys_write+0x8/0x40
 => invoke_syscall+0x50/0x120
 => el0_svc_common.constprop.0+0x48/0xf0
 => do_el0_svc+0x24/0x38
 => el0_svc+0x30/0xf8
 => el0t_64_sync_handler+0x120/0x130
 => el0t_64_sync+0x190/0x198
    sshd-session-16754   [000] ..... 493933.691517: __arm64_sys_write+0x4/0x40 <-invoke_syscall+0x50/0x120
    sshd-session-16754   [000] ..... 493933.691520: <stack trace>
 => __arm64_sys_write+0x8/0x40
 => invoke_syscall+0x50/0x120
 => el0_svc_common.constprop.0+0x48/0xf0
 => do_el0_svc+0x24/0x38
 => el0_svc+0x30/0xf8
 => el0t_64_sync_handler+0x120/0x130
 => el0t_64_sync+0x190/0x198
    sshd-session-16754   [000] ..... 493933.715135: __arm64_sys_write+0x4/0x40 <-invoke_syscall+0x50/0x120
    sshd-session-16754   [000] ..... 493933.715140: <stack trace>
 => __arm64_sys_write+0x8/0x40
 => invoke_syscall+0x50/0x120
 => el0_svc_common.constprop.0+0x48/0xf0
 => do_el0_svc+0x24/0x38
 => el0_svc+0x30/0xf8
 => el0t_64_sync_handler+0x120/0x130
 => el0t_64_sync+0x190/0x198
    sshd-session-16754   [000] ..... 493933.739160: __arm64_sys_write+0x4/0x40 <-invoke_syscall+0x50/0x120
    sshd-session-16754   [000] ..... 493933.739163: <stack trace>
 => __arm64_sys_write+0x8/0x40
 => invoke_syscall+0x50/0x120
 => el0_svc_common.constprop.0+0x48/0xf0
 => do_el0_svc+0x24/0x38
 => el0_svc+0x30/0xf8
 => el0t_64_sync_handler+0x120/0x130
 => el0t_64_sync+0x190/0x198
  NetworkManager-649     [002] ..... 493933.759855: __arm64_sys_write+0x4/0x40 <-invoke_syscall+0x50/0x120
  NetworkManager-649     [002] ..... 493933.759860: <stack trace>
 => __arm64_sys_write+0x8/0x40
 => invoke_syscall+0x50/0x120
 => el0_svc_common.constprop.0+0x48/0xf0
 => do_el0_svc+0x24/0x38
 => el0_svc+0x30/0xf8
 => el0t_64_sync_handler+0x120/0x130
 => el0t_64_sync+0x190/0x198
    sshd-session-16754   [000] ..... 493933.764429: __arm64_sys_write+0x4/0x40 <-invoke_syscall+0x50/0x120
    sshd-session-16754   [000] ..... 493933.764433: <stack trace>
 => __arm64_sys_write+0x8/0x40
 => invoke_syscall+0x50/0x120
 => el0_svc_common.constprop.0+0x48/0xf0
 => do_el0_svc+0x24/0x38
 => el0_svc+0x30/0xf8
 => el0t_64_sync_handler+0x120/0x130
 => el0t_64_sync+0x190/0x198
    sshd-session-16754   [000] ..... 493933.784408: __arm64_sys_write+0x4/0x40 <-invoke_syscall+0x50/0x120
    sshd-session-16754   [000] ..... 493933.784412: <stack trace>
 => __arm64_sys_write+0x8/0x40
 => invoke_syscall+0x50/0x120
 => el0_svc_common.constprop.0+0x48/0xf0
 => do_el0_svc+0x24/0x38
 => el0_svc+0x30/0xf8
 => el0t_64_sync_handler+0x120/0x130
 => el0t_64_sync+0x190/0x198
    sshd-session-16754   [000] ..... 493933.807314: __arm64_sys_write+0x4/0x40 <-invoke_syscall+0x50/0x120
    sshd-session-16754   [000] ..... 493933.807318: <stack trace>
 => __arm64_sys_write+0x8/0x40
 => invoke_syscall+0x50/0x120
 => el0_svc_common.constprop.0+0x48/0xf0
 => do_el0_svc+0x24/0x38
 => el0_svc+0x30/0xf8
 => el0t_64_sync_handler+0x120/0x130
 => el0t_64_sync+0x190/0x198
    sshd-session-16754   [000] ..... 493933.835594: __arm64_sys_write+0x4/0x40 <-invoke_syscall+0x50/0x120
    sshd-session-16754   [000] ..... 493933.835597: <stack trace>
 => __arm64_sys_write+0x8/0x40
 => invoke_syscall+0x50/0x120
 => el0_svc_common.constprop.0+0x48/0xf0
 => do_el0_svc+0x24/0x38
 => el0_svc+0x30/0xf8
 => el0t_64_sync_handler+0x120/0x130
 => el0t_64_sync+0x190/0x198
    sshd-session-16754   [000] ..... 493933.851653: __arm64_sys_write+0x4/0x40 <-invoke_syscall+0x50/0x120
    sshd-session-16754   [000] ..... 493933.851656: <stack trace>
 => __arm64_sys_write+0x8/0x40
 => invoke_syscall+0x50/0x120
 => el0_svc_common.constprop.0+0x48/0xf0
 => do_el0_svc+0x24/0x38
 => el0_svc+0x30/0xf8
 => el0t_64_sync_handler+0x120/0x130
 => el0t_64_sync+0x190/0x198
    sshd-session-16754   [000] ..... 493933.873018: __arm64_sys_write+0x4/0x40 <-invoke_syscall+0x50/0x120
    sshd-session-16754   [000] ..... 493933.873021: <stack trace>
 => __arm64_sys_write+0x8/0x40
 => invoke_syscall+0x50/0x120
 => el0_svc_common.constprop.0+0x48/0xf0
 => do_el0_svc+0x24/0x38
 => el0_svc+0x30/0xf8
 => el0t_64_sync_handler+0x120/0x130
 => el0t_64_sync+0x190/0x198
    sshd-session-16754   [000] ..... 493933.896301: __arm64_sys_write+0x4/0x40 <-invoke_syscall+0x50/0x120
    sshd-session-16754   [000] ..... 493933.896304: <stack trace>
 => __arm64_sys_write+0x8/0x40
 => invoke_syscall+0x50/0x120
 => el0_svc_common.constprop.0+0x48/0xf0
 => do_el0_svc+0x24/0x38
 => el0_svc+0x30/0xf8
 => el0t_64_sync_handler+0x120/0x130
 => el0t_64_sync+0x190/0x198
    sshd-session-16754   [000] ..... 493933.922551: __arm64_sys_write+0x4/0x40 <-invoke_syscall+0x50/0x120
    sshd-session-16754   [000] ..... 493933.922555: <stack trace>
 => __arm64_sys_write+0x8/0x40
 => invoke_syscall+0x50/0x120
 => el0_svc_common.constprop.0+0x48/0xf0
 => do_el0_svc+0x24/0x38
 => el0_svc+0x30/0xf8
 => el0t_64_sync_handler+0x120/0x130
 => el0t_64_sync+0x190/0x198
    sshd-session-16754   [000] ..... 493933.944982: __arm64_sys_write+0x4/0x40 <-invoke_syscall+0x50/0x120
    sshd-session-16754   [000] ..... 493933.944985: <stack trace>
 => __arm64_sys_write+0x8/0x40
 => invoke_syscall+0x50/0x120
 => el0_svc_common.constprop.0+0x48/0xf0
 => do_el0_svc+0x24/0x38
 => el0_svc+0x30/0xf8
 => el0t_64_sync_handler+0x120/0x130
 => el0t_64_sync+0x190/0x198
    sshd-session-16754   [000] ..... 493934.042468: __arm64_sys_write+0x4/0x40 <-invoke_syscall+0x50/0x120
    sshd-session-16754   [000] ..... 493934.042471: <stack trace>
 => __arm64_sys_write+0x8/0x40
 => invoke_syscall+0x50/0x120
 => el0_svc_common.constprop.0+0x48/0xf0
 => do_el0_svc+0x24/0x38
 => el0_svc+0x30/0xf8
 => el0t_64_sync_handler+0x120/0x130
 => el0t_64_sync+0x190/0x198
    sshd-session-16754   [000] ..... 493934.071550: __arm64_sys_write+0x4/0x40 <-invoke_syscall+0x50/0x120
    sshd-session-16754   [000] ..... 493934.071553: <stack trace>
 => __arm64_sys_write+0x8/0x40
 => invoke_syscall+0x50/0x120
 => el0_svc_common.constprop.0+0x48/0xf0
 => do_el0_svc+0x24/0x38
 => el0_svc+0x30/0xf8
 => el0t_64_sync_handler+0x120/0x130
 => el0t_64_sync+0x190/0x198
    sshd-session-16754   [000] ..... 493934.086551: __arm64_sys_write+0x4/0x40 <-invoke_syscall+0x50/0x120
    sshd-session-16754   [000] ..... 493934.086555: <stack trace>
 => __arm64_sys_write+0x8/0x40
 => invoke_syscall+0x50/0x120
 => el0_svc_common.constprop.0+0x48/0xf0
 => do_el0_svc+0x24/0x38
 => el0_svc+0x30/0xf8
 => el0t_64_sync_handler+0x120/0x130
 => el0t_64_sync+0x190/0x198
    sshd-session-16754   [000] ..... 493934.109989: __arm64_sys_write+0x4/0x40 <-invoke_syscall+0x50/0x120
    sshd-session-16754   [000] ..... 493934.109992: <stack trace>
 => __arm64_sys_write+0x8/0x40
 => invoke_syscall+0x50/0x120
 => el0_svc_common.constprop.0+0x48/0xf0
 => do_el0_svc+0x24/0x38
 => el0_svc+0x30/0xf8
 => el0t_64_sync_handler+0x120/0x130
 => el0t_64_sync+0x190/0x198
    sshd-session-16754   [000] ..... 493934.137123: __arm64_sys_write+0x4/0x40 <-invoke_syscall+0x50/0x120
    sshd-session-16754   [000] ..... 493934.137127: <stack trace>
 => __arm64_sys_write+0x8/0x40
 => invoke_syscall+0x50/0x120
 => el0_svc_common.constprop.0+0x48/0xf0
 => do_el0_svc+0x24/0x38
 => el0_svc+0x30/0xf8
 => el0t_64_sync_handler+0x120/0x130
 => el0t_64_sync+0x190/0x198
    sshd-session-16754   [000] ..... 493934.157080: __arm64_sys_write+0x4/0x40 <-invoke_syscall+0x50/0x120
    sshd-session-16754   [000] ..... 493934.157083: <stack trace>
 => __arm64_sys_write+0x8/0x40
 => invoke_syscall+0x50/0x120
 => el0_svc_common.constprop.0+0x48/0xf0
 => do_el0_svc+0x24/0x38
 => el0_svc+0x30/0xf8
 => el0t_64_sync_handler+0x120/0x130
 => el0t_64_sync+0x190/0x198
    sshd-session-16754   [000] ..... 493934.180919: __arm64_sys_write+0x4/0x40 <-invoke_syscall+0x50/0x120
    sshd-session-16754   [000] ..... 493934.180922: <stack trace>
 => __arm64_sys_write+0x8/0x40
 => invoke_syscall+0x50/0x120
 => el0_svc_common.constprop.0+0x48/0xf0
 => do_el0_svc+0x24/0x38
 => el0_svc+0x30/0xf8
 => el0t_64_sync_handler+0x120/0x130
 => el0t_64_sync+0x190/0x198
            bash-16773   [003] ..... 493934.181073: __arm64_sys_write+0x4/0x40 <-invoke_syscall+0x50/0x120
            bash-16773   [003] ..... 493934.181076: <stack trace>
 => __arm64_sys_write+0x8/0x40
 => invoke_syscall+0x50/0x120
 => el0_svc_common.constprop.0+0x48/0xf0
 => do_el0_svc+0x24/0x38
 => el0_svc+0x30/0xf8
 => el0t_64_sync_handler+0x120/0x130
 => el0t_64_sync+0x190/0x198
    sshd-session-16754   [000] ..... 493934.181201: __arm64_sys_write+0x4/0x40 <-invoke_syscall+0x50/0x120
    sshd-session-16754   [000] ..... 493934.181203: <stack trace>
 => __arm64_sys_write+0x8/0x40
 => invoke_syscall+0x50/0x120
 => el0_svc_common.constprop.0+0x48/0xf0
 => do_el0_svc+0x24/0x38
 => el0_svc+0x30/0xf8
 => el0t_64_sync_handler+0x120/0x130
 => el0t_64_sync+0x190/0x198
    sshd-session-16754   [000] ..... 493934.203520: __arm64_sys_write+0x4/0x40 <-invoke_syscall+0x50/0x120
    sshd-session-16754   [000] ..... 493934.203523: <stack trace>
 => __arm64_sys_write+0x8/0x40
 => invoke_syscall+0x50/0x120
 => el0_svc_common.constprop.0+0x48/0xf0
 => do_el0_svc+0x24/0x38
 => el0_svc+0x30/0xf8
 => el0t_64_sync_handler+0x120/0x130
 => el0t_64_sync+0x190/0x198
    sshd-session-16754   [000] ..... 493934.228151: __arm64_sys_write+0x4/0x40 <-invoke_syscall+0x50/0x120
    sshd-session-16754   [000] ..... 493934.228154: <stack trace>
 => __arm64_sys_write+0x8/0x40
 => invoke_syscall+0x50/0x120
 => el0_svc_common.constprop.0+0x48/0xf0
 => do_el0_svc+0x24/0x38
 => el0_svc+0x30/0xf8
 => el0t_64_sync_handler+0x120/0x130
 => el0t_64_sync+0x190/0x198
    sshd-session-16754   [000] ..... 493934.251098: __arm64_sys_write+0x4/0x40 <-invoke_syscall+0x50/0x120
    sshd-session-16754   [000] ..... 493934.251102: <stack trace>
 => __arm64_sys_write+0x8/0x40
 => invoke_syscall+0x50/0x120
 => el0_svc_common.constprop.0+0x48/0xf0
 => do_el0_svc+0x24/0x38
 => el0_svc+0x30/0xf8
 => el0t_64_sync_handler+0x120/0x130
 => el0t_64_sync+0x190/0x198
    sshd-session-16754   [000] ..... 493934.274597: __arm64_sys_write+0x4/0x40 <-invoke_syscall+0x50/0x120
    sshd-session-16754   [000] ..... 493934.274600: <stack trace>
 => __arm64_sys_write+0x8/0x40
 => invoke_syscall+0x50/0x120
 => el0_svc_common.constprop.0+0x48/0xf0
 => do_el0_svc+0x24/0x38
 => el0_svc+0x30/0xf8
 => el0t_64_sync_handler+0x120/0x130
 => el0t_64_sync+0x190/0x198
            bash-16773   [003] ..... 493934.274698: __arm64_sys_write+0x4/0x40 <-invoke_syscall+0x50/0x120
            bash-16773   [003] ..... 493934.274701: <stack trace>
 => __arm64_sys_write+0x8/0x40
 => invoke_syscall+0x50/0x120
 => el0_svc_common.constprop.0+0x48/0xf0
 => do_el0_svc+0x24/0x38
 => el0_svc+0x30/0xf8
 => el0t_64_sync_handler+0x120/0x130
 => el0t_64_sync+0x190/0x198
    sshd-session-16754   [000] ..... 493934.274834: __arm64_sys_write+0x4/0x40 <-invoke_syscall+0x50/0x120
    sshd-session-16754   [000] ..... 493934.274837: <stack trace>
 => __arm64_sys_write+0x8/0x40
 => invoke_syscall+0x50/0x120
 => el0_svc_common.constprop.0+0x48/0xf0
 => do_el0_svc+0x24/0x38
 => el0_svc+0x30/0xf8
 => el0t_64_sync_handler+0x120/0x130
 => el0t_64_sync+0x190/0x198
    sshd-session-16754   [000] ..... 493934.295085: __arm64_sys_write+0x4/0x40 <-invoke_syscall+0x50/0x120
    sshd-session-16754   [000] ..... 493934.295089: <stack trace>
 => __arm64_sys_write+0x8/0x40
 => invoke_syscall+0x50/0x120
 => el0_svc_common.constprop.0+0x48/0xf0
 => do_el0_svc+0x24/0x38
 => el0_svc+0x30/0xf8
 => el0t_64_sync_handler+0x120/0x130
 => el0t_64_sync+0x190/0x198
    sshd-session-16754   [000] ..... 493934.319009: __arm64_sys_write+0x4/0x40 <-invoke_syscall+0x50/0x120
    sshd-session-16754   [000] ..... 493934.319012: <stack trace>
 => __arm64_sys_write+0x8/0x40
 => invoke_syscall+0x50/0x120
 => el0_svc_common.constprop.0+0x48/0xf0
 => do_el0_svc+0x24/0x38
 => el0_svc+0x30/0xf8
 => el0t_64_sync_handler+0x120/0x130
 => el0t_64_sync+0x190/0x198
    sshd-session-16754   [000] ..... 493934.342483: __arm64_sys_write+0x4/0x40 <-invoke_syscall+0x50/0x120
    sshd-session-16754   [000] ..... 493934.342487: <stack trace>
 => __arm64_sys_write+0x8/0x40
 => invoke_syscall+0x50/0x120
 => el0_svc_common.constprop.0+0x48/0xf0
 => do_el0_svc+0x24/0x38
 => el0_svc+0x30/0xf8
 => el0t_64_sync_handler+0x120/0x130
 => el0t_64_sync+0x190/0x198
            bash-16773   [003] ..... 493934.342604: __arm64_sys_write+0x4/0x40 <-invoke_syscall+0x50/0x120
            bash-16773   [003] ..... 493934.342607: <stack trace>
 => __arm64_sys_write+0x8/0x40
 => invoke_syscall+0x50/0x120
 => el0_svc_common.constprop.0+0x48/0xf0
 => do_el0_svc+0x24/0x38
 => el0_svc+0x30/0xf8
 => el0t_64_sync_handler+0x120/0x130
 => el0t_64_sync+0x190/0x198
    sshd-session-16754   [000] ..... 493934.342743: __arm64_sys_write+0x4/0x40 <-invoke_syscall+0x50/0x120
    sshd-session-16754   [000] ..... 493934.342747: <stack trace>
 => __arm64_sys_write+0x8/0x40
 => invoke_syscall+0x50/0x120
 => el0_svc_common.constprop.0+0x48/0xf0
 => do_el0_svc+0x24/0x38
 => el0_svc+0x30/0xf8
 => el0t_64_sync_handler+0x120/0x130
 => el0t_64_sync+0x190/0x198
    sshd-session-16754   [000] ..... 493934.363503: __arm64_sys_write+0x4/0x40 <-invoke_syscall+0x50/0x120
    sshd-session-16754   [000] ..... 493934.363506: <stack trace>
 => __arm64_sys_write+0x8/0x40
 => invoke_syscall+0x50/0x120
 => el0_svc_common.constprop.0+0x48/0xf0
 => do_el0_svc+0x24/0x38
 => el0_svc+0x30/0xf8
 => el0t_64_sync_handler+0x120/0x130
 => el0t_64_sync+0x190/0x198
    sshd-session-16754   [000] ..... 493934.387296: __arm64_sys_write+0x4/0x40 <-invoke_syscall+0x50/0x120
    sshd-session-16754   [000] ..... 493934.387299: <stack trace>
 => __arm64_sys_write+0x8/0x40
 => invoke_syscall+0x50/0x120
 => el0_svc_common.constprop.0+0x48/0xf0
 => do_el0_svc+0x24/0x38
 => el0_svc+0x30/0xf8
 => el0t_64_sync_handler+0x120/0x130
 => el0t_64_sync+0x190/0x198
    sshd-session-16754   [000] ..... 493934.411425: __arm64_sys_write+0x4/0x40 <-invoke_syscall+0x50/0x120
    sshd-session-16754   [000] ..... 493934.411428: <stack trace>
 => __arm64_sys_write+0x8/0x40
 => invoke_syscall+0x50/0x120
 => el0_svc_common.constprop.0+0x48/0xf0
 => do_el0_svc+0x24/0x38
 => el0_svc+0x30/0xf8
 => el0t_64_sync_handler+0x120/0x130
 => el0t_64_sync+0x190/0x198
    sshd-session-16754   [000] ..... 493934.434788: __arm64_sys_write+0x4/0x40 <-invoke_syscall+0x50/0x120
    sshd-session-16754   [000] ..... 493934.434791: <stack trace>
 => __arm64_sys_write+0x8/0x40
 => invoke_syscall+0x50/0x120
 => el0_svc_common.constprop.0+0x48/0xf0
 => do_el0_svc+0x24/0x38
 => el0_svc+0x30/0xf8
 => el0t_64_sync_handler+0x120/0x130
 => el0t_64_sync+0x190/0x198
    sshd-session-16754   [000] ..... 493934.457209: __arm64_sys_write+0x4/0x40 <-invoke_syscall+0x50/0x120
    sshd-session-16754   [000] ..... 493934.457212: <stack trace>
 => __arm64_sys_write+0x8/0x40
 => invoke_syscall+0x50/0x120
 => el0_svc_common.constprop.0+0x48/0xf0
 => do_el0_svc+0x24/0x38
 => el0_svc+0x30/0xf8
 => el0t_64_sync_handler+0x120/0x130
 => el0t_64_sync+0x190/0x198
    sshd-session-16754   [000] ..... 493934.566393: __arm64_sys_write+0x4/0x40 <-invoke_syscall+0x50/0x120
    sshd-session-16754   [000] ..... 493934.566397: <stack trace>
 => __arm64_sys_write+0x8/0x40
 => invoke_syscall+0x50/0x120
 => el0_svc_common.constprop.0+0x48/0xf0
 => do_el0_svc+0x24/0x38
 => el0_svc+0x30/0xf8
 => el0t_64_sync_handler+0x120/0x130
 => el0t_64_sync+0x190/0x198
    sshd-session-16754   [000] ..... 493934.580264: __arm64_sys_write+0x4/0x40 <-invoke_syscall+0x50/0x120
    sshd-session-16754   [000] ..... 493934.580268: <stack trace>
 => __arm64_sys_write+0x8/0x40
 => invoke_syscall+0x50/0x120
 => el0_svc_common.constprop.0+0x48/0xf0
 => do_el0_svc+0x24/0x38
 => el0_svc+0x30/0xf8
 => el0t_64_sync_handler+0x120/0x130
 => el0t_64_sync+0x190/0x198
    sshd-session-16754   [000] ..... 493934.599084: __arm64_sys_write+0x4/0x40 <-invoke_syscall+0x50/0x120
    sshd-session-16754   [000] ..... 493934.599088: <stack trace>
 => __arm64_sys_write+0x8/0x40
 => invoke_syscall+0x50/0x120
 => el0_svc_common.constprop.0+0x48/0xf0
 => do_el0_svc+0x24/0x38
 => el0_svc+0x30/0xf8
 => el0t_64_sync_handler+0x120/0x130
 => el0t_64_sync+0x190/0x198
    sshd-session-16754   [000] ..... 493934.622092: __arm64_sys_write+0x4/0x40 <-invoke_syscall+0x50/0x120
    sshd-session-16754   [000] ..... 493934.622095: <stack trace>
 => __arm64_sys_write+0x8/0x40
 => invoke_syscall+0x50/0x120
 => el0_svc_common.constprop.0+0x48/0xf0
 => do_el0_svc+0x24/0x38
 => el0_svc+0x30/0xf8
 => el0t_64_sync_handler+0x120/0x130
 => el0t_64_sync+0x190/0x198
    sshd-session-16754   [002] ..... 493934.649096: __arm64_sys_write+0x4/0x40 <-invoke_syscall+0x50/0x120
    sshd-session-16754   [002] ..... 493934.649101: <stack trace>
 => __arm64_sys_write+0x8/0x40
 => invoke_syscall+0x50/0x120
 => el0_svc_common.constprop.0+0x48/0xf0
 => do_el0_svc+0x24/0x38
 => el0_svc+0x30/0xf8
 => el0t_64_sync_handler+0x120/0x130
 => el0t_64_sync+0x190/0x198
    sshd-session-16754   [002] ..... 493934.672918: __arm64_sys_write+0x4/0x40 <-invoke_syscall+0x50/0x120
    sshd-session-16754   [002] ..... 493934.672921: <stack trace>
 => __arm64_sys_write+0x8/0x40
 => invoke_syscall+0x50/0x120
 => el0_svc_common.constprop.0+0x48/0xf0
 => do_el0_svc+0x24/0x38
 => el0_svc+0x30/0xf8
 => el0t_64_sync_handler+0x120/0x130
 => el0t_64_sync+0x190/0x198
    sshd-session-16754   [002] ..... 493934.689837: __arm64_sys_write+0x4/0x40 <-invoke_syscall+0x50/0x120
    sshd-session-16754   [002] ..... 493934.689841: <stack trace>
 => __arm64_sys_write+0x8/0x40
 => invoke_syscall+0x50/0x120
 => el0_svc_common.constprop.0+0x48/0xf0
 => do_el0_svc+0x24/0x38
 => el0_svc+0x30/0xf8
 => el0t_64_sync_handler+0x120/0x130
 => el0t_64_sync+0x190/0x198
    sshd-session-16754   [002] ..... 493934.713626: __arm64_sys_write+0x4/0x40 <-invoke_syscall+0x50/0x120
    sshd-session-16754   [002] ..... 493934.713629: <stack trace>
 => __arm64_sys_write+0x8/0x40
 => invoke_syscall+0x50/0x120
 => el0_svc_common.constprop.0+0x48/0xf0
 => do_el0_svc+0x24/0x38
 => el0_svc+0x30/0xf8
 => el0t_64_sync_handler+0x120/0x130
 => el0t_64_sync+0x190/0x198
    sshd-session-16754   [002] ..... 493934.734438: __arm64_sys_write+0x4/0x40 <-invoke_syscall+0x50/0x120
    sshd-session-16754   [002] ..... 493934.734441: <stack trace>
 => __arm64_sys_write+0x8/0x40
 => invoke_syscall+0x50/0x120
 => el0_svc_common.constprop.0+0x48/0xf0
 => do_el0_svc+0x24/0x38
 => el0_svc+0x30/0xf8
 => el0t_64_sync_handler+0x120/0x130
 => el0t_64_sync+0x190/0x198
    sshd-session-16754   [002] ..... 493934.755962: __arm64_sys_write+0x4/0x40 <-invoke_syscall+0x50/0x120
    sshd-session-16754   [002] ..... 493934.755966: <stack trace>
 => __arm64_sys_write+0x8/0x40
 => invoke_syscall+0x50/0x120
 => el0_svc_common.constprop.0+0x48/0xf0
 => do_el0_svc+0x24/0x38
 => el0_svc+0x30/0xf8
 => el0t_64_sync_handler+0x120/0x130
 => el0t_64_sync+0x190/0x198
    sshd-session-16754   [002] ..... 493934.779138: __arm64_sys_write+0x4/0x40 <-invoke_syscall+0x50/0x120
    sshd-session-16754   [002] ..... 493934.779142: <stack trace>
 => __arm64_sys_write+0x8/0x40
 => invoke_syscall+0x50/0x120
 => el0_svc_common.constprop.0+0x48/0xf0
 => do_el0_svc+0x24/0x38
 => el0_svc+0x30/0xf8
 => el0t_64_sync_handler+0x120/0x130
 => el0t_64_sync+0x190/0x198
    sshd-session-16754   [002] ..... 493934.803168: __arm64_sys_write+0x4/0x40 <-invoke_syscall+0x50/0x120
    sshd-session-16754   [002] ..... 493934.803171: <stack trace>
 => __arm64_sys_write+0x8/0x40
 => invoke_syscall+0x50/0x120
 => el0_svc_common.constprop.0+0x48/0xf0
 => do_el0_svc+0x24/0x38
 => el0_svc+0x30/0xf8
 => el0t_64_sync_handler+0x120/0x130
 => el0t_64_sync+0x190/0x198
    sshd-session-16754   [002] ..... 493934.827320: __arm64_sys_write+0x4/0x40 <-invoke_syscall+0x50/0x120
    sshd-session-16754   [002] ..... 493934.827324: <stack trace>
 => __arm64_sys_write+0x8/0x40
 => invoke_syscall+0x50/0x120
 => el0_svc_common.constprop.0+0x48/0xf0
 => do_el0_svc+0x24/0x38
 => el0_svc+0x30/0xf8
 => el0t_64_sync_handler+0x120/0x130
 => el0t_64_sync+0x190/0x198
    sshd-session-16754   [002] ..... 493934.850974: __arm64_sys_write+0x4/0x40 <-invoke_syscall+0x50/0x120
    sshd-session-16754   [002] ..... 493934.850977: <stack trace>
 => __arm64_sys_write+0x8/0x40
 => invoke_syscall+0x50/0x120
 => el0_svc_common.constprop.0+0x48/0xf0
 => do_el0_svc+0x24/0x38
 => el0_svc+0x30/0xf8
 => el0t_64_sync_handler+0x120/0x130
 => el0t_64_sync+0x190/0x198
    sshd-session-16754   [002] ..... 493934.898648: __arm64_sys_write+0x4/0x40 <-invoke_syscall+0x50/0x120
    sshd-session-16754   [002] ..... 493934.898651: <stack trace>
 => __arm64_sys_write+0x8/0x40
 => invoke_syscall+0x50/0x120
 => el0_svc_common.constprop.0+0x48/0xf0
 => do_el0_svc+0x24/0x38
 => el0_svc+0x30/0xf8
 => el0t_64_sync_handler+0x120/0x130
 => el0t_64_sync+0x190/0x198
    sshd-session-16754   [002] ..... 493934.898958: __arm64_sys_write+0x4/0x40 <-invoke_syscall+0x50/0x120
    sshd-session-16754   [002] ..... 493934.898962: <stack trace>
 => __arm64_sys_write+0x8/0x40
 => invoke_syscall+0x50/0x120
 => el0_svc_common.constprop.0+0x48/0xf0
 => do_el0_svc+0x24/0x38
 => el0_svc+0x30/0xf8
 => el0t_64_sync_handler+0x120/0x130
 => el0t_64_sync+0x190/0x198
    sshd-session-16754   [002] ..... 493934.922395: __arm64_sys_write+0x4/0x40 <-invoke_syscall+0x50/0x120
    sshd-session-16754   [002] ..... 493934.922399: <stack trace>
 => __arm64_sys_write+0x8/0x40
 => invoke_syscall+0x50/0x120
 => el0_svc_common.constprop.0+0x48/0xf0
 => do_el0_svc+0x24/0x38
 => el0_svc+0x30/0xf8
 => el0t_64_sync_handler+0x120/0x130
 => el0t_64_sync+0x190/0x198
    sshd-session-16754   [002] ..... 493934.945279: __arm64_sys_write+0x4/0x40 <-invoke_syscall+0x50/0x120
    sshd-session-16754   [002] ..... 493934.945282: <stack trace>
 => __arm64_sys_write+0x8/0x40
 => invoke_syscall+0x50/0x120
 => el0_svc_common.constprop.0+0x48/0xf0
 => do_el0_svc+0x24/0x38
 => el0_svc+0x30/0xf8
 => el0t_64_sync_handler+0x120/0x130
 => el0t_64_sync+0x190/0x198
    sshd-session-16754   [002] ..... 493934.968095: __arm64_sys_write+0x4/0x40 <-invoke_syscall+0x50/0x120
    sshd-session-16754   [002] ..... 493934.968098: <stack trace>
 => __arm64_sys_write+0x8/0x40
 => invoke_syscall+0x50/0x120
 => el0_svc_common.constprop.0+0x48/0xf0
 => do_el0_svc+0x24/0x38
 => el0_svc+0x30/0xf8
 => el0t_64_sync_handler+0x120/0x130
 => el0t_64_sync+0x190/0x198
    sshd-session-16754   [002] ..... 493934.994419: __arm64_sys_write+0x4/0x40 <-invoke_syscall+0x50/0x120
    sshd-session-16754   [002] ..... 493934.994422: <stack trace>
 => __arm64_sys_write+0x8/0x40
 => invoke_syscall+0x50/0x120
 => el0_svc_common.constprop.0+0x48/0xf0
 => do_el0_svc+0x24/0x38
 => el0_svc+0x30/0xf8
 => el0t_64_sync_handler+0x120/0x130
 => el0t_64_sync+0x190/0x198
    sshd-session-16754   [002] ..... 493935.088612: __arm64_sys_write+0x4/0x40 <-invoke_syscall+0x50/0x120
    sshd-session-16754   [002] ..... 493935.088616: <stack trace>
 => __arm64_sys_write+0x8/0x40
 => invoke_syscall+0x50/0x120
 => el0_svc_common.constprop.0+0x48/0xf0
 => do_el0_svc+0x24/0x38
 => el0_svc+0x30/0xf8
 => el0t_64_sync_handler+0x120/0x130
 => el0t_64_sync+0x190/0x198
    sshd-session-16754   [002] ..... 493935.088805: __arm64_sys_write+0x4/0x40 <-invoke_syscall+0x50/0x120
    sshd-session-16754   [002] ..... 493935.088808: <stack trace>
 => __arm64_sys_write+0x8/0x40
 => invoke_syscall+0x50/0x120
 => el0_svc_common.constprop.0+0x48/0xf0
 => do_el0_svc+0x24/0x38
 => el0_svc+0x30/0xf8
 => el0t_64_sync_handler+0x120/0x130
 => el0t_64_sync+0x190/0x198
            bash-16773   [003] ..... 493935.088903: __arm64_sys_write+0x4/0x40 <-invoke_syscall+0x50/0x120
            bash-16773   [003] ..... 493935.088907: <stack trace>
 => __arm64_sys_write+0x8/0x40
 => invoke_syscall+0x50/0x120
 => el0_svc_common.constprop.0+0x48/0xf0
 => do_el0_svc+0x24/0x38
 => el0_svc+0x30/0xf8
 => el0t_64_sync_handler+0x120/0x130
 => el0t_64_sync+0x190/0x198
            bash-16773   [003] ..... 493935.089002: __arm64_sys_write+0x4/0x40 <-invoke_syscall+0x50/0x120
            bash-16773   [003] ..... 493935.089005: <stack trace>
 => __arm64_sys_write+0x8/0x40
 => invoke_syscall+0x50/0x120
 => el0_svc_common.constprop.0+0x48/0xf0
 => do_el0_svc+0x24/0x38
 => el0_svc+0x30/0xf8
 => el0t_64_sync_handler+0x120/0x130
 => el0t_64_sync+0x190/0x198
    sshd-session-16754   [002] ..... 493935.089234: __arm64_sys_write+0x4/0x40 <-invoke_syscall+0x50/0x120
    sshd-session-16754   [002] ..... 493935.089238: <stack trace>
 => __arm64_sys_write+0x8/0x40
 => invoke_syscall+0x50/0x120
 => el0_svc_common.constprop.0+0x48/0xf0
 => do_el0_svc+0x24/0x38
 => el0_svc+0x30/0xf8
 => el0t_64_sync_handler+0x120/0x130
 => el0t_64_sync+0x190/0x198
   get_ftrace.sh-16869   [001] ..... 493935.096933: __arm64_sys_write+0x4/0x40 <-invoke_syscall+0x50/0x120
   get_ftrace.sh-16869   [001] ..... 493935.096944: <stack trace>
 => __arm64_sys_write+0x8/0x40
 => invoke_syscall+0x50/0x120
 => el0_svc_common.constprop.0+0x48/0xf0
 => do_el0_svc+0x24/0x38
 => el0_svc+0x30/0xf8
 => el0t_64_sync_handler+0x120/0x130
 => el0t_64_sync+0x190/0x198
