# $dotat: unifdef/Makefile,v 1.8 2009/11/23 19:15:42 fanf2 Exp $

SOURCES=	Makefile README release.sh unifdef.1 unifdef.c unifdefall.sh
TARGETS=	Changelog unifdef unifdef.txt

all: ${TARGETS}

release: ${TARGETS}
	./release.sh

clean:
	rm -f ${TARGETS} unifdef-*.tar.gz

realclean: clean
	rm -f *~

unifdef: unifdef.c

Changelog: ${SOURCES}
	cvslog ${SOURCES} >Changelog

unifdef.txt: unifdef.1
	nroff -Tascii -man unifdef.1 | sed -e 's/.//g' >unifdef.txt
