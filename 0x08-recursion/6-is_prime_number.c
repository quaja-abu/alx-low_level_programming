#include "holberton.h"
int checkAgain(int num, int);

/**
  * is_prime_number - function to check a number is prime or not
  * @n: integer number to be checked
  *
  * Return: integer value
  */
int is_prime_number(int n)
{
	int val;
	int div = 2;

	val = checkAgain(n, div);
	if (val == 1)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
/**
  * checkAgain - function to be called by is_prime_number
  * @num: integer number to be cheked
  * @div: integer divisor
  *
  * Return: integer 0 or 1
  */

int checkAgain(int num, int div)
{
	if (num <= 2)
		return ((num == 2) ? 1 : 0);
	if (num % div == 0)
		return (0);
	if (div * div > num)
		return (1);
	return (checkAgain(num, div + 1));
}
