CFLAGS = -ansi
objects = main.o stack.o getop.o getch.o

reverse_polish_calculator.out: $(objects)
	$(CC) -o $@ $(LDFLAGS) $^ $(LDLIBS)

$(objects): calc.h

clean:
	$(RM) reverse_polish_calculator.out $(objects)

.PHONY: clean
