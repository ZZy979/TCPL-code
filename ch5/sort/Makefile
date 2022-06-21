target = sort.out
objects = main.o lineio.o ../alloc.o ../../ch4/getline.o qsort.o
CFLAGS = -ansi

$(target): $(objects)
	$(CC) -o $@ $(LDFLAGS) $^ $(LDLIBS)

main.o: lineio.h qsort.h
lineio.o: lineio.h ../../ch4/getline.h ../alloc.h
qsort.o: qsort.h

# Make不方便的地方：../alloc.o和../../ch4/getline.o是用当前Makefile的隐式规则%o: %c构建的
# 而不是对应目录下的Makefile中的规则（没有将.h作为前置条件），除非手动写一个规则

test: $(target)
	@bash ../../test.sh testdata/tests.txt

clean:
	$(RM) $(target) $(objects)

.PHONY: clean
