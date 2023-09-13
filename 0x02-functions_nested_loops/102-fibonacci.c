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
	int n1 = 1, n2 = 2, count;

	printf("1, 2, ");

	for (count = 0; count < 48; count++)
	{
		n2 = n1 + n2;
		printf("%d, ");
		n1 = n2 - n1;
	}

	return (0);
}
