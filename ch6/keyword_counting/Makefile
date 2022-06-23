target = count_keyword.out
objects = main.o key.o ../getword.o binsearch.o ../../ch5/getch.o
CFLAGS = -ansi

$(target): $(objects)
	$(CC) -o $@ $(LDFLAGS) $^ $(LDLIBS)

main.o: key.h ../getword.h binsearch.h
key.o: key.h
binsearch.o: binsearch.h key.h

test: $(target)
	@bash ../../test.sh testdata/tests.txt

clean:
	$(RM) $(target) $(objects)

.PHONY: clean
