# $dotat: unifdef/Makefile,v 1.2 2003/07/01 14:53:50 fanf2 Exp $

TARGETS=	unifdef unifdef.log unifdef.man

all: ${TARGETS}

clean:
	rm -f ${TARGETS}

unifdef: unifdef.c

unifdef.log: unifdef.c unifdef.1 unifdefall.sh
	cvslog unifdef* > unifdef.log

unifdef.man: unifdef.1
	nroff -man unifdef.1 | sed -e 's/.//g' > unifdef.man
