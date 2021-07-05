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
	unsigned int i;
	unsigned int k;
	unsigned int val = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (val != i)
		{
			break;
		}
		for (k = 0; accept[k] != '\0'; k++)
		{
			if (s[i] == accept[k])
			{
				val++;
			}
		}
	}
	return (val);
}
