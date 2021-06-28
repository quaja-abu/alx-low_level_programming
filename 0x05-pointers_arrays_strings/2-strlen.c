#include "holberton.h"

/**
 * _strlen - function to retrun the string length
 * @s: character pointer
 * Return: integer
 */

int _strlen(char *s)
{
	int i = 0;
	int count = 0;

	while (*(s + i) != '\0')
	{
		count = count + 1;
		i++;
	}
	return (count);
}
