#include "holberton.h"
#include <stdio.h>

/**
 * print_times_table - function that prints the n times table
 * @n: interger argument of the function
 * Return: nothing
 */
void print_times_table(int n)
{
	int row;
	int col;
	int res;

	if (n > 0 && n < 15)
	{
		for (row = 0; row <= n; row++)
		{
			for (col = 0; col <= n; col++)
			{
				res = row * col;
				if (col == 0)
				{
					printf("%1d", res);
				}
				else
				{
					printf("%3d", res);
				}
				if (col != n)
				{
					printf(",");
					printf(" ");
				}
			}
			printf("\n");
		}
	}
	if (n == 0)
		printf("%d\n", n);
}
