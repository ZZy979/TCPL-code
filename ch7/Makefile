HEADERS = $(wildcard *.h)
TARGETS = $(HEADERS:.h=.o) lower.out rudimentary_calculator.out cat.out cat_v2.out
CFLAGS = -ansi

all: $(TARGETS)

%.o: %.c %.h
	$(CC) -c -o $@ $(CFLAGS) $<

cat.o: cat.c filecopy.h
cat_v2.o: cat_v2.c filecopy.h

%.out: %.o
	$(CC) -o $@ $(LDFLAGS) $^ $(LDLIBS)

cat.out: cat.o filecopy.o
cat_v2.out: cat_v2.o filecopy.o

test: all
	@bash ../test.sh testdata/tests.txt

clean:
	$(RM) *.o *.out

.PHONY: all test clean
