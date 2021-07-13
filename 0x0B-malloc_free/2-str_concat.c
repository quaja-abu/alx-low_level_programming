#include "holberton.h"
#include <stdlib.h>
#include <stddef.h>

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
	int size1 = 0;
	int size2 = 0;
	int sizet;
	int i = 0;
	int j = 0;

	if ((s1 == NULL) && (s2 == NULL))
	{
		return (NULL);
	}
	else
	{
		while (s1[size1] != '\0')
		{
			size1++;
		}
		while (s2[size2] != '\0')
		{
			size2++;
		}
		sizet = (size1 + size2 + sizeof(char));
		s = malloc(sizeof(char) * sizet);
		while (i < size1)
		{
			s[i] = s1[i];
			i++;
		}
		while (i < sizet)
		{
			s[i] = s2[j];
			i++;
			j++;
		}
		s[i - 1] = '\0';
	}
	return (s);
}
