#include <stdio.h>
#include <stdlib.h>
// Program to convert a 32-bit Decimal numbers to Binary
// 1) Do not change the signature of convert_2, or your task receives zero
// 2) No globals allowed.
char *convert_2(int dec)
{
	// TODO: your implementation

	char *bin = (char *)malloc(sizeof(char) * 50);

	int makePositive = abs(dec);

	bin[0] = '0';
	bin[1] = '1';

	for (int i = 2; i < 34; i++)
	{
		if (i % 4 == 0)
		{
			bin[i] = ' ';
		}
		if (makePositive % 2 == 0)
		{
			bin[i] = 1;
		}
		else
		{
			bin[i] = 0;
		}
	}

	// char *bin = malloc(34 * sizeof(char));
	//
	// // if dec is negative
	// if (dec < 0)
	// {
	// 	dec *= -1;
	// 	for (int i = 0; i < 32; i++)
	// 	{
	// 		if (dec % 2 == 1)
	// 		{
	// 			bin[34 - i] = '1';
	// 		}
	// 		else
	// 		{
	// 			bin[34 - i] = '0';
	// 		}
	// 		dec /= 2;
	// 	}
	// }
	// // otherwise
	// else
	// {
	// 	for (int i = 0; i < 32; i++)
	// 	{
	// 		if (dec % 2 == 1)
	// 		{
	// 			bin[34 - i] = '1';
	// 		}
	// 		else
	// 		{
	// 			bin[34 - i] = '0';
	// 		}
	// 		dec /= 2;
	// 	}
	// }

	bin[34] = '\0';

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