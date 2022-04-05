SOURCES = $(shell ls *.c)
TARGETS = $(SOURCES:.c=.out)
CFLAGS = -ansi

all: $(TARGETS)

%.out: %.o
	$(CC) -o $@ $(LDFLAGS) $< $(LDLIBS)

exec1-21.out: exec1-21.o
	$(CC) -o $@ $(LDFLAGS) $< -lm

clean:
	$(RM) *.o *.out

.PHONY: all clean
