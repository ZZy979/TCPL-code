HEADERS = $(wildcard *.h)
FUNC_TARGETS = $(HEADERS:.h=.o) getint2.o strlen2.o strcpy2.o strcpy3.o strcpy4.o strcmp2.o \
	date_conversion2.o date_conversion3.o
EXEC_TARGETS = echo.out echo_v2.out find.out find_v2.out
TARGETS = $(FUNC_TARGETS) $(EXEC_TARGETS)
TESTS = $(FUNC_TARGETS:.o=_test.out)
SUBDIRS = $(filter-out testdata/,$(shell ls -d */))
CFLAGS = -ansi -Wno-builtin-declaration-mismatch

all: $(TARGETS) $(TESTS)
	for dir in $(SUBDIRS); do \
	  $(MAKE) -C $$dir; \
	done

%.o: %.c %.h
	$(CC) -c -o $@ $(CFLAGS) $<

# Make不方便的地方：想复用ch4/reverse_polish_calculator/getch.c就很困难
getint.o: getint.c getint.h getch.h
getint2.o: getint2.c getint.h getch.h
getfloat.o: getfloat.c getfloat.h getch.h
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
	$(CC) -o $@ $(LDFLAGS) $^ $(LDLIBS)

find.out: find.o ../ch4/getline.o
find_v2.out: find_v2.o ../ch4/getline.o

%_test.out: %_test.o %.o
	$(CC) -o $@ $(LDFLAGS) $^ $(LDLIBS)

getint_test.out: getint_test.o getint.o getch.o
getint2_test.out: getint2_test.o getint2.o getch.o
getfloat_test.out: getfloat_test.o getfloat.o getch.o

strlen_test.out: ../ch2/strlen_test.o strlen.o
	$(CC) -o $@ $(LDFLAGS) $^ $(LDLIBS)

strlen2_test.out: ../ch2/strlen_test.o strlen2.o
	$(CC) -o $@ $(LDFLAGS) $^ $(LDLIBS)

strcpy2_test.out: strcpy_test.o strcpy2.o
	$(CC) -o $@ $(LDFLAGS) $^ $(LDLIBS)

strcpy3_test.out: strcpy_test.o strcpy3.o
	$(CC) -o $@ $(LDFLAGS) $^ $(LDLIBS)

strcpy4_test.out: strcpy_test.o strcpy4.o
	$(CC) -o $@ $(LDFLAGS) $^ $(LDLIBS)

strcmp2_test.out: strcmp_test.o strcmp2.o
	$(CC) -o $@ $(LDFLAGS) $^ $(LDLIBS)

strcat_test.out: ../ch2/strcat_test.o strcat.o
	$(CC) -o $@ $(LDFLAGS) $^ $(LDLIBS)

date_conversion3_test.out: date_conversion_test.o date_conversion3.o
	$(CC) -o $@ $(LDFLAGS) $^ $(LDLIBS)

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
