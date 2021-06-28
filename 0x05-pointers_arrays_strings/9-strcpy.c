#include "holberton.h"

/**
 * _strcpy - function that copies source to destination
 * @dest: character pointer
 * @src: character pointer
 * Return: the pointer to dest
 */

char *_strcpy(char *dest, char *src)
{
	int i = 0;
	int j = 0;
	int count = 1;

	while (*(src + i) != '\0')
	{
		count++;
		i++;
	}
	while (j <= count)
	{
		dest[j] = *(src + j);
		j++;
	}
	return (dest);
}
