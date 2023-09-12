#include "main.h"

/**
 * print_last_digit - prints the last digit of a number.
 * @n: The integer
 *
 * Description: prints the last digit of a number.
 *
 * Return: the last digit of a number.
*/

int print_last_digit(int n)
{
	if (n < 0)
		_putchar(((n % 10) * -1) + '0');
	_putchar((n % 10) + '0');
	return (n % 10);
}