/******************************************************************************
 * Copyright (C) 2017 by Charles Edward Pax                                   *
 *                                                                            *
 * This file is a part of Hello                                               *
 *                                                                            *
 * Hello is an example program demonstrating several aspects of               *
 * C programming, Doxygen documentation, and Make.                            *
 *                                                                            *
 * Hello is distributed in the hope that it will be useful, but WITHOUT       *
 * ANY WARRANTY; eithout even the implied warranty of MERCHANTABILITY or      *
 * FITNESS FOR A PARTIFULAR PURPOSE. See the GNU Lesser General Public        *
 * License for more details.                                                  *
 *                                                                            *
 * You should have received a copy of the GNU Lesser General Public License   *
 * along with Box. If not, see <http://www.gnu.org/license/>.                 *
 *                                                                            *
 ******************************************************************************/

/**
 * \file main.c
 * \author Charles Edward Pax <charles.pax@gmail.com>
 * \date 2017-07-18
 * \brief File containing example C code and Doxygen documentation
 *
 * \details This is where would be written a more in-depth explaination of
 * this file and what it does.
 *
 * @see http://paxinstruments.com/store/
 */

#include <stdio.h>
#include "foo.h"
#include <time.h>
#include <stdlib.h>
#include "colors.h"

/**
 *  \brief The main() program.
 *
 *  \return 0 on success
 */

int main(void)
{
    int rando = foo(rand()); // A random number */
    int i = 0;
    long c = 0;
    int max = 15; // Maximum number of attempts */

    srand(time(NULL)); // Initialize the Pseudo-Random Number Generator (PPRNG)

    // Get an integer from standard input
    printf(CYAN "Hello, " BOLD "world!\n" ANSI_RESET);
    printf("Let's get this done in %i trys.\n", max);
    printf("Enter an integer " UNDER "value" ANSI_RESET ": ");
    scanf("%li", &c);

    // Generate random numbers until one is less than user input
    do {
        rando=rand()/100000;
        printf("%d %d\n", i, rando);
        i++;
    } while(rando>c && i<=15);

    // Tell the user what they entered and the square
    printf("\n");
    printf("Number of tries: %i\n", i);
    printf("Status: ");
    if (i>max) {
        printf(RED "ERROR" ANSI_RESET);
    } else {
        printf(GREEN "Success!" ANSI_RESET);
    }
    printf("\n");
    printf("You entered: %li\n", c);
    printf("%li squared: %li\n", c, square(c));

    printf("Here is the contents of this directory:\n");
    system("dir");

    printf("Here is the first few lines of main.c:\n");
    system("head -5 main.c");

    return 0;
}
