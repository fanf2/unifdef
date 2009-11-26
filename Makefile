# $dotat: unifdef/Makefile,v 1.11 2009/11/26 14:01:26 fanf2 Exp $

SOURCES=	Makefile README release.sh unifdef.1 unifdef.c unifdefall.sh
TARGETS=	Changelog unifdef unifdef.txt

all: ${TARGETS}

test: unifdef
	cd tests && sh runtests

release: ${TARGETS}
	./release.sh

clean:
	rm -f ${TARGETS} index.html unifdef-*.tar.gz
	rm -f tests/*.out tests/*.err tests/*.rc

realclean: clean
	rm -f *~ .#* *.orig *.core

unifdef: unifdef.c

Changelog: ${SOURCES}
	cvslog ${SOURCES} >Changelog

unifdef.txt: unifdef.1
	nroff -Tascii -man unifdef.1 | sed -e 's/.//g' >unifdef.txt
