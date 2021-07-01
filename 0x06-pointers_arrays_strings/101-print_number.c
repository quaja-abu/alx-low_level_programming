#include "holberton.h"

/**
 * print_number - function to print number using _putchar
 * @n: interger value
 */

void print_number(int n)
{
	unsigned int num = n;
	int sign = -1;

	if (n < 0)
	{
		_putchar('-');
		num = sign * num;
	}
	if ((num / 10) > 0)
		print_number(num / 10);
	_putchar((num % 10) + '0');
}
