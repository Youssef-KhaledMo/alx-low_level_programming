#include "main.h"

/**
 * rev_string -  function that reverses a string.
 *
 * @s: the string
 *
 * Return: void
*/

void rev_string(char *s)
{
	int len = _strlen(s), i;

	for (i = 0; i < len; i++)
		swap_int(s[i], s[len - i - 1]);
}
