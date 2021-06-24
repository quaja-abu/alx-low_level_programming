#include "holberton.h"

/**
 * _isdigit - check for a digit (0 through 9)
 * @c: integer number
 * Return: 1 if c is a digit and 0 otherwise
 */

int _isdigit(int c)
{
	int i;

	for (i = '0'; i <= '9'; i++)
	{
		if (i == c)
		{
			return (1);
		}
	}
	return (0);
}
