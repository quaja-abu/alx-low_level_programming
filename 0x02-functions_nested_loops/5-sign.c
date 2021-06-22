#include "holberton.h"

/**
 * print_sign - function to print the sign on the number
 * @c: intiger function parameter
 * Return: + for positive - for negative and 0 for zero
 */
int print_sign(int c)
{
	if (c > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (c < 0)
	{
		_putchar('-');
		return (-1);
	}
	else
	{
		_putchar('0');
		return (0);
	}
}
