HEADERS = $(wildcard *.h)
TARGETS = $(HEADERS:.h=.o)
CFLAGS = -ansi

all: $(TARGETS)

%.o: %.c %.h
	$(CC) -c -o $@ $(CFLAGS) $<

rect.o: rect.c rect.h point.h

%.out: %.o
	$(CC) -o $@ $(LDFLAGS) $^ $(LDLIBS)

clean:
	$(RM) *.o *.out

.PHONY: all clean
