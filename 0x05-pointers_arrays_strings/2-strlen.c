#include "main.h"

/**
 * _strlen -  function that returns the length of a string.
 *
 * @s: the string
 *
 * Return: length
*/

int _strlen(char *s)
{
	int length = 0, i;

	for (i = 0; s[i] != '\0'; i++)
		length++;

	return (length);
}
