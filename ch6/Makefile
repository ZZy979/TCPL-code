HEADERS = $(wildcard *.h)
TARGETS = $(HEADERS:.h=.o)
SUBDIRS = $(filter-out testdata/,$(shell ls -d */))
CFLAGS = -ansi

all: $(TARGETS)
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

$(addsuffix %,$(SUBDIRS)):
	$(MAKE) -C $(@D) $(@F)

test: all
	@bash ../test.sh testdata/tests.txt

clean:
	$(RM) *.o *.out
	for dir in $(SUBDIRS); do \
	  $(MAKE) -C $$dir clean; \
	done

.PHONY: all test clean
