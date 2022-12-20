#/*****************************************************************************
#* Copyright (C) 2017 by Charles Edward Pax                                   *
#*                                                                            *
#* This file is a part of Hello                                               *
#*                                                                            *
#* Hello is an example program demonstrating several aspects of               *
#* C programming, Doxygen documentation, and Make.                            *
#*                                                                            *
#* Hello is distributed in the hope that it will be useful, but WITHOUT       *
#* ANY WARRANTY; eithout even the implied warranty of MERCHANTABILITY or      *
#* FITNESS FOR A PARTIFULAR PURPOSE. See the GNU Lesser General Public        *
#* License for more details.                                                  *
#*                                                                            *
#* You should have received a copy of the GNU Lesser General Public License   *
#* along with Box. If not, see <http://www.gnu.org/license/>.                 *
#*                                                                            *
#******************************************************************************/

# This Makefile tells the program 'make' what to do to compile the program.

# This defines the name of the executable the compiler will create.
APPNAME="hello"

# This defines the C compiler to use. You can use clang or another compiler you have installed.
CC=gcc

# This defined what directories to include in the compiler search path.
CFLAGS=-I. -lncurses

DEPS = foo.h

OBJ = foo.o main.o

all: $(APPNAME)

%.o: %.c $(DEPS)
	$(CC) -c -o $@ $< $(CFLAGS)

# In this section we put an '@' in front of the command. When the Makefile
# is run the output of this command will not be displayed in the terminal.
# $@ refers to what is on the left side of ':'.
# $^ refers to what is on the right side of ':'.
$(APPNAME): $(OBJ)
	@gcc -o $@ $^ $(CFLAGS)

# This section defines which Make commands should be run even if no
# dependencies have changed.
.PHONY: all clean tags docs

run: $(APPNAME)
	@./$(APPNAME)

tags:
	ctags -R .

# run 'doxygen -g' to create an initial Doxyfile
docs:
	doxygen Doxyfile 

man_install:
	@cp -r docs/man/man3/ /usr/local/share/man/
	mandb

man_uninstall:
	@rm -rf /usr/local/share/man/man3/*hello.3
	@mandb

clean:
	@rm -f *.o $(APPNAME)
	@rm -rf docs
	@rm -rf tags

