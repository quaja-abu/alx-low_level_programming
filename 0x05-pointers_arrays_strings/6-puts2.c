#include "holberton.h"

/**
 * puts2 - function that prints every other character of a string
 * @str: character pointer
 */

void puts2(char *str)
{
	int i = 0;

	while (*(str + i) != '\0')
	{
		if (i % 2 == 0)
		{
			_putchar(*(str + i));
		}
		i = i + 2;
	}
	_putchar('\n');
}
