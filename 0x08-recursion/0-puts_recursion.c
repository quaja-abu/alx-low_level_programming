#include "holberton.h"

/**
  * _puts_recursion - function that displays string
  * @s: character pointer
  */

void _puts_recursion(char *s)
{
	int i = 0;

	if (s[i] != '\0')
	{
		_putchar(s[i]);
		++i;
		_puts_recursion(&s[i]);
	}
	if (s[i] == '\0')
		_putchar('\n');
}
