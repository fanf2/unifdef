# Makefile for unifdef

prefix =	${HOME}
bindir =	${prefix}/bin
mandir =	${prefix}/share/man
man1dir=	${mandir}/man1

bindest=	${DESTDIR}${bindir}
man1dest=	${DESTDIR}${man1dir}


all: unifdef unifdef.txt

test: unifdef
	./runtests.sh tests

unifdef: unifdef.c version.h

version.h version.sh::
	./get-version.sh

install: unifdef unifdefall.sh unifdef.1
	: commands
	install -m 755 -d  ${bindest}
	install -m 755 unifdef  ${bindest}/
	install -m 755 unifdefall.sh  ${bindest}/unifdefall
	: manual
	install -m 755 -d  ${man1dest}
	install -m 644 unifdef.1  ${man1dest}/
	ln -s unifdef.1  ${man1dest}/unifdefall.1

clean:
	rm -f unifdef unifdef.txt version.h
	rm -f tests/*.out tests/*.err tests/*.rc

realclean: clean
	rm -rf unifdef-* unifdef-*.tar.gz
	rm -f Changelog index.html version.sh
	find . -name .git -prune -o \( \
		-name '*~' -o -name '.#*' -o \
		-name '*.orig' -o -name '*.core' \
		\) -delete

DISTFILES=             \
	Changelog      \
	COPYING        \
	INSTALL        \
	Makefile       \
	README         \
	get-version.sh \
	release.sh     \
	runtests.sh    \
	tests          \
	unifdef.c      \
	unifdef.1      \
	unifdef.txt    \
	unifdefall.sh  \
	version.sh

release: version.sh unifdef.txt Changelog
	. version.sh; \
	mkdir $$V; \
	cp -R ${DISTFILES} $$V; \
	tar cfz $$V.tar.gz $$V

unifdef.txt: unifdef.1
	nroff -Tascii -mdoc unifdef.1 | sed -e 's/.//g' >unifdef.txt

Changelog:
	line="---------------------------------------------------"; \
	git log --stat --pretty=format:"$$line%n%ai %an <%ae>%n%n%s%n%n%b" |\
	awk '/^$$/ { n++ } \
	     /./ && !n { print } \
	     /./ && n  { print ""; print; n=0 } \
	     END { print "'$$line'" }' >Changelog

# eof
