target = reverse_polish_calculator.out
objects = main.o ../reverse_polish_calculator/stack.o getop.o ../getline.o
CFLAGS = -ansi

$(target): $(objects)
	$(CC) -o $@ $^

$(objects): calc.h

test: $(target)
	@bash ../../test.sh testdata/tests.txt

clean:
	$(RM) $(target) $(objects)

.PHONY: clean
