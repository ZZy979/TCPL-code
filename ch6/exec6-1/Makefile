target = count_keyword.out
objects = ../keyword_counting/main.o ../keyword_counting/key.o ../getword2.o \
	../keyword_counting/binsearch.o ../../ch4/getch.o
CFLAGS = -ansi

$(target): $(objects)
	$(CC) -o $@ $^

test: $(target)
	@bash ../../test.sh testdata/tests.txt

clean:
	$(RM) $(target) $(objects)

.PHONY: clean
