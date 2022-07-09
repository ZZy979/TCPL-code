targets = exec5-11_detab.out exec5-11_entab.out exec5-12_detab.out exec5-12_entab.out
objects = $(targets:.out=.o) detab.o entab.o set_tab_stops.o
CFLAGS = -ansi

all: $(targets)

%.out: %.o
	$(CC) -o $@ $^

exec5-11_detab.out exec5-12_detab.out: set_tab_stops.o detab.o
exec5-11_entab.out exec5-12_entab.out: set_tab_stops.o entab.o

exec5-11_detab.o exec5-12_detab.o: set_tab_stops.h detab.h
exec5-11_entab.o exec5-12_entab.o: set_tab_stops.h entab.h

test: $(targets)
	@bash ../../test.sh testdata/tests.txt

clean:
	$(RM) $(targets) $(objects)

.PHONY: all clean
