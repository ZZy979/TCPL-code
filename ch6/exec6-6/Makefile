target = define_processor.out
objects = main.o getword.o ../../ch4/getch.o ../hash_table.o ../strdup.o
CFLAGS = -ansi

$(target): $(objects)
	$(CC) -o $@ $^

main.o: getword.h ../hash_table.h
getword.o: getword.h ../../ch4/getch.h

test: $(target)
	@bash ../../test.sh testdata/tests.txt

clean:
	$(RM) $(target) $(objects)

.PHONY: clean
