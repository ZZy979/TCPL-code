target = cross_referencer.out
objects = main.o tree.o list.o getword.o ../../ch4/getch.o
CFLAGS = -ansi -D_XOPEN_SOURCE=700

$(target): $(objects)
	$(CC) -o $@ $^

main.o: tree.h list.h ../getword.h
tree.o: tree.h list.h
list.o: list.h
getword.o: ../getword.h

test: $(target)
	@bash ../../test.sh testdata/tests.txt

clean:
	$(RM) $(target) $(objects)

.PHONY: clean
