#include "holberton.h"

/**
 * puts_half - function that prints half of a string.
 * @str: character pointer
 */

void puts_half(char *str)
{
	int i = 0;
	int count = 1;
	int j = 0;

	while (*(str + i) != '\0')
	{
		count++;
		i++;
	}
	if (count % 2 != 0)
	{
		j = (count - 1) / 2;
	}
	else
	{
		j = count / 2;
	}
	while (j <= count)
	{
		_putchar(*(str + j));
		j++;
	}
	_putchar('\n');
}
