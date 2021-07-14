/**
  * File: 4-free_grid.c
  * Author: Bantegize Addis
  */

#include "holberton.h"
#include <stdlib.h>

/**
  * free_grid - function that frees a 2 dimenstional grid
  * @grid: integer pointer of pointer
  * @height: integer value
  */

void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);
}
