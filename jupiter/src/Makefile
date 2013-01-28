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


CFLAGS = -g -O0

all: jupiter

jupiter: main.c
	$(CC) $(CPPFLAGS) $(CFLAGS) -I. -I$(srcdir) -I.. -o $@ $(srcdir)/main.c

check: all
	./jupiter | grep "Hello from .*jupiter!"
	@echo "*** ALL TESTS PASSED ***"

clean:
	-rm jupiter

install:
	install -d $(DESTDIR)$(bindir)
	install -m 0755 jupiter $(DESTDIR)$(bindir)

uninstall:
	-rm $(DESTDIR)$(bindir)/jupiter

Makefile: Makefile.in ../config.status
	cd .. && ./config.status src/

../config.status: ../configure
	cd .. && ./config.status --recheck

.PHONY: all clean check install uninstall


