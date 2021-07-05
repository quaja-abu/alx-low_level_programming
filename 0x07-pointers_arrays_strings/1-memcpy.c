#include "holberton.h"

/**
  * _memcpy - function to copy that copies memory area
  * @dest: character pointer for destination
  * @src: character pointer for source
  * @n: integer value
  *
  * Return: character pointer for destination
  */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}
