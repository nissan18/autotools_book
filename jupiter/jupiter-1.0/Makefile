# Makefile.  Generated from Makefile.in by configure.

# Package-specific substitution variables
package		= Jupiter
version		= 1.0
tarname		= jupiter
distdir		= $(tarname)-$(version)

# Prefix-specific substitution variables
prefix		= /usr/local
exec_prefix	= ${prefix}
bindir		= ${exec_prefix}/bin

# VPATH-specific substitution variables
srcdir		= .


export prefix
export exec_prefix
export bindir

all clean check install uninstall jupiter:
	cd src && $(MAKE) $@

dist: $(distdir).tar.gz

$(distdir).tar.gz: $(distdir)
	tar chof - $(distdir) | gzip -9 -c > $@
	rm -rf $(distdir)

$(distdir): FORCE
	mkdir -p $(distdir)/src
	cp $(srcdir)/configure.ac $(distdir)
	cp $(srcdir)/configure $(distdir)
	cp $(srcdir)/config.h.in $(distdir)
	cp $(srcdir)/install-sh $(distdir)
	cp $(srcdir)/Makefile $(distdir)
	cp $(srcdir)/src/Makefile $(distdir)/src
	cp $(srcdir)/src/main.c $(distdir)/src

distcheck: $(distdir).tar.gz
	gzip -cd $(distdir).tar.gz | tar xvf -
	cd $(distdir) && ./configure
	cd $(distdir) && $(MAKE) all
	cd $(distdir) && $(MAKE) check
	cd $(distdir) && $(MAKE) DESTDIR=$${PWD}/_inst install
	cd $(distdir) && $(MAKE) DESTDIR=$${PWD}/_inst uninstall
	@remaining="`find $${PWD}/$(distdir)/_inst -type f | wc -l`"; \
	if test "$${remaining}" -ne 0; then \
	  echo "*** $${remaining} file(s) remaining in stage directory!"; \
	  exit 1; \
	fi
	cd $(distdir) && $(MAKE) clean
	rm -rf $(distdir)
	@echo "*** Package $(distdir).tar.gz is ready for distribution."

Makefile: Makefile.in config.status
	./config.status $@

config.status: configure
	./config.status --recheck

FORCE:
	-rm $(distdir).tar.gz >/dev/null 2>&1
	-rm -rf $(distdir) >/dev/null 2>&1

.PHONY: FORCE all clean check dist distcheck install uninstall
