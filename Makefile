# Makefile for unifdef

prefix =	${HOME}
bindir =	${prefix}/bin
mandir =	${prefix}/share/man
man1dir=	${mandir}/man1

bindest=	${DESTDIR}${bindir}
man1dest=	${DESTDIR}${man1dir}


all: unifdef unifdef.txt

unifdef: unifdef.c

unifdef.txt: unifdef.1
	nroff -Tascii -mdoc unifdef.1 | sed -e 's/.//g' >unifdef.txt

test: unifdef
	./runtests.sh tests

release:
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
	rm -f unifdef unifdef.txt
	rm -f tests/*.out tests/*.err tests/*.rc

realclean: clean
	rm -rf unifdef-* unifdef-*.tar.gz
	rm -f Changelog index.html
	find . -name CVS -prune -o \( \
		-name '*~' -o -name '.#*' -o \
		-name '*.orig' -o -name '*.core' \
		\) -delete

# eof
