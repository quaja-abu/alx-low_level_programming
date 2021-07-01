#include "holberton.h"

/**
 * _strcat - function to concatinate two stings
 * @src: character pointer source
 * @dest: character pointer for destination
 * Return: character pointer
 */

char *_strcat(char *dest, char *src)
{
	int i = 0;
	int len = 0;
	int j = 0;

	while (dest[i] != '\0')
	{
		len++;
		i++;
	}
	while (src[j] != '\0')
	{
		dest[len] = src[j];
		j++;
		len++;
	}
	return (dest);
}
