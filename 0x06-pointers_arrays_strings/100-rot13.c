#include "holberton.h"

/**
 * rot13 - function to encode string using rot13
 * @s: character pointer
 * Return: character pointer
 */

char *rot13(char *s)
{
	int i = 0;
	int j = 0;
	char *l = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char *rot13 = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	while (s[i] != '\0')
	{
		while (*(l + j) != '\0')
		{
			if (*(s + i) == *(l + j))
			{
				*(s + i) = *(rot13 + j);
				break;
			}
			j++;
		}
		j = 0;
		i++;
	}
	return (s);
}
