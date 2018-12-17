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
 * \file foo.c
 * \author Charles Edward Pax <charles.pax@gmail.com>
 * \date 2017-07-18
 * \brief File containing example C code and Doxygen documentation
 *
 * \details This is where would be written a more in-depth explaination of
 * this file and what it does.
 *
 * @see http://paxinstruments.com/store/
 */

#include "foo.h"  /* Include the header (not strictly necessary here) */

/**
 *  \brief Return the input x + 5
 *
 *  \param[in] x is an integer to which you would like to add five.
 *  \param[out] a is x + 5.
 *
 *  \return a
 */

int foo(int x)
{
    int a = 0;
    a = x+5;
    return a;
}

/**
 *  \brief Returns the square of the input
 *
 *  \param[in] x is an you would like to squa
 *  \param[out] a is x squared
 *
 *  \return a
 */

long square(int x)
{
    int a = x * x;
    return a;
}

void delay(unsigned int mseconds)
{
    clock_t goal = mseconds + clock();
    while (goal > clock ());
}
