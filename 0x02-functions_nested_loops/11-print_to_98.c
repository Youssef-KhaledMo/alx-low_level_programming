#include "main.h"

/**
 * print_to_98 - prints all natural numbers from n to 98
 * @n: The integer
 *
 * Description: prints all natural numbers
 *		from n to 98, followed by a new line.
 *
 * Return: void
*/

void print_to_98(int n)
{
	int counter;

	if (n > 98)
		for (counter = n; counter > 98; counter--)
			printf("%d, ", counter);
	else
		for (counter = n; counter < 98; counter++)
			printf("%d, ", counter);
	printf("98\n");
}
