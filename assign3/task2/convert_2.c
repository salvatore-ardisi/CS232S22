#include <stdio.h>
#include <stdlib.h>
// Program to convert a 32-bit Decimal numbers to Binary
// 1) Do not change the signature of convert_2, or your task receives zero
// 2) No globals allowed.
char *convert_2(int dec)
{
	char *bin = (char *)malloc(sizeof(char) * 37);

	int makePositive = abs(dec);

	for (int i = 0; i <= 37; i++)
	{
		if (makePositive % 2 == 0)
		{
			bin[35 - i] = '0';
			makePositive /= 2;
		}
		else if (makePositive % 2 == 1)
		{
			bin[35 - i] = '1';
			makePositive /= 2;
		}
		if (i % 5 == 0)
		{
			bin[36 - i] = ' ';
		}
	}

	bin[0] = '0';
	bin[1] = 'b';

	bin[37] = '\0';

	return bin;
}

int main()
{
	int n;
	char *bin;
	printf("Enter the Decimal Number\n");
	scanf("%d", &n);
	bin = convert_2(n);
	printf("The Binary Notation of %d is\t %s\n", n, bin);
	// TODO: do we need to release the memory of bin?
	free(bin);
}