target = count_keyword.out
objects = main.o key.o getword.o binsearch.o ../../ch5/getch.o
CFLAGS = -ansi

$(target): $(objects)
	$(CC) -o $@ $(LDFLAGS) $^ $(LDLIBS)

main.o: key.h getword.h binsearch.h
key.o: key.h
getword.o: getword.h ../../ch5/getch.h
binsearch.o: binsearch.h key.h

clean:
	$(RM) $(target) $(objects)

.PHONY: clean
