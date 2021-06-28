#include "holberton.h"

/**
 * puts_half - function that prints half of a string.
 * @str: character pointer
 */

void puts_half(char *str)
{
	int i = 0;
	int count = 0;
	int j;

	while (*(str + i) != '\0')
	{
		count = count + 1;
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
	while (j < count)
	{
		_putchar(*(str + j));
		j = j + 1;
	}
	_putchar('\n');
}
