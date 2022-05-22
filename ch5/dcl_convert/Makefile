dcl_target = dcl.out
dcl_objects = dcl.o lexer.o parser.o ../getch.o
undcl_target = undcl.out
undcl_objects = undcl.o lexer.o ../getch.o
CFLAGS = -ansi

all: $(dcl_target) $(undcl_target)

%.out: %.o
	$(CC) -o $@ $(LDFLAGS) $^ $(LDLIBS)

$(dcl_target): $(dcl_objects)
$(undcl_target): $(undcl_objects)

dcl.o: lexer.h parser.h
undcl.o: lexer.h
lexer.o: lexer.h ../getch.h
parser.o: parser.h lexer.h

clean:
	$(RM) $(dcl_target) $(undcl_target) $(sort $(dcl_objects) $(undcl_objects))

.PHONY: all clean
