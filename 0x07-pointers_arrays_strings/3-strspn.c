#include "holberton.h"

/**
  * _strspn - function that gets the length of a prefix substring
  * @s: character pointer for source string
  * @accept: prefix to be checked
  *
  * Return: the number of bytes in the initial sgement
  */

unsigned int _strspn(char *s, char *accept)
{
	int i = 0;
	int k = 0;
	int j;
	unsigned int val = 0;

	while (s[i] != ' ')
	{
		i++;
	}

	while (s[k] != ' ')
	{
		for (j = 0; j < i; j++)
		{
			if (accept[j] == s[k])
			{
				val++;
			}
		}
		k++;
	}
	return (val);
}
