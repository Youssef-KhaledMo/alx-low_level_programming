#include "main.h"

/**
 * _isdigit - check if c is digit
 *
 * @c: input for integer
 *
 * Return: 1 if its digit, 0 if not
*/

int _isdigit(int c)
{
	if ((c - '0') >= 0 && (c - '0') <= 9)
		return (1);
	else
		return (0);
}
