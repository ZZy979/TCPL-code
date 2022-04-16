TARGETS = grep.out rudimentary_calculator.out reverse_polish_calculator/reverse_polish_calculator.out \
	exec/reverse_polish_calculator.out
CFLAGS = -ansi

all: $(TARGETS)

%.o: %.c %.h
	$(CC) -c -o $@ $(CFLAGS) $<

atof2.o: atof2.c atof.h

%.out: %.o
	$(CC) -o $@ $(LDFLAGS) $^ $(LDLIBS)

grep.out: grep.o getline.o strindex.o
rudimentary_calculator.out: rudimentary_calculator.o getline.o atof.o

reverse_polish_calculator/reverse_polish_calculator.out exec/reverse_polish_calculator.out:
	$(MAKE) -C $(@D) $(@F)

clean:
	$(RM) *.o *.out
	$(MAKE) -C reverse_polish_calculator clean
	$(MAKE) -C exec clean

.PHONY: all clean
