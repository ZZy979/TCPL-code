HEADERS = $(shell ls *.h)
TARGETS = $(HEADERS:.h=.o) exec3-1.out
CFLAGS = -ansi

all: $(TARGETS)

%.out: %.o
	$(CC) -o $@ $(CFLAGS) $<

exec3-1.out: exec3-1.o binsearch.o binsearch2.o
	$(CC) -o $@ $(CFLAGS) $^

clean:
	rm *.o *.out

.PHONY: all clean
