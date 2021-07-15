 /*
  * File: 3-array_range.c
  * Author: Bantegize Addis
  */

#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
  * array_range - function that creates an array of integers
  * @min: integer value
  * @max: integer value
  *
  * Return: pointer to the newly created array
  */

int *array_range(int min, int max)
{
	int *ptr;
	int size = 0;

	size = max - min;
	if (min > max)
		return (NULL);
	ptr = malloc(sizeof(int *) * size);

	if (ptr == NULL)
		return (NULL);
	return (ptr);
}
