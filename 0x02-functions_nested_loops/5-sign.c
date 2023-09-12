#include "main.h"

/**
 * print_sign - checks sign
 * @n: The integer to be checked
 *
 * Description: checks the sign of an integer
 *
 * Return: 1 if n is greater than zero
 *	0 if n is zero
 *	-1 if n is less than zero
*/

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	else
	{
		_putchar('0');
		return (0);
	}
}
