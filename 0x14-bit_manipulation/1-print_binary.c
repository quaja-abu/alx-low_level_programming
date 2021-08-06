#include "main.h"
#include <stdio.h>

/**
  * print_binary - a function that prints binary representation of a number
  * @n: long integer value
  *
  * Rerurn: Nothing
  */
void print_binary(unsigned long int n)
{
	unsigned long int i;

	if (n > 1)
		print_binary(n >> 1);
	i = n & 1;
	_putchar(i + '0');
}
