#include <stdio.h>
#include <stdlib.h>
// Program to convert a 32-bit Decimal numbers to Binary
// 1) Do not change the signature of convert_2, or your task receives zero
// 2) No globals allowed.
char *convert_2(int dec)
{
	char *bin = (char *)malloc(sizeof(char) * 34);

	int makePositive = abs(dec);

	for (int i = 1; i <= 32; i++)
	{
		if (makePositive % 2 == 0)
		{
			bin[32 - i] = '0';
			makePositive /= 2;
		}
		else if (makePositive % 2 == 1)
		{
			bin[32 - i] = '1';
			makePositive /= 2;
		}
	}

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