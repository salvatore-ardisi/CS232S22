#include <stdio.h>
#include <stdlib.h>

// Note, the bits are counted from right to left.
// Flip the bits of x within range [start, end], in which both are inclusive.
// Assume 0 <= start & end <= 31
void flip_bits(unsigned *x,
               unsigned start,
               unsigned end)
{
    unsigned *a = (unsigned *)malloc(sizeof(unsigned) * (end - start + 1));

    for (unsigned i = 0; i < (end - start) + 1; i++)
    {
        a[i] = ~*x;
    }
}