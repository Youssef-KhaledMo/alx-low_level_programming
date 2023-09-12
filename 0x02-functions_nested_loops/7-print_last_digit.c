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
	n = _abs(n);
	_putchar((n % 10) + '0');
	return (n % 10);
}
