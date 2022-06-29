dcl_target = dcl.out
dcl_objects = dcl.o lexer.o parser.o ../../ch4/getch.o
undcl_target = undcl.out
undcl_objects = undcl.o lexer.o ../../ch4/getch.o
CFLAGS = -ansi

all: $(dcl_target) $(undcl_target)

%.out: %.o
	$(CC) -o $@ $^

$(dcl_target): $(dcl_objects)
$(undcl_target): $(undcl_objects)

dcl.o: lexer.h parser.h
undcl.o: lexer.h
lexer.o: lexer.h ../../ch4/getch.h
parser.o: parser.h lexer.h

test: $(target)
	@bash ../../test.sh testdata/tests.txt

clean:
	$(RM) $(dcl_target) $(undcl_target) $(sort $(dcl_objects) $(undcl_objects))

.PHONY: all clean
