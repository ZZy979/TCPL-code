target = count_keyword.out
objects = main.o ../keyword_counting/key.o ../keyword_counting/getword.o binsearch.o ../../ch5/getch.o
CFLAGS = -ansi

$(target): $(objects)
	$(CC) -o $@ $(LDFLAGS) $^ $(LDLIBS)

main.o: ../keyword_counting/key.h ../keyword_counting/getword.h binsearch.h
binsearch.o: binsearch.h ../keyword_counting/key.h

clean:
	$(RM) $(target) $(objects)

.PHONY: clean
