#include "variadic_functions.h"
#include <stdio.h>

/**
  * print_numbers - function that prints numbers
  * @separator: string that used as a separator of numbers
  * @n: constant integer that shows the amount of parameters
  *
  * Return: Nothing
  */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list ap;

	va_start(ap, n);
	for (i = 1; i <= n; i++)
	{
		printf("%d", va_arg(ap, int));
		if (i < n && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");
}
