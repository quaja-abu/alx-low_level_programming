#include "variadic_functions.h"
#include <stdio.h>

/**
  * print_all - a function that prints anything
  * @format: is alist of types of arguments passed to the function
  *
  * Return: Nothing.
  */
void print_all(const char *format, ...)
{
	va_list arg;
	static int i = 0; 
	int val, len = 0;
	char ch;
	double fl;
	char *s;
	const char *c;

	c = format;
	while (format[len] != '\0')
		len++;
	va_start(arg, format);
	while (format[i] != '\0')
	{
		switch (format[i])
		{
			case 'c':
				ch = va_arg(arg, int);
				printf("%c", ch);
				break;
			case 'i':
				val = va_arg(arg, int);
				printf("%d", val);
				break;
			case 's':
				s = va_arg(arg, char *);
				if (s == NULL)
					s = "(nil)";
				printf("%s", s);
				break;
			case 'f':
				fl = va_arg(arg, double);
				printf("%f", fl);
				break;
			default:
				break;
		}
		if ((i < (len - 1)) && (c[i] == 'c' || c[i] == 'i' ||
				c[i] == 's' || c[i] == 'f'))
			printf(", ");
		i++;
	}
	printf("\n");
	va_end(arg);
}
