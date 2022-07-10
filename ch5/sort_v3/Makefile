target = sort.out
objects = main.o ../sort/readlines.o writelines.o ../sort_v2/qsort.o ../sort_v2/numcmp.o ../alloc.o ../../ch4/getline.o
CFLAGS = -ansi

$(target): $(objects)
	$(CC) -o $@ $^

main.o: ../sort/readlines.h writelines.h ../sort_v2/qsort.h ../sort_v2/numcmp.h
writelines.o: writelines.h

test: $(target)
	@bash ../../test.sh testdata/tests.txt

clean:
	$(RM) $(target) $(objects)

.PHONY: clean
