#include "main.h"

/**
 * jack_bauer -  prints every minute of the day
 *
 * Description: prints every minute of the day of Jack Bauer,
 *		starting from 00:00 to 23:59.
 *
 * Return: void
*/

void jack_bauer(void)
{
	int min, hours, mtemp, htemp;

	for (hours = 0; hours < 24; hours++)
	{
		for (min = 0; min < 60; min++)
		{
			htemp = hours / 10;
			mtemp = min / 10;
			_putchar(htemp + '0');
			_putchar((hours % 10) + '0');
			_putchar(':');
			_putchar(mtemp + '0');
			_putchar((min % 10) + '0');
			_putchar('\n');
			min++;
		}
		hours++;
	}
}
