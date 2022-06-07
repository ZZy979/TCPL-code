SUBDIRS = $(shell ls -d ch*)

all: $(SUBDIRS)

$(SUBDIRS):
	$(MAKE) -C $@

test:
	$(MAKE) -C ch1 test

clean:
	for dir in $(SUBDIRS); do \
	  $(MAKE) -C $$dir clean; \
	done

.PHONY: all $(SUBDIRS) test clean
