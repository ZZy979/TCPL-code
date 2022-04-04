HEADERS = $(shell ls *.h)
TARGETS = $(HEADERS:.h=.o) exec2-1.out bitcount2.o lower2.o
CFLAGS = -ansi

all: $(TARGETS)

%.o: %.c %.h
	$(CC) -c -o $@ $(CFLAGS) $<

bitcount2.o: bitcount2.c bitcount.h
lower2.o: lower2.c lower.h

%.out: %.o
	$(CC) -o $@ $(LDFLAGS) $< $(LDLIBS)

clean:
	rm *.o *.out

.PHONY: all clean
