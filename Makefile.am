AUTOMAKE_OPTIONS        = foreign nostdinc subdir-objects

ACLOCAL_AMFLAGS         = -I m4

AM_CFLAGS               = 
AM_LDFLAGS              = $(LIBS)
AM_CPPFLAGS =           -I$(top_builddir) \
                        -I$(top_srcdir) \
                          $(DEP_CFLAGS)
AM_CPPFLAGS             += $(CPPFLAGS)

LIB_CFLAGS              = $(LIBS)

VERSION                 = 1.0.0
LIBWESTON_BINDER_VERSION= $(VERSION)
LIBWESTON_BINDER_LIBS   = $(SLIBS)
lib_LTLIBRARIES         = libweston-binder.la

CLEANFILES              = 

pkgconfigdir            = $(libdir)/pkgconfig
pkgconfig_DATA          = libweston-binder.pc

VERSION_INFO            = -version-info 1:0:0
GENERIC_LDFLAGS         = $(VERSION_INFO)

if CONFIG_OS_LINUX
AM_CFLAGS               += -DOS_LINUX
endif


AM_CFLAGS               += ${weston_CFLAGS}
AM_CFLAGS               += ${libevdev_CFLAGS}
AM_CFLAGS               += ${pixman_CFLAGS}

AM_CFLAGS               += $(LIB_CFLAGS)
AM_CFLAGS               += -Isrc
AM_CFLAGS               += -Isrc/include
AM_CFLAGS               += -Iinclude

libweston_binder_la_LDFLAGS= $(AM_LDFLAGS)  $(GENERIC_LDFLAGS)
libweston_binder_la_CFLAGS= $(AM_CFLAGS)
libweston_binder_la_CPPFLAGS= $(AM_CPPFLAGS)
INSTALLdir              = $(include)//usr/include/libweston-3
# 'csource+headers-am.inc' provides the CSOURCES, HHEADERS and INSTALL_HEADERS defines
CSOURCES = src/binder.c

INSTALL_HEADERS = 

# Config needs to have a separate recipe
INSTALL_CONFIG = 

HHEADERS = \
	$(INSTALL_HEADERS)

# Demos needs to have a separate recipe
INSTALL_DEMOS =


libweston_binder_la_SOURCES= $(CSOURCES) $(HHEADERS)
libweston_binder_ladir  = $(includedir)
libweston_binder_la_HEADERS= $(INSTALL_HEADERS)

clean-local:
