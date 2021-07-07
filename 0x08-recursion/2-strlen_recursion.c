#include "holberton.h"

/**
  * _strlen_recursion - function that returns the lenght of a string
  * @s: character pointer
  *
  * Return: integer value
  */
int _strlen_recursion(char *s)
{
	int i = 0;
	int val = 0;

	if (s[i] != '\0')
	{
		++i;
		val = i + _strlen_recursion(&s[i]);
	}
	return (val);
}
