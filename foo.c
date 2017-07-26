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

