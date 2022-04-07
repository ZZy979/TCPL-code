TARGETS = grep.out rudimentary_calculator.out
CFLAGS = -ansi

all: $(TARGETS)

%.o: %.c %.h
	$(CC) -c -o $@ $(CFLAGS) $<

atof2.o: atof2.c atof.h

%.out: %.o
	$(CC) -o $@ $(LDFLAGS) $^ $(LDLIBS)

grep.out: grep.o getline.o strindex.o
rudimentary_calculator.out: rudimentary_calculator.o getline.o atof.o

clean:
	$(RM) *.o *.out

.PHONY: all clean
