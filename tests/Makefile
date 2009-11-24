all: check ;

TEST_SCRIPTS = simple1 simple2

check:
	set -e; for i in $(TEST_SCRIPTS); \
	do \
		sh "$$i"; \
	done

clean:
	rm -f *.out *.err
