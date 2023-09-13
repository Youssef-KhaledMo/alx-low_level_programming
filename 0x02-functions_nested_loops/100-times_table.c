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

	if (n > 15 || n < 0)
		return;

	for (n1 = 0; n1 <= n; n1++)
	{
		for (n2 = 0; n2 <= n; n2++)
		{
			if (n2 == n)
			{
				if (n1 * n2 < 10)
					printf("   %d\n", n1 * n2);
				else
					printf("  %d\n", n1 * n2);
			}
			else
			{
				if (n2 == 0)
					printf("%d,", n1 * n2);
				else
				{
					if (n1 * n2 < 10)
						printf("   %d,", n1 * n2);
					else
						printf("  %d,", n1 * n2);
				}
			}
		}
	}
}
