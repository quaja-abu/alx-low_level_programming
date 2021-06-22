#include "holberton.h"

/**
 * print_to_98 - that prints all natural numbers from n to 98
 * @n: integer argument for the function
 * Return: nothing
 */
void print_to_98(int n)
{
	if (n <= 98)
	{
		for (; n <= 98; n++)
		{
			_putchar(n + '0');
			if (n != 98)
			{
				_putchar(',');
				_putchar(' ');
			}
		}	
	}
	else if (n > 98)
	{
		for (; n >= 98; n--)
		{
			_putchar(n);
			if (n != 98)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
	}
	_putchar('\n');
}
