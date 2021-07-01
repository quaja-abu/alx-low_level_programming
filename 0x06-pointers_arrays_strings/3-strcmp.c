#include "holberton.h"

/**
 * _strcmp - function to compare two strings
 * @s1: character pointer
 * @s2: character pointer
 * Return: integer value greater than zero, less than zero or zero
 */

int _strcmp(char *s1, char *s2)
{
	int i = 0;
	int val = 0;

	while (s1[i] != '\0' || s2[i] != '\0')
	{
		if (s1[i] == s2[i])
		{
			val = s1[i] - s2[i];
			i++;
			continue;
		}
		else
		{
			val = s1[i] - s2[i];
			break;
		}
	}
	return (val);
}
