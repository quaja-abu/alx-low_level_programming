#include "holberton.h"

/**
 * cap_string - function that capitalize all words of a string
 * @s: character pointer
 *
 * Return: character pointer
 */

char *cap_string(char *s)
{
	int i = 1;

	while (s[i] != '\0')
	{
		if (s[0] >= 'a' && s[0] <= 'z')
		{
			s[0] -= 32;
		}
		if (s[i - 1] == ' ' || s[i - 1] == '\t' || s[i - 1] == '\n' ||
				s[i - 1] == ',' || s[i - 1] == ';' ||
				s[i - 1] == '.' || s[i - 1] == '!' ||
				s[i - 1] == '?' || s[i - 1] == '"' ||
				s[i - 1] == '(' || s[i - 1] == ')' ||
				s[i - 1] == '{' || s[i - 1] == '}')
		{
			if (s[i] >= 'a' && s[i] <= 'z')
			{
				s[i] -= 32;
			}
		}
		i++;
	}
	return (s);
}
