#include "main.h"
#include <stdio.h>

/**
 * isLower - determine if char is lowercase.
 * @c: the character
 * Return: 1 if lower, 0 if not.
*/

int isLower(char c)
{
	return (c >= 97 && c <= 122);
}

/**
 * isDelimiter - determine if the character is delimiter.
 * @c: the character
 * Return: 1 if delimiter, 0 if not.
*/

int isDelimiter(char c)
{
	int i;
	char delimiters[] = " \t\n,.!?\"(){}";

	for (i = 0; i < 12; i++)
		if (c == delimiter[i])
			return (1);
	return (0);
}

/**
 * cap_string - capitalizes all words of a string.
 * @s: the string.
 *
 * Return: string
*/

char *cap_string(char *s)
{
	char *ptr = s;
	int foundDelimiter = 1;

	while (*s)
	{
		if (isDelimiter(*s))
			foundDelimiter = 1;
		else if (isLower(*s) && foundDelimiter)
		{
			*s -= 32;
			foundDelimiter = 0;
		}
		else
			foundDelimiter = 0;
		s++;
	}
	return (ptr);
}
