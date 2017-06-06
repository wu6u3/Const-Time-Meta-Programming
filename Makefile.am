
# Predefine variables.
#CTT_HOME=.
#CTT_LIB=./libCTTimer.la
GLOG_HOME=3rd-party/glog
GLOG_INC=$(GLOG_HOME)/src
GLOG_LIB=$(GLOG_HOME)/libglog.la

# Automake options.
AUTOMAKE_OPTIONS = foreign

# Make sure that when we re-make ./configure, we get the macros we need.
ACLOCAL_AMFLAGS = -I m4 --install



# Automake directories. 
SUBDIRS = $(GLOG_HOME) .

# Package-related substitution variables.
CC = clang
CXX = clang++
CXXFLAGS = @CXXFLAGS@

# Initialize variables here so we can use += operator everywhere else.
lib_LTLIBRARIES =
noinst_LTLIBRARIES =
sbin_PROGRAMS =
bin_PROGRAMS =
noinst_PROGRAMS =
pkglibexec_PROGRAMS =
pkginclude_HEADERS =
nobase_pkginclude_HEADERS =
dist_bin_SCRIPTS =
dist_pkglibexec_SCRIPTS =
nobase_dist_pkgdata_DATA =
nodist_sbin_SCRIPTS =
check_PROGRAMS =
dist_check_SCRIPTS =
check_SCRIPTS =
BUILT_SOURCES =
CLEANFILES =
EXTRA_DIST =
PHONY_TARGETS =
LDADD =

# CTTimer CXX flag
CTT_CXXFLAGS = $(CXXFLAGS)
CTT_CXXFLAGS += $(OPENMP_CXXFLAGS)
CTT_CXXFLAGS += -Wall
CTT_CXXFLAGS += -std=c++1z -O3

# CTTimer inlude flag
CTT_CXXFLAGS += -Isrc

# CTTimer 3rd-party glog include flag
CTT_CXXFLAGS += -I$(GLOG_INC)

# Program: main/CTTimer
bin_PROGRAMS += main/CTTimer
main_CTTimer_CXXFLAGS = $(CTT_CXXFLAGS)
main_CTTimer_LDADD = libCTTimer.la
main_CTTimer_LDADD += $(CTT_LIB)
main_CTTimer_SOURCES = main/ctt_main.cpp

# Library definition: libcctimer.la 
lib_LTLIBRARIES += libCTTimer.la
libCTTimer_la_CXXFLAGS = $(CTT_CXXFLAGS) 
#libCTTimer_la_LIBADD = 
#libCTTimer_la_LIBADD += $(CTT_LIB)
libCTTimer_la_SOURCES =
libCTTimer_la_SOURCES += src/ctt_utility.cpp
libCTTimer_la_SOURCES += src/ctt_timer.cpp

# Package include 
pkginclude_HEADERS += src/ctt_utility.hpp
pkginclude_HEADERS += src/ctt_timer.hpp


EXTRA_DIST += LICENSE
#EXTRA_DIST += example

# Project-specific targets
echo_CXX:
	@echo $(CXX)

echo_CPPFLAGS:
	@echo $(CPPFLAGS)

echo_CXXFLAGS:
	@echo $(CXXFLAGS)

echo_CTT_CXXFLAGS:
	@echo $(CTT_CXXFLAGS)

echo_bin_PROGRAMS:
	@echo $(bin_PROGRAMS)

echo_sbin_PROGRAMS:
	@echo $(sbin_PROGRAMS)

echo_check_PROGRAMS:
	@echo $(check_PROGRAMS)

echo_check_SCRIPTS:
	@echo $(check_SCRIPTS)

echo_lib_LTLIBRARIES:
	@echo $(lib_LTLIBRARIES)

echo_prefix:
	@echo $(prefix)

echo_builddir:
	@echo $(builddir)

echo_abs_builddir:
	@echo $(abs_builddir)

echo_top_builddir:
	@echo $(top_builddir)

echo_abs_top_builddir:
	@echo $(abs_top_builddir)

echo_top_build_prefix:
	@echo $(top_build_prefix)

echo_srcdir:
	@echo $(srcdir)

echo_abs_srcdir:
	@echo $(abs_srcdir)

echo_top_srcdir:
	@echo $(top_srcdir)

echo_abs_top_srcdir:
	@echo $(abs_top_srcdir)

echo_bindir:
	@echo $(bindir)

echo_sbindir:
	@echo $(sbindir)

echo_docdir:
	@echo $(docdir)

echo_exec_prefix:
	@echo $(exec_prefix)

echo_libdir:
	@echo $(libdir)

echo_pkglibdir:
	@echo $(pkglibdir)

echo_includedir:
	@echo $(includedir)

echo_pkgincludedir:
	@echo $(pkgincludedir)

echo_libexecdir:
	@echo $(libexecdir)

echo_datadir:
	@echo $(datadir)

echo_openmp_cflags:
	@echo $(OPENMP_CFLAGS)

echo_openmp_cxxflags:
	@echo $(OPENMP_CXXFLAGS)
