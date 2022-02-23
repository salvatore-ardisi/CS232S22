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

	// int temp = 1;

	// for (unsigned int i = 0; i <= end; i++)
	// {
	// 	if (i >= start && x < (x ^ temp))
	// 	{
	// 		a[i] = 0;
	// 	}
	// 	else
	// 	{
	// 		a[i] = 1;
	// 	}
	// 	temp <<= 1;
	// }
	// return a;
}