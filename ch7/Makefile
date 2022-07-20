HEADERS = $(wildcard *.h)
FUNC_TARGETS = $(HEADERS:.h=.o) minprintf2.o
EXEC_TARGETS = lower.out tolower.out toupper.out file_copying.out exec7-2.out \
	rudimentary_calculator.out cat.out cat_v2.out diff.out find.out
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

exec7-2.o: exec7-2.c ../ch4/getline.h
minprintf2.o: minprintf2.c minprintf.h
cat.o: cat.c filecopy.h
cat_v2.o: cat_v2.c filecopy.h

%.out: %.o
	$(CC) -o $@ $^

exec7-2.out: exec7-2.o ../ch4/getline.o
minprintf2_test.out: minprintf2_test.o minprintf2.o
cat.out: cat.o filecopy.o
cat_v2.out: cat_v2.o filecopy.o

tolower.out toupper.out file_copying.out: exec7-1.o
	$(CC) -o $@ $^

%_test.out: %_test.o %.o
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
