target = sort.out
objects = main.o ../sort/readlines.o ../sort/writelines.o qsort.o numcmp.o ../alloc.o ../../ch4/getline.o
CFLAGS = -ansi

$(target): $(objects)
	$(CC) -o $@ $^

main.o: ../sort/readlines.h ../sort/writelines.h qsort.h numcmp.h
qsort.o: qsort.h
numcmp.o: numcmp.h

test: $(target)
	@bash ../../test.sh testdata/tests.txt

clean:
	$(RM) $(target) $(objects)

.PHONY: clean
