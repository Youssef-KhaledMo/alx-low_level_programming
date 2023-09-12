#include "main.h"

/**
 * times_table - prints the 9 times table
 *
 * Description: prints the 9 times table, starting with 0.
 *
 * Return: void
*/

void times_table(void)
{
	int n1, n2;

	for (n1 = 0; n1 <= 9; n1++)
	{
		for (n2  = 0; n2 <= 9; n2++)
		{
			if (n2 > 0)
			{
				_putchar(' ');
				if (n1 > 0 && n1 < 10)
					_putchar(' ');
			}
			_putchar((n1 * n2) + '0');
			_putchar(',');
		}
		_putchar('\n');
	}
}