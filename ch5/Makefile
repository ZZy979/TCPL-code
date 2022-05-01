HEADERS = $(wildcard *.h)
TARGETS = $(HEADERS:.h=.o)
CFLAGS = -ansi

all: $(TARGETS)

%.o: %.c %.h
	$(CC) -c -o $@ $(CFLAGS) $<

# Make不方便的地方：想复用ch4/reverse_polish_calculator/getch.c就很困难
getint.o: getint.c getint.h getch.h
getint2.o: getint2.c getint.h getch.h
getfloat.o: getfloat.c getfloat.h getch.h
strlen2.o: strlen2.c strlen.h

%.out: %.o
	$(CC) -o $@ $(LDFLAGS) $< $(LDLIBS)

clean:
	$(RM) *.o *.out

.PHONY: all clean
