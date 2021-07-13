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
	int i;

	if (row <= 0 || col <= 0)
	{
		return (NULL);
	}
	else
	{
		ptr = (int **)malloc(sizeof(int *) * row);
		*ptr = (int *)malloc(sizeof(int) * row * col);
		for (i = 0; i < row; i++)
			ptr[i] = (*ptr + col * i);
		ptr = assign(ptr, row, col);
	}
	free(*ptr);
	return (ptr);
}
/**
  * assign - function called by above function
  * @arr: integer pointer of pointer
  * @m: integer value
  * @n: integer value
  *
  * Return: integer pointer of pointer
  */
int **assign(int **arr, int m, int n)
{
	int i;
	int j;

	for (i = 0; i < m; i++)
	{
		for (j = 0; j < n; j++)
		{
			*(*(arr + i) + j) = 0;
		}
	}
	return (arr);
}
