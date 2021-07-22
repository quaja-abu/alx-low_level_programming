#include "variadic_functions.h"

/**
  * sum_them_all - function to sum all parameters
  * @n: constant integer value
  *
  * Return: 0 if n is 0 otherwise sum of all its parameters
  */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i = 1;
	int sum = 0;
	va_list ap;

	if (n == 0)
		return (0);
	va_start(ap, n);
	while (i <= n)
	{
		sum += va_arg(ap, int);
		i++;
	}
	va_end(ap);

	return (sum);
}
