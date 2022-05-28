target = count_word.out
objects = main.o tnode.o ../strdup.o ../getword.o ../../ch5/getch.o
CFLAGS = -ansi

$(target): $(objects)
	$(CC) -o $@ $(LDFLAGS) $^ $(LDLIBS)

main.o: tnode.h ../getword.h
tnode.o: tnode.h ../strdup.h

clean:
	$(RM) $(target) $(objects)

.PHONY: clean
