# $dotat: unifdef/Makefile,v 1.1 2003/01/20 14:43:55 fanf2 Exp $

all: unifdef unifdef.log unifdef.man

unifdef: unifdef.c

unifdef.log: unifdef.c unifdef.1 unifdefall.sh
	cvslog unifdef* > unifdef.log

unifdef.man: unifdef.1
	nroff -man unifdef.1 | sed -e 's/.//g' > unifdef.man
