#include "holberton.h"

/**
 * _isupper - to check inserted character is uppercase
 * @c: character value
 * Return: 1 if c is uppercase 0 otherwise
 */

int _isupper(int c)
{
	int i;

	for (i = 'A'; i <= 'Z'; i++)
	{
		if (i == c)
		{
			return (1);
		}
	}
	return (0);
}
