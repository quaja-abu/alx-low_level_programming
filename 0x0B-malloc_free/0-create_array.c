#include "holberton.h"
#include <stddef.h>
#include <stdlib.h>

/**
  * create_array - function that creates an array of chars
  * @size: unsinged integer value
  * @c: character value
  *
  * Return: character pointer
  */

char *create_array(unsigned int size, char c)
{
	char *s;
	unsigned int i = 0;

	if (size == 0)
	{
		return (NULL);
	}
	else
	{
		s = malloc(sizeof(char) * size);
		if (s == NULL)
		{
			return (NULL);
		}
		while (i < size)
		{
			s[i] = c;
			i++;
		}
	}
	return (s);
}
