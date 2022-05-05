target = sort.out
objects = main.o lineio.o ../../ch4/getline.o ../sort/qsort.o
CFLAGS = -ansi

$(target): $(objects)
	$(CC) -o $@ $(LDFLAGS) $^ $(LDLIBS)

main.o: lineio.h ../sort/qsort.h
lineio.o: lineio.h ../../ch4/getline.h

clean:
	$(RM) $(target) $(objects)

.PHONY: clean
