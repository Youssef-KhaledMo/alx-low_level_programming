#include <stdio.h>

/**
 * main - entry point
 *
 * Description: print alphabetic letters in lowercase then in uppercase
 *
 *Return: 0 (success)
*/

int main(void)
{
	char ch = 'a';
	char CH = 'A';

	while (ch <= 'z')
	{
		putchar(ch);
		ch++;
	}
	while (ch <= 'Z')
	{
		putchar(ch);
		CH++;
	}
	putchar('\n');

	return (0);
}
