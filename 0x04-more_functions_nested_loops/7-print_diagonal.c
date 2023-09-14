#include "main.h"

/**
 * print_diagonal - print diagonal
 * @n: number of /
 *
 * Return: void
*/

void print_diagonal(int n)
{
	int i, j;

	for (i = 0; i < n; i++)
	{
		for (j = i; j > 0; j--)
			_putchar(' ');
		_putchar('\\');
		if (i < (n - 1))
			_putchar('\n');
	}
	_putchar('\n');
}
