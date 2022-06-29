target = count_word.out
objects = main.o tnode.o ../strdup.o ../getword.o ../../ch4/getch.o
CFLAGS = -ansi

$(target): $(objects)
	$(CC) -o $@ $^

main.o: tnode.h ../getword.h
tnode.o: tnode.h ../strdup.h

test: $(target)
	@bash ../../test.sh testdata/tests.txt

clean:
	$(RM) $(target) $(objects)

.PHONY: clean
