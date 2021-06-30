#include "holberton.h"

/**
 * string_toupper - function to convert lowercase to uppercase
 * @s: character pointer
 *
 * Return: character pointer
 */

char *string_toupper(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		if (s[i] >= 'a' && s[i] <= 'z')
		{
			s[i] -= 32;
		}
		i++;
	}
	return (s);
}
