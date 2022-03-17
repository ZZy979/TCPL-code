TARGETS = exec2-1.out strlen.o atoi.o lower.o rand.o htoi.o
CFLAGS = -ansi

all: $(TARGETS)

%.out: %.o
	$(CC) -o $@ $(CFLAGS) $<

clean:
	rm *.o *.out

.PHONY: all clean
