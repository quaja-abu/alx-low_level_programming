#include "holberton.h"
#include <stdio.h>

/**
 * times_table - a function that prints the 9 times table, starting with 0
 *
 * Return: nothing
 */
void times_table(void)
{
	int row;
	int col;
	int res;

	for (row = 0; row <= 9; row++)
	{
		for (col = 0; col <= 9; col++)
		{
			res = row * col;
			if (col == 0)
			{
				printf("%1d", res);
			}
			else
			{
				printf("%2d", res);
			}
			if (col < 9)
			{
				printf(",");
				printf("%c", ' ');
			}
		}
		printf("\n");
	}
}
