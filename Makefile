# $dotat: unifdef/Makefile,v 1.18 2010/01/15 18:37:39 fanf2 Exp $

prefix =	${HOME}
bindir =	${prefix}/bin
mandir =	${prefix}/share/man
man1dir=	${mandir}/man1

bindest=	${DESTDIR}${bindir}
man1dest=	${DESTDIR}${man1dir}


all: unifdef unifdef.txt

unifdef: unifdef.c

unifdef.txt: unifdef.1
	nroff -Tascii -man unifdef.1 | sed -e 's/.//g' >unifdef.txt

test: unifdef
	./runtests.sh tests

Changelog: CVS/Entries
	cvslog >Changelog

release: unifdef unifdef.txt Changelog index.html.in
	./release.sh

install: unifdef unifdefall.sh unifdef.1
	: commands
	install -m 755 -d  ${bindest}
	install -m 755 unifdef  ${bindest}/
	install -m 755 unifdefall.sh  ${bindest}/unifdefall
	: manual
	install -m 755 -d  ${man1dest}
	install -m 644 unifdef.1  ${man1dest}/
	ln -s unifdef.1  ${man1dest}/unifdefall.1

clean:
	rm -rf unifdef-*
	rm -f unifdef unifdef.txt
	rm -f tests/*.out tests/*.err tests/*.rc

realclean: clean
	rm -f Changelog index.html
	rm -f *~ .#* *.orig *.core

# eof
