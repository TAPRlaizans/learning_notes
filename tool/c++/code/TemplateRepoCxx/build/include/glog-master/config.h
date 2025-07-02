#ifndef GLOG_CONFIG_H
#define GLOG_CONFIG_H

/* Define if you have the `dladdr' function */
/* #undef HAVE_DLADDR */

/* Define to 1 if you have the <dlfcn.h> header file. */
/* #undef HAVE_DLFCN_H */

/* Define if you have the `backtrace' function in <execinfo.h> */
/* #undef HAVE_EXECINFO_BACKTRACE */

/* Define if you have the `backtrace_symbols' function in <execinfo.h> */
/* #undef HAVE_EXECINFO_BACKTRACE_SYMBOLS */

/* Define if you have the `fcntl' function */
/* #undef HAVE_FCNTL */

/* Define to 1 if you have the <glob.h> header file. */
/* #undef HAVE_GLOB_H */

/* define if you have google gmock library */
/* #undef HAVE_LIB_GMOCK */

/* define if you have google gtest library */
/* #undef HAVE_LIB_GTEST */

/* define if you have dbghelp library */
#define HAVE_DBGHELP

/* Define if you have the 'pread' function */
/* #undef HAVE_PREAD */

/* Define if you have the 'posix_fadvise' function in <fcntl.h> */
/* #undef HAVE_POSIX_FADVISE */

/* Define to 1 if you have the <pwd.h> header file. */
/* #undef HAVE_PWD_H */

/* Define if you have the 'pwrite' function */
/* #undef HAVE_PWRITE */

/* Define if you have the 'sigaction' function */
/* #undef HAVE_SIGACTION */

/* Define if you have the `sigaltstack' function */
/* #undef HAVE_SIGALTSTACK */

/* Define to 1 if you have the <syscall.h> header file. */
/* #undef HAVE_SYSCALL_H */

/* Define to 1 if you have the <syslog.h> header file. */
/* #undef HAVE_SYSLOG_H */

/* Define to 1 if you have the <elf.h> header file. */
/* #undef HAVE_ELF_H */

/* Define to 1 if you have the <sys/exec_elf.h> header file. */
/* #undef HAVE_SYS_EXEC_ELF_H */

/* Define to 1 if you have the <link.h> header file. */
/* #undef HAVE_LINK_H */

/* Define to 1 if you have the <sys/syscall.h> header file. */
/* #undef HAVE_SYS_SYSCALL_H */

/* Define to 1 if you have the <sys/time.h> header file. */
/* #undef HAVE_SYS_TIME_H */

/* Define to 1 if you have the <sys/types.h> header file. */
#define HAVE_SYS_TYPES_H

/* Define to 1 if you have the <sys/ucontext.h> header file. */
/* #undef HAVE_SYS_UCONTEXT_H */

/* Define to 1 if you have the <sys/utsname.h> header file. */
/* #undef HAVE_SYS_UTSNAME_H */

/* Define to 1 if you have the <sys/wait.h> header file. */
/* #undef HAVE_SYS_WAIT_H */

/* Define to 1 if you have the <ucontext.h> header file. */
/* #undef HAVE_UCONTEXT_H */

/* Define to 1 if you have the <unistd.h> header file. */
/* #undef HAVE_UNISTD_H */

/* define if you have unwind */
/* #undef HAVE_UNWIND */

/* define if you have libunwind */
/* #undef HAVE_LIBUNWIND */

/* define if symbolize support is available */
#define HAVE_SYMBOLIZE

/* define if localtime_r is available in time.h */
/* #undef HAVE_LOCALTIME_R */

/* define if gmtime_r is available in time.h */
/* #undef HAVE_GMTIME_R */

/* define if _chsize_s is available in io.h */
#define HAVE__CHSIZE_S

/* define if ssize_t is defined */
/* #undef HAVE_SSIZE_T */

/* define if mode_t is defined */
/* #undef HAVE_MODE_T */

/* How to access the PC from a struct ucontext */
/* #undef PC_FROM_UCONTEXT */

/* define if we should print file offsets in traces instead of symbolizing. */
/* #undef PRINT_UNSYMBOLIZED_STACK_TRACES */

/* The size of `void *', as computed by sizeof. */
#define SIZEOF_VOID_P 4

/* location of source code */
#define TEST_SRC_DIR "F:/code_project/Learn/tool/cmake/project_template/TemplateRepoCxx/include/glog-master"

/* Define if thread-local storage is enabled. */
#define GLOG_THREAD_LOCAL_STORAGE

/* define if abi::__cxa_demangle is available in cxxabi.h */
/* #undef HAVE___CXA_DEMANGLE */

/* define if __argv is available in cstdlib */
#define HAVE___ARGV

/* define if __progname is available */
/* #undef HAVE___PROGNAME */

/* define if getprogname is available in cstdlib */
/* #undef HAVE_GETPROGNAME */

/* define if program_invocation_short_name is available in cerrno */
/* #undef HAVE_PROGRAM_INVOCATION_SHORT_NAME */

#endif  // GLOG_CONFIG_H
