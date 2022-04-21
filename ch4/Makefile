HEADERS = $(filter-out swap_macro.h,$(wildcard *.h))
TARGETS = $(HEADERS:.h=.o) grep.out rudimentary_calculator.out atof2.o getch2.o
SUBDIRS = $(shell ls -d */)
CFLAGS = -ansi

all: $(TARGETS)
	for dir in $(SUBDIRS); do \
	  $(MAKE) -C $$dir; \
	done

%.o: %.c %.h
	$(CC) -c -o $@ $(CFLAGS) $<

atof2.o: atof2.c atof.h

%.out: %.o
	$(CC) -o $@ $(LDFLAGS) $^ $(LDLIBS)

grep.out: grep.o getline.o strindex.o
rudimentary_calculator.out: rudimentary_calculator.o getline.o atof.o

$(addsuffix %,$(SUBDIRS)):
	$(MAKE) -C $(@D) $(@F)

clean:
	$(RM) *.o *.out
	for dir in $(SUBDIRS); do \
	  $(MAKE) -C $$dir clean; \
	done

.PHONY: all clean
