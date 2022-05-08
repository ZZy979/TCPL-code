HEADERS = $(wildcard *.h)
TARGETS = $(HEADERS:.h=.o)
SUBDIRS = $(shell ls -d */)
CFLAGS = -ansi -Wno-builtin-declaration-mismatch

all: $(TARGETS)
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

%.out: %.o
	$(CC) -o $@ $(LDFLAGS) $< $(LDLIBS)

$(addsuffix %,$(SUBDIRS)):
	$(MAKE) -C $(@D) $(@F)

clean:
	$(RM) *.o *.out
	for dir in $(SUBDIRS); do \
	  $(MAKE) -C $$dir clean; \
	done

.PHONY: all clean
