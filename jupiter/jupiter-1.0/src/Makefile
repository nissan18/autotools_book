# src/Makefile.  Generated from Makefile.in by configure.

# Package-specific substitution variables
package		= Jupiter
version		= 1.0
tarname		= jupiter
distdir		= $(tarname)-$(version)

# Prefix-specific substitution variables
prefix		= /usr/local
exec_prefix	= ${prefix}
bindir		= ${exec_prefix}/bin

# VPATH-related substitution variables
srcdir		= .


# Tool-specific substitution variables
CC		= gcc
DEFS		= -DHAVE_CONFIG_H
LIBS		= -lpthread -lpthread 
CFLAGS		= -g -O2
CPPFLAGS	= 
INSTALL		= /usr/bin/install -c
INSTALL_DATA	= ${INSTALL} -m 644
INSTALL_PROGRAM = ${INSTALL}
INSTALL_SCRIPT	= ${INSTALL}

all: jupiter

jupiter: main.c
	$(CC) $(CFLAGS) $(DEFS) $(CPPFLAGS) -I. -I$(srcdir) -I.. -o $@ $(srcdir)/main.c $(LIBS)

check: all
	./jupiter | grep "Hello from .*jupiter!"
	@echo "*** ALL TESTS PASSED ***"

clean:
	-rm jupiter

install:
	$(INSTALL) -d $(DESTDIR)$(bindir)
	$(INSTALL_PROGRAM) -m 0755 jupiter $(DESTDIR)$(bindir)/jupiter

uninstall:
	-rm $(DESTDIR)$(bindir)/jupiter

Makefile: Makefile.in ../config.status
	cd .. && ./config.status src/

../config.status: ../configure
	cd .. && ./config.status --recheck

.PHONY: all clean check install uninstall


