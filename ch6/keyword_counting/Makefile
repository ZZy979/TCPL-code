target = count_keyword.out
objects = main.o key.o ../getword.o binsearch.o ../../ch4/getch.o
CFLAGS = -ansi

$(target): $(objects)
	$(CC) -o $@ $^

main.o: key.h ../getword.h binsearch.h
key.o: key.h
binsearch.o: binsearch.h key.h

test: $(target)
	@bash ../../test.sh testdata/tests.txt

clean:
	$(RM) $(target) $(objects)

.PHONY: clean
