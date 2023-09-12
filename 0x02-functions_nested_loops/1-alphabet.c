#include "main.h"

/**
 * print_alphabet - print all characters using _putchar
 *
 * Return: void.
*/

void print_alphabet(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
		_putchar(ch);
	_putchar('\n');
}
