#include "holberton.h"

/**
  * _sqrt_recursion - function that returns the natural square root
  * @n: integer value
  *
  * Return: -1 if n does not have natural square root
  */
int _sqrt_recursion(int n)
{
	int sqrt = 1;
	int cntr = 1;
	int output;

	if (n == 0 || n == 1)
	{
		return (n);
	}
	else if (sqrt <= n)
	{
		cntr++;
		sqrt = _sqrt_recursion(cntr * cntr);
	}
	output = cntr - 1;
	return (output);
}
