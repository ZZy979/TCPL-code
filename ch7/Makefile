HEADERS = $(wildcard *.h)
TARGETS = $(HEADERS:.h=.o) lower.out
CFLAGS = -ansi

all: $(TARGETS)

%.o: %.c %.h
	$(CC) -c -o $@ $(CFLAGS) $<

%.out: %.o
	$(CC) -o $@ $(LDFLAGS) $^ $(LDLIBS)

clean:
	$(RM) *.o *.out

.PHONY: all clean
