target = reverse_polish_calculator.out
objects = main.o stack.o getop.o getch.o
CFLAGS = -ansi

$(target): $(objects)
	$(CC) -o $@ $(LDFLAGS) $^ $(LDLIBS)

$(objects): calc.h

clean:
	$(RM) $(target) $(objects)

.PHONY: clean
