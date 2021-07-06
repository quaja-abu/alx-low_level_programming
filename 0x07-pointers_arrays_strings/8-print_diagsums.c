#include "holberton.h"
#include <stdio.h>

/**
 * print_diagsums - function that prints the sum of two diagonals of asquare
 * @a: integer pointer
 * @size: integer value for the size of the array
 */

void print_diagsums(int *a, int size)
{
	int i;
	int j;
	int sum = 0;

	for (i = 0; i < size; i++)
	{
		for (j = i; j <= i; j++)
		{
			sum =  sum + *((a + i) + j);
		}
	}
	printf("%d, ", sum);
	sum = 0;
	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size; j++)
		{
			if (i + j == size - 1)
			{
				sum =  sum + *((a + i) + j);
			}
		}
	}
	printf("%d", sum);
	printf("\n");
}
