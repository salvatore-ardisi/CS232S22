#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
// Note, the bits are counted from right to left.
// Return the bit states of x within range of [start, end], in which both are inclusive.
// Assume 0 <= start & end <= 31
unsigned *get_bits(unsigned x, unsigned start, unsigned end)
{
    // get_bits dynamically allocates an array a
    unsigned *a = (unsigned *)malloc(sizeof(unsigned) * (end - start + 1));

    for (unsigned int i = start; i <= end; i++)
    {
        // set a[i] = 1 when (i+start)-th bit of x is 1
        if (x >= start && x < (x ^ end))
        {
            // set a[i] = 1
            a[i] = 1;
        }
        // otherwise
        else
        {
            // set a[i] = 0
            a[i] = 0;
        }
    }
    // returns the address of the array
    return a;
}