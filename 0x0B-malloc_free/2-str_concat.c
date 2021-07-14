#include "holberton.h"
#include <stdlib.h>
#include <stddef.h>
char *concat(char *, char *, char *, int, int, int, int);

/**
  * str_concat - function that concatenates two strings
  * @s1: character pointer
  * @s2: character pointer
  *
  * Return: character pointer
  */
char *str_concat(char *s1, char *s2)
{
	char *s;
	char *val = "";
	int size1 = 0;
	int size2 = 0;
	int sizet;
	int i = 0;
	int j = 0;

	if ((s1 == (char *)NULL) && (s2 == (char *)NULL))
	{
		s1 = "";
		s2 = "";
		return (val);
	}
	else
	{
		if (s1 != (char *)NULL)
		{
			while (s1[size1] != '\0')
			{
				size1++;
			}
		}
		if (s2 != (char *)NULL)
		{
			while (s2[size2] != '\0')
			{
				size2++;
			}
		}
		sizet = (size1 + size2 + sizeof(char));
		s = malloc(sizeof(char) * sizet);
	}
	val = concat(s, s1, s2, sizet, size1, i, j);
	return (val);
}

/**
  * concat - function to be called by the above function
  * @s: character pointer
  * @s1: integer value
  * @s2: integer value
  * @sizet: interger value
  * @size1: integer value
  * @i: integer value
  * @j: integer value
  *
  * Return: character pointer
  */
char *concat(char *s, char *s1, char *s2, int sizet, int size1, int i, int j)
{
	while (i < size1)
	{
		s[i] = s1[i];
		i++;
	}
	if (s2 != (char *)NULL)
	{
		while (i < sizet)
		{
			s[i] = s2[j];
			i++;
			j++;
		}
	}
	s[i] = '\0';
	return (s);
}
