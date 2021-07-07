#include "holberton.h"

/**
  * factorial - function that returs the factorial of a given number
  * @n: integer value
  *
  * Return: -1 if n is lower than 0 otherwise the factorial of n
  */
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	if (n == 0)
	{
		return (1);
	}
	if (n == 1)
	{
		return (1);
	}
	return (n * factorial(n - 1));
}
