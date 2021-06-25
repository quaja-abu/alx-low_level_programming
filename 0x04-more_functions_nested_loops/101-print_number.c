#include "holberton.h"

/**
 * print_number - to print any number using _putchar
 * @n: integer value
 */

void print_number(int n)
{

	if (n == 0)
	{
		_putchar('0');
	}
	if (n < 0)
	{
		_putchar('-');
		n = -n;
	}
	if (n / 10)
	{
		print_number(n / 10);
	}
	_putchar(n % 10 + '0');
}
