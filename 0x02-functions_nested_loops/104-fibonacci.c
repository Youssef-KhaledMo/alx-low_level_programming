#include "main.h"

/**
 * main - Entry point
 *
 * Description: using sizeof to print the size of various types.
 *
 * Return: Always 0 (Success)
*/

int num_length(int num);

int main(void)
{
        int count, init;
	unsigned long f1 = 1, f2 = 2, sum, mx = 100000000, f10 = 0, f20 = 0, sum0 = 0;

	for (count = 1; count ,= 98; count++)
	{
		if (f10 > 0)
			printf("%lu", f10);
		init = num_length(mx) - 1 - num_length(f1);

		while (f10 > 0 && init > 0)
		{
			printf("%d", 0);
			init--;
		}
		printf("%lu", f1);

		sum = (f1 + f2) % mx;
		sum0 = f10 + f20 + (f1 + f2) / mx;
		f1 = f2;
		f10 = f20;
		f2 = sum;
		f20 = sum0;

		if (count != 98)
			printf(", ");
		else
			printf("\n");
	}

	return (0);
}

int num_length(int num)
{
	int length = 0;

	if (!num)
		return (1);
	while(num)
	{
		num /= 10;
		length++;
	}

	return (length);
}
