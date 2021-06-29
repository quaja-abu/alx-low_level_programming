#include "holberton.h"

/**
 * _atoi - function that converts a string to an integer
 * @s: character pointer
 * Return: integer if it gets number otherwise 0
 */

int _atoi(char *s)
{
	int i = 0;
	unsigned int val = 0;
	int sign = 1;

	while (*(s + i) != '\0')
	{
		if (s[i] == '-' || s[i] == '+')
		{
			sign = 1 - 2 * (s[i] == '-');
		}
		if (s[i] >= '0' && s[i] <= '9')
		{
			val = val * 10 + (s[i] - '0');
		}
		if (val > 0 && s[i] == ' ')
		{
			break;
		}
		i++;
	}
	return (sign * val);
}
