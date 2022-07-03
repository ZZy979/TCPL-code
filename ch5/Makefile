HEADERS = $(wildcard *.h)
FUNC_TARGETS = $(HEADERS:.h=.o) getint2.o strlen2.o strcpy2.o strcpy3.o strcpy4.o strcmp2.o \
	date_conversion2.o date_conversion3.o
EXEC_TARGETS = echo.out echo_v2.out find.out find_v2.out expr.out
TEST_TARGETS = $(FUNC_TARGETS:.o=_test.out)
TARGETS = $(FUNC_TARGETS) $(EXEC_TARGETS) $(TEST_TARGETS)
SUBDIRS = $(filter-out testdata/,$(shell ls -d */))
CFLAGS = -ansi -Wno-builtin-declaration-mismatch

all: $(TARGETS)
	for dir in $(SUBDIRS); do \
	  $(MAKE) -C $$dir; \
	done

%.o: %.c %.h
	$(CC) -c -o $@ $(CFLAGS) $<

# Make不方便的地方：想复用ch4/reverse_polish_calculator/getch.c就很困难
getint.o: getint.c getint.h ../ch4/getch.h
getint2.o: getint2.c getint.h ../ch4/getch.h
getfloat.o: getfloat.c getfloat.h ../ch4/getch.h
strlen2.o: strlen2.c strlen.h
strcpy2.o: strcpy2.c strcpy.h
strcpy3.o: strcpy3.c strcpy.h
strcpy4.o: strcpy4.c strcpy.h
strcmp2.o: strcmp2.c strcmp.h
date_conversion2.o: date_conversion2.c date_conversion.h
date_conversion3.o: date_conversion3.c date_conversion.h
find.o: find.c ../ch4/getline.h
find_v2.o: find_v2.c ../ch4/getline.h

%.out: %.o
	$(CC) -o $@ $^

find.out: find.o ../ch4/getline.o
find_v2.out: find_v2.o ../ch4/getline.o
expr.out: expr.o ../ch4/reverse_polish_calculator/stack.o

%_test.out: %_test.o %.o
	$(CC) -o $@ $^

getint_test.out: getint_test.o getint.o ../ch4/getch.o
getint2_test.out: getint2_test.o getint2.o ../ch4/getch.o
getfloat_test.out: getfloat_test.o getfloat.o ../ch4/getch.o

strlen_test.out: ../ch2/strlen_test.o strlen.o
	$(CC) -o $@ $^

strlen2_test.out: ../ch2/strlen_test.o strlen2.o
	$(CC) -o $@ $^

strcpy2_test.out: strcpy_test.o strcpy2.o
	$(CC) -o $@ $^

strcpy3_test.out: strcpy_test.o strcpy3.o
	$(CC) -o $@ $^

strcpy4_test.out: strcpy_test.o strcpy4.o
	$(CC) -o $@ $^

strcmp2_test.out: strcmp_test.o strcmp2.o
	$(CC) -o $@ $^

strcat_test.out: ../ch2/strcat_test.o strcat.o
	$(CC) -o $@ $^

date_conversion3_test.out: date_conversion_test.o date_conversion3.o
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
