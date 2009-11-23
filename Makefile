# $dotat: unifdef/Makefile,v 1.4 2009/11/23 17:58:27 fanf2 Exp $

TARGETS=	unifdef unifdef.log unifdef.man
DISTFILES=	Makefile unifdef.* unifdefall.sh

all: ${TARGETS}

release: unifdef.log unifdef.man
	rm -f unifdef unifdef.tar.gz
	mkdir unifdef
	cp ${DISTFILES} unifdef
	tar cfz unifdef.tar.gz unifdef
	rm -r unifdef
	scp -r ${DISTFILES} \
		fanf@chiark.greenend.org.uk:public-html/prog/unifdef

clean:
	rm -f ${TARGETS}

unifdef: unifdef.c

unifdef.log: unifdef.c unifdef.1 unifdefall.sh
	cvslog unifdef* > unifdef.log

unifdef.man: unifdef.1
	nroff -Tascii -man unifdef.1 | sed -e 's/.//g' > unifdef.man
