target = sort_word_freq.out
objects = main.o ../word_freq_count/tnode.o ../strdup.o ../getword.o ../../ch4/getch.o
CFLAGS = -ansi

$(target): $(objects)
	$(CC) -o $@ $^

main.o: ../word_freq_count/tnode.h ../getword.h

test: $(target)
	@bash ../../test.sh testdata/tests.txt

clean:
	$(RM) $(target) $(objects)

.PHONY: clean
