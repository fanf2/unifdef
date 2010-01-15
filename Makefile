# $dotat: unifdef/Makefile,v 1.16 2010/01/15 17:43:17 fanf2 Exp $

SOURCES=	Makefile README release.sh unifdef.1 unifdef.c unifdefall.sh
TARGETS=	unifdef unifdef.txt

all: ${TARGETS}

test: unifdef
	./runtests.sh tests

release: ${TARGETS} Changelog
	./release.sh

clean:
	rm -rf unifdef-*
	rm -f ${TARGETS} index.html
	rm -f tests/*.out tests/*.err tests/*.rc

realclean: clean
	rm -f *~ .#* *.orig *.core

unifdef: unifdef.c

Changelog: ${SOURCES}
	cvslog >Changelog

unifdef.txt: unifdef.1
	nroff -Tascii -man unifdef.1 | sed -e 's/.//g' >unifdef.txt
