#include "holberton.h"

/**
 * print_rev - function to print sting in reverse
 * @s: character pointer
 */

void print_rev(char *s)
{
	int i = 0;
	int count = 1;
	int j = 0;

	while (*(s + i) != '\0')
	{
		count++;
		i++;
	}
	while (j <= count)
	{
		_putchar(*(s + count));
		count--;
	}
	_putchar('\n');
}
