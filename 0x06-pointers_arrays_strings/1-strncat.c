#include "holberton.h"

/**
 * _strncat - function to concatinate two strings at most n size
 * @src: character pointer
 * @dest: character pointer
 * @n: integer value
 * Return: character pointer
 */

char *_strncat(char *dest, char *src, int n)
{
	int i = 0;
	int j = 0;
	int k = 0;
	int lend = 0;
	int lens = 0;

	while (dest[i] != '\0')
	{
		lend++;
		i++;
	}
	while (src[k] != '\0')
	{
		lens++;
		k++;
	}
	while (j < n)
	{
		dest[lend] = src[j];
		j++;
		lend++;
		if (j == lens)
		{
			break;
		}

	}
	return (dest);
}
