HEADERS = $(wildcard *.h)
FUNC_TARGETS = $(HEADERS:.h=.o) getword2.o
EXEC_TARGETS =
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

rect.o: rect.c rect.h point.h
getword.o: getword.c getword.h ../ch4/getch.h
getword2.o: getword2.c getword.h ../ch4/getch.h
hash_table.o: hash_table.c hash_table.h strdup.h

%.out: %.o
	$(CC) -o $@ $^

%_test.out: %_test.o %.o
	$(CC) -o $@ $^

getword_test.out: getword_test.o getword.o ../ch4/getch.o
getword2_test.out: getword2_test.o getword2.o ../ch4/getch.o
hash_table_test.out: hash_table_test.o hash_table.o strdup.o

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
