# $dotat: unifdef/Makefile,v 1.6 2009/11/23 19:07:17 fanf2 Exp $

SOURCES=	Makefile release.sh unifdef.1 unifdef.c unifdefall.sh
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
