include $(top_srcdir)/platform/@with_platform@/Makefile.inc
LIB   = $(top_builddir)/lib
LDADD = $(LIB)/libodp-dpdk.la $(LIB)/libodphelper-linux.la
AM_CFLAGS += \
	-I$(srcdir) \
	-I$(top_srcdir)/example \
	-I$(top_srcdir)/platform/@with_platform@/include \
	-I$(top_srcdir)/include/ \
	-I$(top_srcdir)/helper/include \
	-I$(top_builddir)/platform/@with_platform@/include \
	-I$(top_builddir)/include

AM_LDFLAGS += -L$(LIB)
