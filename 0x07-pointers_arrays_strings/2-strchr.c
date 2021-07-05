#include "holberton.h"

/**
  * _strchr - function that locates a character in a string
  * @s: character pointer that holds the string
  * @c: character value to be located in the string
  *
  * Return: character pointer
  */

char *_strchr(char *s, char c)
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
		return (0);
	}
}
