target = reverse_polish_calculator.out
objects = main.o function.o variable.o stack.o getop.o getch.o
CFLAGS = -ansi

$(target): $(objects)
	$(CC) -o $@ $^ -lm

$(objects): calc.h

test: $(target)
	@bash ../../test.sh testdata/tests.txt

clean:
	$(RM) $(target) $(objects)

.PHONY: clean
