HEADERS = $(wildcard *.h)
FUNC_TARGETS = $(HEADERS:.h=.o)
EXEC_TARGETS =
TARGETS = $(FUNC_TARGETS) $(EXEC_TARGETS)
TESTS = $(FUNC_TARGETS:.o=_test.out)
SUBDIRS = $(filter-out testdata/,$(shell ls -d */))
CFLAGS = -ansi

all: $(TARGETS) $(TESTS)
	for dir in $(SUBDIRS); do \
	  $(MAKE) -C $$dir; \
	done

%.o: %.c %.h
	$(CC) -c -o $@ $(CFLAGS) $<

rect.o: rect.c rect.h point.h
getword.o: getword.c getword.h ../ch5/getch.h
hash_table.o: hash_table.c hash_table.h strdup.h

%.out: %.o
	$(CC) -o $@ $(LDFLAGS) $^ $(LDLIBS)

%_test.out: %_test.o %.o
	$(CC) -o $@ $(LDFLAGS) $^ $(LDLIBS)

getword_test.out: getword_test.o getword.o ../ch5/getch.o
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
