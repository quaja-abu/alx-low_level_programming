#include "holberton.h"
#include <stdio.h>

/**
 * print_array - function that prints n elements of an array
 * @a: integer pointer
 * @n: integer value
 */

void print_array(int *a, int n)
{
	int i = 0;

	while (i < n)
	{
		printf("%d", *(a + i));
		if (i < n - 1)
		{
			printf("%s%s", ",", " ");
		}
		++i;
	}
	printf("\n");
}
