#include "holberton.h"
#include <stdlib.h>
#include <stddef.h>
int **assign(int **arr, int m, int n);
/**
  * alloc_grid - function that returns a pointer to a 2 dimensional array
  * @row: integer value
  * @col: integer value
  *
  * Return: integer pointer
  */
int **alloc_grid(int row, int col)
{
	int **ptr;
	int i, j;

	if (row <= 0 || col <= 0)
	{
		return (NULL);
	}
	else
	{
		ptr = malloc(sizeof(int *) * col);

		if (ptr == NULL)
			return (NULL);

		for (i = 0; i < col; i++)
		{
			ptr[i] = malloc(sizeof(int) * row);
			if (ptr[i] == NULL)
			{
				for (; i >= 0; i--)
					free(ptr[i]);
				free(ptr);
				return (NULL);
			}
		}

		for (i = 0; i < col; i++)
		{
			for (j = 0; j < row; j++)
			{
				ptr[i][j] = 0;
			}
		}
	}
	return (ptr);
}
