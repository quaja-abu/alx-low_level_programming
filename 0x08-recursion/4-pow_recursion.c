#include "holberton.h"

/**
  * _pow_recursion - function that calculates the value of x raised y
  * @x: integer value
  * @y: integer value
  *
  * Return: -1 if y is less than zero otherwise the power
  */
int _pow_recursion(int x, int y)
{
	int sign = -1;

	if (y < -1)
	{
		return (-1);
	}
	else if (y == 1)
	{
		return (x);
	}
	else if (y == 0)
	{
		return (1);
	}
	else
	{
		if (x > 0)
		{
			sign = -1 * sign;
		}
		--y;
		return (sign * (x * _pow_recursion(x, y)));
	}
}
