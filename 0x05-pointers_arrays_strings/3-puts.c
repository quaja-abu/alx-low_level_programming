#include "holberton.h"

/**
 * _puts - function that prints a string, followed by a new line
 * @str: character pointer
 */

void _puts(char *str)
{
	int i = 0;

	while (*(str + i) != '\0')
	{
		_putchar(*(str + i));
		i++;
	}
	_putchar('\n');
}
