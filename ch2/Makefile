HEADERS = $(shell ls *.h)
TARGETS = $(HEADERS:.h=.o) exec2-1.out bitcount2.o lower2.o
CFLAGS = -ansi

all: $(TARGETS)

%.out: %.o
	$(CC) -o $@ $(CFLAGS) $<

clean:
	rm *.o *.out

.PHONY: all clean