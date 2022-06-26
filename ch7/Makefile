HEADERS = $(wildcard *.h)
FUNC_TARGETS = $(HEADERS:.h=.o)
EXEC_TARGETS = lower.out rudimentary_calculator.out cat.out cat_v2.out
TEST_TARGETS = $(FUNC_TARGETS:.o=_test.out)
TARGETS = $(FUNC_TARGETS) $(EXEC_TARGETS) $(TEST_TARGETS)
CFLAGS = -ansi

all: $(TARGETS)

%.o: %.c %.h
	$(CC) -c -o $@ $(CFLAGS) $<

cat.o: cat.c filecopy.h
cat_v2.o: cat_v2.c filecopy.h

%.out: %.o
	$(CC) -o $@ $^

cat.out: cat.o filecopy.o
cat_v2.out: cat_v2.o filecopy.o

%_test.out: %_test.o %.o
	$(CC) -o $@ $^

test: all
	@bash ../test.sh testdata/tests.txt

clean:
	$(RM) *.o *.out

.PHONY: all test clean
