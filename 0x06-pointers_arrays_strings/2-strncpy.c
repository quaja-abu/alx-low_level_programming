#include "holberton.h"

/**
 * _strncpy - function to copy strings
 * @src: character pointer
 * @dest: character pointer
 * @n: integer value
 * Return: character pointer
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;
	int j = 0;
	int lens = 0;

	while (src[i] != '\0')
	{
		lens++;
		i++;
	}
	while (j < n)
	{
		dest[j] = src[j];
		if (lens < n && j == lens)
		{
			dest[j - 1] = '\0';
			break;
		}
		j++;
	}
	return (dest);
}
