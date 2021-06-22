#include "holberton.h"

/**
 * print_last_digit - prints the last digit of a number
 * @c: integer argument of the function
 * Return: the value of last digit
 */
int print_last_digit(int c)
{
	int last;

	if (c < 0)
		c = (-1) * c;
	last = c % 10;
	_putchar('0' + last);
	return (last);
}
