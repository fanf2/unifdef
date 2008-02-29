# $dotat: unifdef/Makefile,v 1.3 2008/02/29 12:29:34 fanf2 Exp $

TARGETS=	unifdef unifdef.log unifdef.man

all: ${TARGETS}

clean:
	rm -f ${TARGETS}

unifdef: unifdef.c

unifdef.log: unifdef.c unifdef.1 unifdefall.sh
	cvslog unifdef* > unifdef.log

unifdef.man: unifdef.1
	nroff -Tascii -man unifdef.1 | sed -e 's/.//g' > unifdef.man
