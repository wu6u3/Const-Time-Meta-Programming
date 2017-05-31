#                                               -*- Autoconf -*-
# Process this file with autoconf to produce a configure script.

AC_PREREQ([2.69])
AC_INIT([CTTimer], [0.0.0], [tinyinlai@gmail.com])


# Put autotools auxiliary files in a subdir
AC_CONFIG_AUX_DIR([build-aux]) 
AC_CONFIG_MACRO_DIR([m4])

# Enable "automake" to simplify creating makefiles:
AM_INIT_AUTOMAKE([subdir-objects tar-ustar])

# Enable "libtool" to simplify creating makefiles: 
LT_INIT 
LT_LANG([C++])

# Specify where the Makefile
AC_CONFIG_FILES([Makefile]) 
# Configure 3rd-party packages.
AC_CONFIG_SUBDIRS([3rd-party/glog])


#AC_CONFIG_SRCDIR([src/utility.hpp])
#AC_CONFIG_HEADERS([config.h])

# Language configuration.
AC_LANG(C++)



# Checks for programs.
AC_PROG_CXX
AC_PROG_CPP
AC_PROG_CC
AC_PROG_AWK
AC_PROG_LIBTOOL
AC_PROG_INSTALL
AC_PROG_LN_S

AC_OPENMP


# Checks for clang
# Check if we're using clang.
AC_MSG_CHECKING([if compiling with clang])

AC_LANG_PUSH([C++])
AC_COMPILE_IFELSE(
[AC_LANG_PROGRAM([], [[
#ifndef __clang__
       not clang
#endif
]])],
[CLANG=yes], [CLANG=no])
AC_LANG_POP([C++])

AC_MSG_RESULT([$CLANG])
AC_SUBST([CLANG])

AC_HEADER_STDC

# Generic compiler characteristics.
AC_OPENMP

# Do final output.
AC_OUTPUT
LT_OUTPUT
