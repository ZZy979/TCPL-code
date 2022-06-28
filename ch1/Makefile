SOURCES = $(wildcard *.c)
FUNC_TARGETS = getline.o
EXEC_SOURCES = $(filter-out getline.c,$(SOURCES))
EXEC_TARGETS = $(EXEC_SOURCES:.c=.out)
TARGETS = $(FUNC_TARGETS) $(EXEC_TARGETS)
CFLAGS = -ansi

all: $(TARGETS)

%.out: %.o
	$(CC) -o $@ $^

print_longest_line.out: print_longest_line.o getline.o
exec1-16.out: exec1-16.o getline.o
exec1-17.out: exec1-17.o getline.o
exec1-18.out: exec1-18.o getline.o
exec1-19.out: exec1-19.o getline.o
exec1-22.out: exec1-22.o getline.o

exec1-21.out: exec1-21.o
	$(CC) -o $@ $< -lm

test: all
	@bash ../test.sh testdata/tests.txt

clean:
	$(RM) *.o *.out

.PHONY: all test clean
