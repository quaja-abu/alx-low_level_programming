#include "holberton.h"

/**
  * _puts_recursion - function that displays string
  * @s: character pointer
  */

void _puts_recursion(char *s)
{
	int i = 0;

	while (s[i])
	{
		_putchar(s[i]);
		i++;
	}
	_putchar('\n');
}
