#include "holberton.h"
#include <stdio.h>

/**
 * print_to_98 - that prints all natural numbers from n to 98
 * @n: integer argument for the function
 * Return: nothing
 */
void print_to_98(int n)
{
	if (n <= 98)
		for (; n <= 98; n++)
		{
			printf("%d", n);
			if (n != 98)
			{
				printf("%c", ',');
				printf("%c", ' ');
			}
		}
	else
		for (; n >= 98; n--)
		{
			printf("%d", n);
			if (n != 98)
			{
				printf("%c", ',');
				printf("%c", ' ');
			}
		}
	printf("\n");
}
