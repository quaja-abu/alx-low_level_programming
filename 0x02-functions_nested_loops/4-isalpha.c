#include "holberton.h"

/**
 * _isalpha - a function that checks fot alphabetic character
 * @c: is the int that will use for argument of the function
 * Return: 1 if c is a letter,lowercase or uppercase 0 otherwise
 */
int _isalpha(int c)
{
	int up;
	int lo;

	for (lo = 'a', up = 'A'; lo <= 'z' || up <= 'Z'; lo++, up++)
	{
		if (c == lo || c == up)
			return (1);
	}
	return (0);
}
