#include "holberton.h"

/**
 * print_line - draws a stright line on the terminal
 * @n: number of line
 */

void print_line(int n)
{
	int i = 0;

	while (i < n)
	{
		_putchar('_');
		i++;
	}
	_putchar('\n');
}
