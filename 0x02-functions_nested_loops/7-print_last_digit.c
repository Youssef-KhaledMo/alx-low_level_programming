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
	int digit;

	digit = n % 10;
	if (n < 0)
		digit *= -1;
	_putchar(digit + '0');
	return (digit);
}
