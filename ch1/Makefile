SOURCES = $(wildcard *.c)
TARGETS = $(SOURCES:.c=.out)
CFLAGS = -ansi

all: $(TARGETS)

%.out: %.o
	$(CC) -o $@ $(LDFLAGS) $< $(LDLIBS)

exec1-21.out: exec1-21.o
	$(CC) -o $@ $(LDFLAGS) $< -lm

test: all
	bash test.sh

clean:
	$(RM) *.o *.out

.PHONY: all test clean
