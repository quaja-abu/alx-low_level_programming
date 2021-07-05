#include "holberton.h"
#include <stddef.h>

/**
  * _strpbrk - functin that searches a string for any of a set of bytes
  * @s: character pointer for source string
  * @accept: character pointer to be searched
  *
  * Return: character pointer
  */

char *_strpbrk(char *s, char *accept)
{
	int i;
	int j;
	int pos;
	int flag = 0;

	for (i = 0; s[i] != '\0'; i++)
		pos = i;
	for (i = 0; accept[i] != '\0'; i++)
	{
		for (j = 0; s[j] != '\0'; j++)
		{
			if (accept[i] == s[j])
			{
				if (j < pos)
				{
					pos = j;
					flag = 1;
				}
			}
		}
	}
	if (flag == 1)
	{
		return (&s[pos]);
	}
	else
	{
		return (NULL);
	}
}
