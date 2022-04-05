TARGETS = grep.out
CFLAGS = -ansi

all: $(TARGETS)

%.o: %.c %.h
	$(CC) -c -o $@ $(CFLAGS) $<

%.out: %.o
	$(CC) -o $@ $(LDFLAGS) $^ $(LDLIBS)

grep.out: grep.o getline.o strindex.o

clean:
	$(RM) *.o *.out

.PHONY: all clean
