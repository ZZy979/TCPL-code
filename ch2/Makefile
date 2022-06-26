HEADERS = $(wildcard *.h)
FUNC_TARGETS = $(HEADERS:.h=.o) bitcount2.o lower2.o
EXEC_TARGETS = exec2-1.out
TEST_TARGETS = $(FUNC_TARGETS:.o=_test.out)
TARGETS = $(FUNC_TARGETS) $(EXEC_TARGETS) $(TEST_TARGETS)
CFLAGS = -ansi -Wno-builtin-declaration-mismatch

all: $(TARGETS)

%.o: %.c %.h
	$(CC) -c -o $@ $(CFLAGS) $<

bitcount2.o: bitcount2.c bitcount.h
lower2.o: lower2.c lower.h

%.out: %.o
	$(CC) -o $@ $^

%_test.out: %_test.o %.o
	$(CC) -o $@ $^

squeeze2_test.out: squeeze2_test.o squeeze2.o squeeze.o

bitcount2_test.out: bitcount_test.o bitcount2.o
	$(CC) -o $@ $^

lower2_test.out: lower_test.o lower2.o
	$(CC) -o $@ $^

test: all
	@bash ../test.sh testdata/tests.txt

clean:
	$(RM) *.o *.out

.PHONY: all test clean
