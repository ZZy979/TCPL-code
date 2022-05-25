HEADERS = $(wildcard *.h)
TARGETS = $(HEADERS:.h=.o)
SUBDIRS = $(shell ls -d */)
CFLAGS = -ansi

all: $(TARGETS)
	for dir in $(SUBDIRS); do \
	  $(MAKE) -C $$dir; \
	done

%.o: %.c %.h
	$(CC) -c -o $@ $(CFLAGS) $<

rect.o: rect.c rect.h point.h

%.out: %.o
	$(CC) -o $@ $(LDFLAGS) $^ $(LDLIBS)

$(addsuffix %,$(SUBDIRS)):
	$(MAKE) -C $(@D) $(@F)

clean:
	$(RM) *.o *.out
	for dir in $(SUBDIRS); do \
	  $(MAKE) -C $$dir clean; \
	done

.PHONY: all clean
