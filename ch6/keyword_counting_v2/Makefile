target = count_keyword.out
objects = main.o ../keyword_counting/key.o ../getword.o binsearch.o ../../ch4/getch.o
CFLAGS = -ansi

$(target): $(objects)
	$(CC) -o $@ $^

main.o: ../keyword_counting/key.h ../getword.h binsearch.h
binsearch.o: binsearch.h ../keyword_counting/key.h

test: $(target)
	@bash ../../test.sh testdata/tests.txt

clean:
	$(RM) $(target) $(objects)

.PHONY: clean
