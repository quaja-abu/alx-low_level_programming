#include "holberton.h"
#include <stddef.h>

/**
  * _strstr - function to locate substring
  * @haystack: character pointer for source
  * @needle: character pointer to be searched
  *
  * Return: character string if success otherwise NULL
  */

char *_strstr(char *haystack, char *needle)
{
	int i;
	int j;
	int pos;
	int flag = 0;

	for (i = 0; needle[i] != '\0'; i++)
	{
		for (j = 0; haystack[j] != '\0'; j++)
		{
			if (needle[i] == haystack[j])
			{
				pos = j;
				flag = 1;
				break;
			}
		}
		if (needle[i] == haystack[j])
		{
			pos = j;
			flag = 1;
			break;
		}
	}
	if (flag == 1)
	{
		return (&haystack[pos]);
	}
	else
	{
		return (NULL);
	}
}
