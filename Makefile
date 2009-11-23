# $dotat: unifdef/Makefile,v 1.7 2009/11/23 19:14:02 fanf2 Exp $

SOURCES=	Makefile README release.sh unifdef.1 unifdef.c unifdefall.sh
TARGETS=	Changelog unifdef unifdef.txt

all: ${TARGETS}

release: ${TARGETS}
	./release.sh

clean:
	rm -f ${TARGETS} unifdef-*.tar.gz

unifdef: unifdef.c

Changelog: ${SOURCES}
	cvslog ${SOURCES} >Changelog

unifdef.txt: unifdef.1
	nroff -Tascii -man unifdef.1 | sed -e 's/.//g' >unifdef.txt
