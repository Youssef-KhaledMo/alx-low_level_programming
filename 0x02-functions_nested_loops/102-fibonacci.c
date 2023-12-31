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
	long int n1 = 1, n2 = 2;
	int count;

	printf("1, 2, ");

	for (count = 0; count < 48; count++)
	{
		n2 = n1 + n2;
		if (count != 47)
			printf("%ld, ", n2);
		else
			printf("%ld\n", n2);
		n1 = n2 - n1;
	}

	return (0);
}
