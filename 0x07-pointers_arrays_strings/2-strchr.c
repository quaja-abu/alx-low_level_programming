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
	for (;; s++)
	{
		if (*s == c)
			return (s);
		if (!*s)
			return (NULL);
	}
	return (NULL);
}
