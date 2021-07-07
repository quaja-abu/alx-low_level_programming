#include "holberton.h"

/**
  * is_prime_number - function that check prime number
  * @n: integer numbert to be checked
  *
  * Return: 1 if the integer is a prime or 0 otherwise
  */

int is_prime_number(int n)
{
	if (n == 1)
	{
		return (0);
	}
	if (n == 2)
	{
		return (1);
	}
	if ((1 / n) % n == 0)
	{
		return (0);
	}
	if (n / n == 1)
	{
		return(is_prime_number(n - 1 + 1 / n));
	}
	return (is_prime_number(n - 1));
}
