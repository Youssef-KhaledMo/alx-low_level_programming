#include "main.h"

/**
 * _strncpy - appends the src string to the dest string.
 * @dest: first string.
 * @src: secound string.
 * @n: number of characters.
 *
 * Return: a pointer to the resulting string dest.
*/

char *_strncpy(char *dest, char *src, int n)
{
	int i = 0, j;

	for (j = 0; (j < n) && (src[j] != '\0'); j++)
	{
		dest[i] = src[j];
		i++;
	}
	if (src[j] == '\0')
	{
		dest[i] = '\0';
		i++;
		while (i < n)
		{
			dest[i] = 0;
			i++;
		}
	}

	return (dest);
}
