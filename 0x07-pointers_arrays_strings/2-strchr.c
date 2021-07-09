#include "holberton.h"
#include <stddef.h>

/**
  * _strchr - function that locates a character in a string
  * @s: character pointer that holds the string
  * @c: integer value to be located in the string
  *
  * Return: character pointer
  */

char *_strchr(char *s, int c)
{
	int i = 0;
	char *p = s;

	while (*s != c)
	{
		++s;
		++i;
	}
	if (*s == c)
	{
		return (p + i);
	}
	else
	{
		return (NULL);
	}
}
