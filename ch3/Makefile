HEADERS = $(wildcard *.h)
FUNC_TARGETS = $(HEADERS:.h=.o) itoa2.o
EXEC_TARGETS = exec3-1.out character_counting_switch.out
TEST_TARGETS = $(FUNC_TARGETS:.o=_test.out)
TARGETS = $(FUNC_TARGETS) $(EXEC_TARGETS) $(TEST_TARGETS)
CFLAGS = -ansi

all: $(TARGETS)

%.o: %.c %.h
	$(CC) -c -o $@ $(CFLAGS) $<

itoa.o: itoa.c itoa.h reverse.h
itoa2.o: itoa2.c itoa.h reverse.h
itoa3.o: itoa3.c itoa3.h reverse.h
itob.o: itob.c itob.h reverse.h

%.out: %.o
	$(CC) -o $@ $^

exec3-1.out: exec3-1.o binsearch.o binsearch2.o
	$(CC) -o $@ $^

%_test.out: %_test.o %.o
	$(CC) -o $@ $^

itoa_test.out: itoa_test.o itoa.o reverse.o
itoa2_test.out: itoa2_test.o itoa2.o reverse.o
itoa3_test.out: itoa3_test.o itoa3.o reverse.o
itob_test.out: itob_test.o itob.o reverse.o

test: all
	@bash ../test.sh testdata/tests.txt

clean:
	$(RM) *.o *.out

.PHONY: all test clean
