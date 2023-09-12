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

void print_number(int n);

void print_to_98(int n)
{
	if (n <= 98)
	{
		for (; n < 98; n++)
		{
			if (n != 98)
			{
				print_number(n);
				_putchar(',');
				_putchar(' ');
			}
		}
	}
	else
	{
		for (; n > 98; n--)
		{
			if (n != 98)
			{
				print_number(n);
				_putchar(',');
				_putchar(' ');
			}
		}
	}
	print_number(98);
	_putchar('\n');
}

void print_number(int n)
{
	if (n >= 10)
	{
		_putchar((n / 10) + '0');
		_putchar((n % 10) + '0');
	}
	else if (n < 0)
	{
		_putchar('-');
		_putchar((n / -10) + '0');
		_putchar((n % 10) * -1 + '0');
	}
	else
	{
		_putchar(n + '0');
	}
}
