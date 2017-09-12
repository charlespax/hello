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

run: $(APPNAME)
	echo $(APPNAME)
	./$(APPNAME)

tags:
	ctags -R .

# run 'doxygen -g' to create an initial Doxyfile
docs:
	doxygen Doxyfile 

clean:
	@rm -f *.o $(APPNAME)
	@rm -rf docs
