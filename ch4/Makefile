HEADERS = $(wildcard *.h)
FUNC_TARGETS = $(HEADERS:.h=.o) atof2.o getch2.o
EXEC_TARGETS = grep.out rudimentary_calculator.out
TEST_TARGETS = $(FUNC_TARGETS:.o=_test.out)
TARGETS = $(FUNC_TARGETS) $(EXEC_TARGETS) $(TEST_TARGETS)
SUBDIRS = $(filter-out testdata/,$(shell ls -d */))
CFLAGS = -ansi

all: $(TARGETS)
	for dir in $(SUBDIRS); do \
	  $(MAKE) -C $$dir; \
	done

%.o: %.c %.h
	$(CC) -c -o $@ $(CFLAGS) $<

atof2.o: atof2.c atof.h
getch2.o: getch2.c getch.h

%.out: %.o
	$(CC) -o $@ $^

grep.out: grep.o getline.o strindex.o
rudimentary_calculator.out: rudimentary_calculator.o getline.o atof.o

%_test.out: %_test.o %.o
	$(CC) -o $@ $^

ungets_test.out: ungets_test.o ungets.o getch.o

atof2_test.out: atof2_test.o atof2.o
	$(CC) -o $@ $^ -lm

itoa_test.out: ../ch3/itoa_test.o itoa.o
	$(CC) -o $@ $^

reverse_test.out: ../ch3/reverse_test.o reverse.o
	$(CC) -o $@ $^

$(addsuffix %,$(SUBDIRS)):
	$(MAKE) -C $(@D) $(@F)

test: all
	@bash ../test.sh testdata/tests.txt
	for dir in $(SUBDIRS); do \
	  $(MAKE) -C $$dir test; \
	done

clean:
	$(RM) *.o *.out
	for dir in $(SUBDIRS); do \
	  $(MAKE) -C $$dir clean; \
	done

.PHONY: all test clean
