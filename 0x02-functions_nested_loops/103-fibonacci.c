#include "main.h"

/**
 * main - Entry point
 *
 * Description: using sizeof to print the size of various types.
 *
 * Return: Always 0 (Success)
*/

int main(void)
{
	int n1 = 1, n2 = 2, sum = 0;

	while (n2 < 4000000)
	{
		if (n2 % 2 == 0)
			sum += n2;
		n2 = n1 + n2;
		n1 = n2 - n1;
	}
}
