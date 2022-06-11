HEADERS = $(wildcard *.h)
TARGETS = $(HEADERS:.h=.o) exec3-1.out character_counting_switch.out itoa2.o
CFLAGS = -ansi

all: $(TARGETS)

%.o: %.c %.h
	$(CC) -c -o $@ $(CFLAGS) $<

itoa.o: itoa.c itoa.h reverse.h
itoa2.o: itoa2.c itoa.h reverse.h
itoa3.o: itoa3.c itoa3.h reverse.h
itob.o: itob.c itob.h reverse.h

%.out: %.o
	$(CC) -o $@ $(LDFLAGS) $< $(LDLIBS)

exec3-1.out: exec3-1.o binsearch.o binsearch2.o
	$(CC) -o $@ $(LDFLAGS) $^ $(LDLIBS)

test: all
	@bash ../test.sh testdata/tests.txt

clean:
	$(RM) *.o *.out

.PHONY: all test clean
