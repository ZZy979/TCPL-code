SOURCES = $(shell ls *.c)
TARGETS = $(addprefix output/,$(SOURCES:.c=.out))
CFLAGS = -ansi

all: $(TARGETS)

output/%.out: %.c
	@[ -d output ] || mkdir output
	$(CC) -o $@ $(CFLAGS) $<

clean:
	rm -r output

.PHONY: all clean
