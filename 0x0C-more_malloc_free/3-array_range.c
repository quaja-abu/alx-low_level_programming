 /*
  * File: 3-array_range.c
  * Author: Bantegize Addis
  */

#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
  * array_range - function that creates an array of integers
  * @min: integer value
  * @max: integer value
  *
  * Return: pointer to the newly created array
  */

int *array_range(int min, int max)
{
	int *ptr, i, size;
	if (min > max)
		return (NULL);
	size = max - min + 1;
	ptr = malloc(sizeof(int) * size);

	if (ptr == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
	{
		ptr[i] = min;
		min++;
	}
	return (ptr);
}
