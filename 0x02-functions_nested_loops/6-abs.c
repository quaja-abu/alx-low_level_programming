#include "holberton.h"

/**
 * _abs - function to calculate the absolute value of a number
 * @c: parameter of the function
 * Return: integer
 */
int _abs(int c)
{

	if (c < 0)
	{
		c = (-1) * c;
		return (c);
	}
	else
	{
		return (c);
	}

}
