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
	while (*haystack)
	{
		char *begin = haystack;
		char *ptn  = needle;

		while (*haystack && *ptn && *haystack == *ptn)
		{
			++haystack;
			ptn++;
		}
		if (!*ptn)
			return (begin);
		haystack = begin + 1;
	}
	return (NULL);
}
