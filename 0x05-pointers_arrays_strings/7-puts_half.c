#include "main.h"

/**
 * puts_half - function that prints half of a string,
 *		followed by a new line.
 *
 * @str: the string
 *
 * Return: void
*/

void puts_half(char *str)
{
	int i, len, n;

	for (len = 0; str[len] != '\0'; len++)
		;

	n = len / 2;

	for (i = len - n; str[i] != '\0'; i++)
		_putchar(str[i]);
	_putchar('\n');
}
