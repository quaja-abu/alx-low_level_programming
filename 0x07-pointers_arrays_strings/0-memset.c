#include "holberton.h"

/**
  * _memset - function that fills memory with a constant byte
  * @s: character pointer
  * @b: character byte
  * @n: integer value
  *
  * Return: character pointer
  */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		s[i] = b;
		i++;
	}
	return (s);
}

