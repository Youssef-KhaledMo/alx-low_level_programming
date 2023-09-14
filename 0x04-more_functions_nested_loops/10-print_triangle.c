#include "main.h"

/**
 * print_triangle - print triangle
 * @size: size of triangle
 *
 * Return: void
*/

void print_triangle(int size)
{
	int i, j;

	for (i = size; i > 0; i--)
	{
		for (j = i; j > 0; j--)
			_putchar(' ');
		for (j = ((size - i) + 1); j > 0; j--)
			_putchar('#');
		if (i < (size - 1))
			_putchar('\n');
	}
	_putchar('\n');
}
