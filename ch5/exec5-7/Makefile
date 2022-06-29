target = sort.out
objects = main.o lineio.o ../../ch4/getline.o ../sort/qsort.o
CFLAGS = -ansi

$(target): $(objects)
	$(CC) -o $@ $^

main.o: lineio.h ../sort/qsort.h
lineio.o: lineio.h ../../ch4/getline.h

test: $(target)
	@bash ../../test.sh testdata/tests.txt

clean:
	$(RM) $(target) $(objects)

.PHONY: clean
