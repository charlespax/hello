# This Makefile tells the program 'make' what to do to compile the program.

# This defines the name of the executable the compiler will create.
APPNAME="hello"

# This defines the C compiler to use. You can use clang or another compiler you have installed.
CC=gcc

# This defined what directories to include in the compiler search path.
CFLAGS=-I.

DEPS = foo.h

OBJ = foo.o main.o

%.o: %.c $(DEPS)
	$(CC) -c -o $@ $< $(CFLAGS)

# In this section we put an '@' in front of the command. When the Makefile
# is run the output of this command will not be displayed in the terminal.
$(APPNAME): $(OBJ)
	@gcc -o $@ $^ $(CFLAGS)

# This section defines which Make commands should be run even if no
# dependencies have changed.
.PHONY: clean tags docs

run: $(OUTNAME)
	./$(OUTNAME)

tags:
	ctags -R .

# run 'doxygen -g' to create an initial Doxyfile
docs:
	doxygen Doxyfile 

clean:
	@rm -f *.o $(OUTNAME)
	@rm -rf latex/ html/
