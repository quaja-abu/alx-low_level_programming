#include "holberton.h"
#include <stdlib.h>
#include <stddef.h>

/**
  * alloc_grid - function that returns a pointer to a 2 dimensional array
  * @width: integer value
  * @height: integer value
  *
  * Return: integer pointer
  */
int **alloc_grid(int width, int height)
{
	int **ptr;
	int w;
	int h;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}
	else
	{
		ptr = malloc(10496);
		for (h = 0; h < height; h++)
		{
			for (w = 0; w < width; w++)
			{
				ptr[h][w] = 0;
			}
		}
		return (ptr);
	}
	free(ptr);
}
