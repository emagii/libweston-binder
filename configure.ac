AC_INIT([libweston-binder],
	[1.0],
	[Ulf Samuelsson],
	[libweston-binder-1.0],
	[http://www.emagii.com/])

AC_PREREQ([2.59])

AC_CONFIG_HEADER([src/include/config.h])

AC_CONFIG_SRCDIR([src])

AC_CONFIG_MACRO_DIR([m4])


AC_PROG_LN_S
AC_PROG_CPP
AC_PROG_CC
AC_ARG_PROGRAM
AM_INIT_AUTOMAKE([1.10 -Wall no-define])

AC_PROG_MAKE_SET
AM_MAINTAINER_MODE
AC_SUBST(LIBWESTON_BINDER_VERSION, 1.0)
AC_HEADER_STDC
AC_ENABLE_SHARED
AC_DISABLE_STATIC
AC_PROG_LIBTOOL
AC_SUBST(ACLOCAL_AMFLAGS, "")
AC_HEADER_STDC
AC_C_CONST
AC_TYPE_SIZE_T
AC_HEADER_TIME


AC_CHECK_HEADERS( \
	stdio.h \
	stdlib.h \
	stdarg.h \
	stdint.h \
	ctype.h \
	fcntl.h \
	libevdev/libevdev.h \
	string.h \
	unistd.h \
	weston.h \
	pixman.h \
	,
dnl to do if not found
	[],
dnl to do if not found
	[],
dnl default includes
	[
#ifdef HAVE_SYS_TYPES_H
#include <sys/types.h>
#endif
#ifdef HAVE_SYS_TIME_H
#include <sys/time.h>
#endif
dnl We do this default-include simply to make sure that the nameser_compat.h
dnl header *REALLY* can be include after the new nameser.h. It seems AIX 5.1
dnl (and others?) is not designed to allow this.
#ifdef HAVE_ARPA_NAMESER_H
#include <arpa/nameser.h>
#endif

dnl *Sigh* these are needed in order for net/if.h to get properly detected.
#ifdef HAVE_SYS_SOCKET_H
#include <sys/socket.h>
#endif
#ifdef HAVE_NETINET_IN_H
#include <netinet/in.h>
#endif
]
)

# ==== OS Support
AC_ARG_ENABLE(os-linux,
	[--enable-os-linux	Build for Linux enabled],
	[case "${enableval}" in
		yes)	os_linux=true  ;;
		no)	os_linux=false ;;
		*) AC_MSG_ERROR(bad value ${enableval} for --enable-os-linux) ;;
	 esac
	],
	[os_linux=false])
AS_IF([test	x$os_linux = xtrue], [AC_DEFINE([OS_LINUX], [], [Description])])
AM_CONDITIONAL(CONFIG_OS_LINUX, test x$os_linux = xtrue)

AC_SUBST(LIBWESTON_BINDER_LIBS, [$SLIBS])
AC_SUBST([CFLAGS])

AC_SUBST([CPPFLAGS])

AC_SUBST([LIBS])

AC_SUBST([SLIBS])

AC_MSG_RESULT([$build_tests])

AC_CONFIG_FILES([Makefile libweston-binder.pc])
AC_OUTPUT
