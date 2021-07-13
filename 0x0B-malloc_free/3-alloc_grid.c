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
	int **ptr = 0;
	int i;
	int j;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}
	else
	{
		ptr = malloc(sizeof(int) * (width * height));
		for (i = 0; i < width; i++)
		{
			for (j = 0; j < height; j++)
			{
				*(ptr + (height * i) + j) = 0;
			}
		}
	}
	return (ptr);
}
