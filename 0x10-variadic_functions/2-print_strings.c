#include "variadic_functions.h"
#include <stdio.h>

/**
  * print_strings - function that prints strings
  * @separator: the string to be printed between the strings
  * @n: the number of strings passed to the function
  *
  * Return: Nothing.
  */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list ap;
	char *str = "";

	va_start(ap, n);
	for (i = 1; i <= n; i++)
	{
		str = va_arg(ap, char *);
		if (str == NULL)
			str = "nil";
		printf("%s", str);
		if (i < n && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");
}
