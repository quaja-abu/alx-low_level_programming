#include "holberton.h"

/**
 * leet - function to encode strings into 1337
 * @s: character pointer
 *
 * Return: character
 */

char *leet(char *s)
{
	int i = 0;
	int j = 0;

	char *l = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char *leet = "4BCD3FGHIJK1MN0PQRS7UVWXYZ4bcd3fghijk1mn0pqrs7uvwxyz";

	while (s[i] != '\0')
	{
		while (l[j] != '\0')
		{
			if (s[i] == l[j])
			{
				s[i] = leet[j];
				break;
			}
			j++;
		}
		j = 0;
		i++;
	}
	return (s);
}
