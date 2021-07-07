#include "holberton.h"

/**
  * wildcmp - function to compare two strings
  * @s1: character pointer
  * @s2: character pointer
  *
  * Return: integer value
  */
int wildcmp(char *s1, char *s2)
{
	if (*s1 != '\0' || *s2 != '\0')
	{
		if (*s2 == '*')
		{
			return (1);
		}
		wildcmp(++s1, ++s2);
	}
	if (s1 == s2)
		return (1);
	else
		return (0);
}
