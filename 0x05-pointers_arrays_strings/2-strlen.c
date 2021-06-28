#include "holberton.h"

/**
 * _strlen - function to retrun the string length
 * @s: character pointer
 * Return: integer
 */

int _strlen(char *s)
{
	int i;
	char str[10];
	int count = 0;

	for (i = 0; i <= 9; i++)
	{
		str[i] = s[i];
		count++;
	}
	return (sizeof(str));
}
