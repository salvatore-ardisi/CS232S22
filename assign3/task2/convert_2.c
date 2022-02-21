#include <stdio.h>
#include <stdlib.h>
// Program to convert a 32-bit Decimal numbers to Binary
// 1) Do not change the signature of convert_2, or your task receives zero
// 2) No globals allowed.
char *convert_2(int dec)
{
	// TODO: your implementation
	char *bin = malloc(33 * sizeof(char));

	// if dec is negative
	if (dec < 0)
	{
		dec *= -1;
		for (int i = 0; i < 32; i++)
		{
			if (dec % 2 == 1)
			{
				bin[33 - i] = '1';
			}
			else
			{
				bin[33 - i] = '0';
			}
			dec /= 2;
		}
	}
	// otherwise
	else
	{
		for (int i = 0; i < 32; i++)
		{
			if (dec % 2 == 1)
			{
				bin[33 - i] = '1';
			}
			else
			{
				bin[33 - i] = '0';
			}
			dec /= 2;
		}
	}

	bin[33] = '\0';

	return bin;
}

int main()
{
	int n;
	char *bin;
	printf("Enter the Decimal Number\n");
	scanf("%d", &n);
	bin = convert_2(n);
	printf("The Binary Notation of %d is\t 0b%s\n", n, bin);
	// TODO: do we need to release the memory of bin?
	free(bin);
}