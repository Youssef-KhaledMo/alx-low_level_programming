#include "main.h"

/**
 * _strncat - appends the src string to the dest string.
 * @dest: first string.
 * @src: secound string.
 * @n: number of characters
 *
 * Return: a pointer to the resulting string dest.
*/

char *_strncat(char *dest, char *src, int n)
{
	int i = 0, j;

	while (dest[i])
		i++;

	for (j = 0; (j < n) && (src[j] != '\0'); j++)
	{
		dest[i] = src[j];
		i++;
	}
	dest[i] = '\0';

	return (dest);
}
