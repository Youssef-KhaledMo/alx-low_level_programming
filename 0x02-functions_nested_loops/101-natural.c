#include "main.h"

/**
 * main - Entery point
 *
 * Description: prints the sum of all the
 *		multiples of 3 or 5 below 1024 (excluded)
 *
 * Return: void
*/

int main(void)
{
	int count, sum = 0;

	for (count = 1; count < 1024; count++)
	{
		if (count % 5 == 0 || count % 3 == 0)
			sum += count;
	}
	printf("%d\n", sum);

	return (0);
}
