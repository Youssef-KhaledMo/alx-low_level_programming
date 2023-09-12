#include "main.h"

/**
 * print_to_98 - prints all natural numbers from n to 98
 * @n: The integer
 *
 * Description: prints all natural numbers
 *		from n to 98, followed by a new line.
 *
 * Return: void
*/

void print_to_98(int n)
{
	for (n; n < 98; n++)
	{
		_putchar(n + '0');
		_putchar(',');
		_putchar(' ');
	}
	_putchar('98');
}
