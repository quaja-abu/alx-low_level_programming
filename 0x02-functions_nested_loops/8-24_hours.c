#include "holberton.h"

/**
 * jack_bauer - function that prints every minute of the day of jack bauer
 *
 * Return: nothing
 */
void jack_bauer(void)
{
	int hours;
	int minute;
	int h1;
	int h2;
	int m1;
	int m2;

	for (hours = 0; hours <= 23; hours++)
	{
		h1 = hours / 10;
		h2 = hours % 10;
		for (minute = 0; minute <= 59; minute++)
		{
			m1 = minute / 10;
			m2 = minute % 10;
			_putchar('0' + h1);
			_putchar('0' + h2);
			_putchar(':');
			_putchar('0' + m1);
			_putchar('0' + m2);
			_putchar('\n');
		}
	}
}
