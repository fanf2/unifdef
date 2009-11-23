# $dotat: unifdef/Makefile,v 1.5 2009/11/23 18:53:35 fanf2 Exp $

SOURCES=	Makefile Release unifdef.1 unifdef.c unifdefall.sh
TARGETS=	unifdef unifdef.log unifdef.man

all: ${TARGETS}

release: ${TARGETS}
	./Release

clean:
	rm -f ${TARGETS} unifdef-*.tar.gz

unifdef: unifdef.c

unifdef.log: ${SOURCES}
	cvslog ${SOURCES} > unifdef.log

unifdef.man: unifdef.1
	nroff -Tascii -man unifdef.1 | sed -e 's/.//g' > unifdef.man
