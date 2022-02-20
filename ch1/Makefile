SOURCES = $(shell ls *.c)
TARGETS = $(SOURCES:.c=.out)
CFLAGS = -ansi

all: $(TARGETS)

%.out: %.o
	$(CC) -o $@ $(CFLAGS) $<

exec1-21.out: exec1-21.o
	$(CC) -o $@ $(CFLAGS) $< -lm

clean:
	rm *.o *.out

.PHONY: all clean
