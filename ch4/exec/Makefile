target = reverse_polish_calculator.out
objects = main.o function.o stack.o getop.o getch.o
CFLAGS = -ansi

$(target): $(objects)
	$(CC) -o $@ $(LDFLAGS) $^ -lm

$(objects): calc.h

clean:
	$(RM) $(target) $(objects)

.PHONY: clean
