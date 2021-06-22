#include "holberton.h"

/**
 * _islower - function to check for lowercase character
 * @c:  an integer parameter for _islower function
 * Return: 1 if character lowecase 0 otherwise
 */
int _islower(int c)
{
	int ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		if (c == ch)
		{
			return (1);
		}
	}
	return (0);
}
