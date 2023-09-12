#include "main.h"

/**
 * print_times_table - prints the times table of an integer
 * @n: the integer
 *
 * Description: prints the times table of an integer,
 *		starting with 0.
 *
 * Return: void
*/

void print_times_table(int n)
{
	int n1, n2;

	for (n1 = 0; n1 <= n; n1++)
	{
		for (n2 = 0; n2 <= n; n2++)
		{
			if (n2 == n)
				printf("%d\n", n1 * n2);
			else
				printf("%d, ", n1 * n2);
		}
	}
}
