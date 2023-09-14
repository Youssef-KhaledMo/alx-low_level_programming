#include <stdio.h>

/**
 * squareRoot - calculate square Root of an integer
 * @a: the integer
 *
 * Return: square Root
*/

double squareRoot(double a)
{
	double i = 0;
	double j = a / 2;

	while (j != i)
	{
		i = j;
		j = (a / i + i) / 2;
	}

	return (j);
}

/**
 * largest_prime_factor - prints the largest prime factor
 *      of a number, followed by a new line.
 *
 * @num: the number
 *
 * Return: void
*/

void largest_prime_factor(long int num)
{
	int prmNu, largest;

	while (num % 2 == 0)
		num = num / 2;

	for (prmNu = 3; prmNu <= squareRoot(num); prmNu += 2)
	{
		while (num % prmNu == 0)
		{
			num = num / prmNu;
			largest = prmNu;
		}
	}

	if (num > 2)
		largest = num;
	printf("%d\n", largest);
}

/**
 * main - Entery point
 *
 * Description:finds and prints the largest prime factor
 *	of the number 612852475143, followed by a new line.
 *
 * Return: 0 (succes)
*/

int main(void)
{
	largest_prime_factor(612852475143);

	return (0);
}
