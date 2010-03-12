# Makefile for unifdef

prefix =	${HOME}
bindir =	${prefix}/bin
mandir =	${prefix}/share/man
man1dir=	${mandir}/man1

bindest=	${DESTDIR}${bindir}
man1dest=	${DESTDIR}${man1dir}


all: unifdef

unifdef: unifdef.c
unifdef.c: version.h
version.h version.sh::
	./reversion.sh

test: unifdef
	./runtests.sh tests

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
	rm -f unifdef unifdef.txt version.h
	rm -f tests/*.out tests/*.err tests/*.rc

realclean: clean
	[ ! -d .git ] || rm -f Changelog version.sh
	find . -name .git -prune -o \( \
		-name '*~' -o -name '.#*' -o \
		-name '*.orig' -o -name '*.core' \
		\) -delete

DISTFILES=             \
	Changelog      \
	COPYING        \
	INSTALL        \
	Makefile       \
	README         \
	reversion.sh   \
	runtests.sh    \
	tests          \
	unifdef.c      \
	unifdef.1      \
	unifdef.txt    \
	unifdefall.sh  \
	version.sh

release: version.sh unifdef.txt Changelog
	. version.sh; \
	mkdir web/$$V; cp -R ${DISTFILES} web/$$V; \
	cd web; tar cfz $$V.tar.gz $$V; rm -R $$V

unifdef.txt: unifdef.1
	nroff -Tascii -mdoc unifdef.1 | sed -e 's/.//g' >unifdef.txt
	cp unifdef.txt web

Changelog:
	line="---------------------------------------------------"; \
	git log --stat --pretty=format:"$$line%n%ai %an <%ae>%n%n%s%n%n%b" |\
	awk '/^$$/ { n++ } \
	     /./ && !n { print } \
	     /./ && n  { print ""; print; n=0 } \
	     END { print "'$$line'" }' >Changelog

upload:
	git gc
	git update-server-info
	git push --all github
	touch .git/git-daemon-export-ok
	echo "selectively remove C preprocessor conditionals" >.git/description
	rsync --delete --recursive --links .git/ chiark:public-git/unifdef.git/
	rsync --delete --recursive --links  web/ chiark:public-html/prog/unifdef/

# eof
