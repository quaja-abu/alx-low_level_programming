#include "holberton.h"
#include <stdlib.h>
#include <stddef.h>

/**
  * _strdup - function that returns a pointer to a newly allocated space
  * @str: character pointer for duplicate value
  *
  * Return: character pointer
  */
char *_strdup(char *str)
{
	char *s;
	int size = 1;
	int i = 0;

	while (str[size] != '\0')
	{
		size++;
	}
	if (str == NULL)
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
		else
		{
			while (i < size)
			{
				s[i] = str[i];
				i++;
			}
		}
	}
	return (s);
}
