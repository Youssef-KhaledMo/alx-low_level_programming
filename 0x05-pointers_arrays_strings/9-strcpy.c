#include "main.h"

/**
 * _strcpy -  copies the string pointed to by src,
 *		including the terminating null byte (\0),
 *		to the buffer pointed to by dest.
 *
 * @src: the string
 * @dest: the buffer
 *
 * Return: string
*/

char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i] != '\0'; i++)
		dust[i] = src[i];
	dust[i] = '\0';

	return (dust);
}
