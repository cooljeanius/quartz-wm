dnl Copyright (c) 2010 Apple Inc. All Rights Reserved.
dnl
dnl @APPLE_LICENSE_HEADER_START@
dnl
dnl This file contains Original Code and/or Modifications of Original Code
dnl as defined in and that are subject to the Apple Public Source License
dnl Version 2.0 (the 'License'). You may not use this file except in
dnl compliance with the License. Please obtain a copy of the License at
dnl http://www.opensource.apple.com/apsl/ and read it before using this
dnl file.
dnl
dnl The Original Code and all software distributed under the License are
dnl distributed on an 'AS IS' basis, WITHOUT WARRANTY OF ANY KIND, EITHER
dnl EXPRESS OR IMPLIED, AND APPLE HEREBY DISCLAIMS ALL SUCH WARRANTIES,
dnl INCLUDING WITHOUT LIMITATION, ANY WARRANTIES OF MERCHANTABILITY,
dnl FITNESS FOR A PARTICULAR PURPOSE, QUIET ENJOYMENT OR NON-INFRINGEMENT.
dnl Please see the License for the specific language governing rights and
dnl limitations under the License.
dnl
dnl @APPLE_LICENSE_HEADER_END@

AC_PREREQ([2.61])
AC_INIT([quartz-wm],[1.3.1], [http://xquartz.macosforge.org],[quartz-wm])
AC_CONFIG_MACRO_DIR([m4])
AM_INIT_AUTOMAKE([foreign dist-bzip2 dist-xz])
AM_MAINTAINER_MODE
AC_CONFIG_SRCDIR([lib/dock-support.h])
AC_CONFIG_HEADERS([config.h])

AC_CANONICAL_HOST
AC_USE_SYSTEM_EXTENSIONS

# Require xorg-macros: XORG_DEFAULT_OPTIONS
m4_ifndef([XORG_MACROS_VERSION],
          [m4_fatal([must install xorg-macros 1.3 or later before running autoconf/autogen])])
XORG_MACROS_VERSION([1.3])
XORG_DEFAULT_OPTIONS
XORG_CHECK_MALLOC_ZERO
XORG_MEMORY_CHECK_FLAGS
XORG_ENABLE_INTEGRATION_TESTS
XORG_ENABLE_UNIT_TESTS
XORG_LD_WRAP
XORG_PROG_RAWCPP

# Checks for programs.
AM_PROG_AS
AM_PROG_CC_C_O
AC_PROG_OBJC
AC_PROG_INSTALL
AC_PROG_LN_S

# Checks for libraries.
# FIXME: Replace `main' with a function in `-lXplugin':
AC_CHECK_LIB([Xplugin], [main])

# Checks for header files.
AC_PATH_X
AC_PATH_XTRA
AC_CHECK_HEADERS([quartz-wm.h stdio.h x-list.h x-window.h])
AC_CHECK_HEADERS([Foundation/Foundation.h Foundation/NSTask.h Foundation/NSUserScriptTask.h NSXPCConnection.h])

# Checks for typedefs, structures, and compiler characteristics.
AC_CHECK_HEADER_STDBOOL
AC_C_INLINE
AX_C___ATTRIBUTE__
AC_TYPE_INT32_T
AC_TYPE_SIZE_T
AC_TYPE_UINT32_T

# Checks for library functions.
AC_FUNC_ALLOCA
AC_FUNC_MALLOC
AC_FUNC_REALLOC
AC_CHECK_FUNCS([memset setenv sqrt strdup])

# Checks for pkg-config packages
PKG_CHECK_MODULES([QUARTZWM], [applewm >= 1.4] pixman-1 x11 xext xinerama xrandr xproto >= 7.0.17)
AC_SUBST([QUARTZWM_CFLAGS])
AC_SUBST([QUARTZWM_LIBS])

AC_ARG_WITH([bundle-id-prefix],  [AS_HELP_STRING([--with-bundle-id-prefix=PATH], [Prefix to use for bundle identifiers (default: org.x)])],
                               [BUNDLE_ID_PREFIX="${withval}"],
                               [BUNDLE_ID_PREFIX="org.x"])
AC_SUBST([BUNDLE_ID_PREFIX])
AC_DEFINE_UNQUOTED(BUNDLE_ID_PREFIX, "$BUNDLE_ID_PREFIX", [Prefix to use for bundle identifiers])

AC_ARG_ENABLE([xplugin-dock-support], [AS_HELP_STRING([--enable-xplugin-dock-support], [Enable using libXplugin directly for dock support (default: NO)])],
                                    [XPLUGIN_DOCK_SUPPORT="${enableval}"],
                                    [XPLUGIN_DOCK_SUPPORT="no"])
AC_SUBST([XPLUGIN_DOCK_SUPPORT])
if test "x$XPLUGIN_DOCK_SUPPORT" = "xyes"; then
    AC_DEFINE([XPLUGIN_DOCK_SUPPORT], [1], [Use libXplugin directly for dock support])
fi
AM_CONDITIONAL([XPLUGIN_DOCK_SUPPORT], [test "x$XPLUGIN_DOCK_SUPPORT" = "xyes"])

AC_CONFIG_FILES([Makefile
	         lib/Makefile
	         src/Makefile
	         man/Makefile])
AC_OUTPUT
