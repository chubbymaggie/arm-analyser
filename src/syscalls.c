// auto-generated file, use 'make syscalls.c' to re-generate it

char *arm_syscall_name(const int syscall_no)
{
	switch (syscall_no) {
		case 0:	return "restart_syscall";
		case 1:	return "exit";
		case 2:	return "fork";
		case 3:	return "read";
		case 4:	return "write";
		case 5:	return "open";
		case 6:	return "close";
		case 8:	return "creat";
		case 9:	return "link";
		case 10:	return "unlink";
		case 11:	return "execve";
		case 12:	return "chdir";
		case 13:	return "time";
		case 14:	return "mknod";
		case 15:	return "chmod";
		case 16:	return "lchown";
		case 19:	return "lseek";
		case 20:	return "getpid";
		case 21:	return "mount";
		case 22:	return "umount";
		case 23:	return "setuid";
		case 24:	return "getuid";
		case 25:	return "stime";
		case 26:	return "ptrace";
		case 27:	return "alarm";
		case 29:	return "pause";
		case 30:	return "utime";
		case 33:	return "access";
		case 34:	return "nice";
		case 36:	return "sync";
		case 37:	return "kill";
		case 38:	return "rename";
		case 39:	return "mkdir";
		case 40:	return "rmdir";
		case 41:	return "dup";
		case 42:	return "pipe";
		case 43:	return "times";
		case 45:	return "brk";
		case 46:	return "setgid";
		case 47:	return "getgid";
		case 49:	return "geteuid";
		case 50:	return "getegid";
		case 51:	return "acct";
		case 52:	return "umount2";
		case 54:	return "ioctl";
		case 55:	return "fcntl";
		case 57:	return "setpgid";
		case 60:	return "umask";
		case 61:	return "chroot";
		case 62:	return "ustat";
		case 63:	return "dup2";
		case 64:	return "getppid";
		case 65:	return "getpgrp";
		case 66:	return "setsid";
		case 67:	return "sigaction";
		case 70:	return "setreuid";
		case 71:	return "setregid";
		case 72:	return "sigsuspend";
		case 73:	return "sigpending";
		case 74:	return "sethostname";
		case 75:	return "setrlimit";
		case 76:	return "getrlimit";
		case 77:	return "getrusage";
		case 78:	return "gettimeofday";
		case 79:	return "settimeofday";
		case 80:	return "getgroups";
		case 81:	return "setgroups";
		case 82:	return "select";
		case 83:	return "symlink";
		case 85:	return "readlink";
		case 86:	return "uselib";
		case 87:	return "swapon";
		case 88:	return "reboot";
		case 89:	return "readdir";
		case 90:	return "mmap";
		case 91:	return "munmap";
		case 92:	return "truncate";
		case 93:	return "ftruncate";
		case 94:	return "fchmod";
		case 95:	return "fchown";
		case 96:	return "getpriority";
		case 97:	return "setpriority";
		case 99:	return "statfs";
		case 100:	return "fstatfs";
		case 102:	return "socketcall";
		case 103:	return "syslog";
		case 104:	return "setitimer";
		case 105:	return "getitimer";
		case 106:	return "stat";
		case 107:	return "lstat";
		case 108:	return "fstat";
		case 111:	return "vhangup";
		case 113:	return "syscall";
		case 114:	return "wait4";
		case 115:	return "swapoff";
		case 116:	return "sysinfo";
		case 117:	return "ipc";
		case 118:	return "fsync";
		case 119:	return "sigreturn";
		case 120:	return "clone";
		case 121:	return "setdomainname";
		case 122:	return "uname";
		case 124:	return "adjtimex";
		case 125:	return "mprotect";
		case 126:	return "sigprocmask";
		case 128:	return "init_module";
		case 129:	return "delete_module";
		case 131:	return "quotactl";
		case 132:	return "getpgid";
		case 133:	return "fchdir";
		case 134:	return "bdflush";
		case 135:	return "sysfs";
		case 136:	return "personality";
		case 138:	return "setfsuid";
		case 139:	return "setfsgid";
		case 140:	return "_llseek";
		case 141:	return "getdents";
		case 142:	return "_newselect";
		case 143:	return "flock";
		case 144:	return "msync";
		case 145:	return "readv";
		case 146:	return "writev";
		case 147:	return "getsid";
		case 148:	return "fdatasync";
		case 149:	return "_sysctl";
		case 150:	return "mlock";
		case 151:	return "munlock";
		case 152:	return "mlockall";
		case 153:	return "munlockall";
		case 154:	return "sched_setparam";
		case 155:	return "sched_getparam";
		case 156:	return "sched_setscheduler";
		case 157:	return "sched_getscheduler";
		case 158:	return "sched_yield";
		case 159:	return "sched_get_priority_max";
		case 160:	return "sched_get_priority_min";
		case 161:	return "sched_rr_get_interval";
		case 162:	return "nanosleep";
		case 163:	return "mremap";
		case 164:	return "setresuid";
		case 165:	return "getresuid";
		case 168:	return "poll";
		case 169:	return "nfsservctl";
		case 170:	return "setresgid";
		case 171:	return "getresgid";
		case 172:	return "prctl";
		case 173:	return "rt_sigreturn";
		case 174:	return "rt_sigaction";
		case 175:	return "rt_sigprocmask";
		case 176:	return "rt_sigpending";
		case 177:	return "rt_sigtimedwait";
		case 178:	return "rt_sigqueueinfo";
		case 179:	return "rt_sigsuspend";
		case 180:	return "pread64";
		case 181:	return "pwrite64";
		case 182:	return "chown";
		case 183:	return "getcwd";
		case 184:	return "capget";
		case 185:	return "capset";
		case 186:	return "sigaltstack";
		case 187:	return "sendfile";
		case 190:	return "vfork";
		case 191:	return "ugetrlimit";
		case 192:	return "mmap2";
		case 193:	return "truncate64";
		case 194:	return "ftruncate64";
		case 195:	return "stat64";
		case 196:	return "lstat64";
		case 197:	return "fstat64";
		case 198:	return "lchown32";
		case 199:	return "getuid32";
		case 200:	return "getgid32";
		case 201:	return "geteuid32";
		case 202:	return "getegid32";
		case 203:	return "setreuid32";
		case 204:	return "setregid32";
		case 205:	return "getgroups32";
		case 206:	return "setgroups32";
		case 207:	return "fchown32";
		case 208:	return "setresuid32";
		case 209:	return "getresuid32";
		case 210:	return "setresgid32";
		case 211:	return "getresgid32";
		case 212:	return "chown32";
		case 213:	return "setuid32";
		case 214:	return "setgid32";
		case 215:	return "setfsuid32";
		case 216:	return "setfsgid32";
		case 217:	return "getdents64";
		case 218:	return "pivot_root";
		case 219:	return "mincore";
		case 220:	return "madvise";
		case 221:	return "fcntl64";
		case 224:	return "gettid";
		case 225:	return "readahead";
		case 226:	return "setxattr";
		case 227:	return "lsetxattr";
		case 228:	return "fsetxattr";
		case 229:	return "getxattr";
		case 230:	return "lgetxattr";
		case 231:	return "fgetxattr";
		case 232:	return "listxattr";
		case 233:	return "llistxattr";
		case 234:	return "flistxattr";
		case 235:	return "removexattr";
		case 236:	return "lremovexattr";
		case 237:	return "fremovexattr";
		case 238:	return "tkill";
		case 239:	return "sendfile64";
		case 240:	return "futex";
		case 241:	return "sched_setaffinity";
		case 242:	return "sched_getaffinity";
		case 243:	return "io_setup";
		case 244:	return "io_destroy";
		case 245:	return "io_getevents";
		case 246:	return "io_submit";
		case 247:	return "io_cancel";
		case 248:	return "exit_group";
		case 249:	return "lookup_dcookie";
		case 250:	return "epoll_create";
		case 251:	return "epoll_ctl";
		case 252:	return "epoll_wait";
		case 253:	return "remap_file_pages";
		case 256:	return "set_tid_address";
		case 257:	return "timer_create";
		case 258:	return "timer_settime";
		case 259:	return "timer_gettime";
		case 260:	return "timer_getoverrun";
		case 261:	return "timer_delete";
		case 262:	return "clock_settime";
		case 263:	return "clock_gettime";
		case 264:	return "clock_getres";
		case 265:	return "clock_nanosleep";
		case 266:	return "statfs64";
		case 267:	return "fstatfs64";
		case 268:	return "tgkill";
		case 269:	return "utimes";
		case 270:	return "arm_fadvise64_64";
		case 271:	return "pciconfig_iobase";
		case 272:	return "pciconfig_read";
		case 273:	return "pciconfig_write";
		case 274:	return "mq_open";
		case 275:	return "mq_unlink";
		case 276:	return "mq_timedsend";
		case 277:	return "mq_timedreceive";
		case 278:	return "mq_notify";
		case 279:	return "mq_getsetattr";
		case 280:	return "waitid";
		case 281:	return "socket";
		case 282:	return "bind";
		case 283:	return "connect";
		case 284:	return "listen";
		case 285:	return "accept";
		case 286:	return "getsockname";
		case 287:	return "getpeername";
		case 288:	return "socketpair";
		case 289:	return "send";
		case 290:	return "sendto";
		case 291:	return "recv";
		case 292:	return "recvfrom";
		case 293:	return "shutdown";
		case 294:	return "setsockopt";
		case 295:	return "getsockopt";
		case 296:	return "sendmsg";
		case 297:	return "recvmsg";
		case 298:	return "semop";
		case 299:	return "semget";
		case 300:	return "semctl";
		case 301:	return "msgsnd";
		case 302:	return "msgrcv";
		case 303:	return "msgget";
		case 304:	return "msgctl";
		case 305:	return "shmat";
		case 306:	return "shmdt";
		case 307:	return "shmget";
		case 308:	return "shmctl";
		case 309:	return "add_key";
		case 310:	return "request_key";
		case 311:	return "keyctl";
		case 312:	return "semtimedop";
		case 313:	return "vserver";
		case 314:	return "ioprio_set";
		case 315:	return "ioprio_get";
		case 316:	return "inotify_init";
		case 317:	return "inotify_add_watch";
		case 318:	return "inotify_rm_watch";
		case 319:	return "mbind";
		case 320:	return "get_mempolicy";
		case 321:	return "set_mempolicy";
		case 322:	return "openat";
		case 323:	return "mkdirat";
		case 324:	return "mknodat";
		case 325:	return "fchownat";
		case 326:	return "futimesat";
		case 327:	return "fstatat64";
		case 328:	return "unlinkat";
		case 329:	return "renameat";
		case 330:	return "linkat";
		case 331:	return "symlinkat";
		case 332:	return "readlinkat";
		case 333:	return "fchmodat";
		case 334:	return "faccessat";
		case 335:	return "pselect6";
		case 336:	return "ppoll";
		case 337:	return "unshare";
		case 338:	return "set_robust_list";
		case 339:	return "get_robust_list";
		case 340:	return "splice";
		case 341:	return "arm_sync_file_range";
		case 342:	return "tee";
		case 343:	return "vmsplice";
		case 344:	return "move_pages";
		case 345:	return "getcpu";
		case 346:	return "epoll_pwait";
		case 347:	return "kexec_load";
		case 348:	return "utimensat";
		case 349:	return "signalfd";
		case 350:	return "timerfd_create";
		case 351:	return "eventfd";
		case 352:	return "fallocate";
		case 353:	return "timerfd_settime";
		case 354:	return "timerfd_gettime";
		case 355:	return "signalfd4";
		case 356:	return "eventfd2";
		case 357:	return "epoll_create1";
		case 358:	return "dup3";
		case 359:	return "pipe2";
		case 360:	return "inotify_init1";
		case 361:	return "preadv";
		case 362:	return "pwritev";
		case 363:	return "rt_tgsigqueueinfo";
		case 364:	return "perf_event_open";
		case 365:	return "recvmmsg";
		case 366:	return "accept4";
		case 367:	return "fanotify_init";
		case 368:	return "fanotify_mark";
		case 369:	return "prlimit64";
		case 370:	return "name_to_handle_at";
		case 371:	return "open_by_handle_at";
		case 372:	return "clock_adjtime";
		case 373:	return "syncfs";
		case 374:	return "sendmmsg";
		case 375:	return "setns";
		case 376:	return "process_vm_readv";
		case 377:	return "process_vm_writev";
		case 379:	return "finit_module";
	}
	return "(unknown)";
}
