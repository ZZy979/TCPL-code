target = sort.out
objects = main.o ../sort/lineio.o ../alloc.o ../../ch4/getline.o qsort.o numcmp.o
CFLAGS = -ansi

$(target): $(objects)
	$(CC) -o $@ $(LDFLAGS) $^ $(LDLIBS)

main.o: ../sort/lineio.h qsort.h numcmp.h
qsort.o: qsort.h
numcmp.o: numcmp.h

test: $(target)
	@bash ../../test.sh testdata/tests.txt

clean:
	$(RM) $(target) $(objects)

.PHONY: clean
