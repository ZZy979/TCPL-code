target = sort.out
objects = main.o readlines.o ../sort/writelines.o ../sort/qsort.o ../../ch4/getline.o
CFLAGS = -ansi

$(target): $(objects)
	$(CC) -o $@ $^

main.o: readlines.h ../sort/writelines.h ../sort/qsort.h
readlines.o: readlines.h ../../ch4/getline.h

test: $(target)
	@bash ../../test.sh testdata/tests.txt

clean:
	$(RM) $(target) $(objects)

.PHONY: clean
