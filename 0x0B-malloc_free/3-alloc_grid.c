#include "holberton.h"
#include <stdlib.h>
#include <stddef.h>

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
	int i;
	int j;

	if (row <= 0 || col <= 0)
	{
		return (NULL);
	}
	else
	{
		ptr = (int **)malloc(sizeof(int *) * row);
		for (i = 0; i < row; i++)
			*(ptr + i) = (int *)malloc(sizeof(int) * col);
		for (i = 0; i < row; i++)
		{
			for (j = 0; j < col; j++)
				ptr[i][j] = 0;
		}
	}
	for (i = 0; i < row; i++)
		free(ptr[i]);
	return (ptr);
	free(ptr);
}
