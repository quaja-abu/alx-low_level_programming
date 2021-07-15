 /*
  * File: 100-realloc.c
  * Author: Bantegize Addis
  */

#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
  * _realloc - function that reallocates a memory block using malloc and free
  * @ptr: pointer to previously allocated
  * @old_size: size of previously allocated memory
  * @new_size: size of newly allocated memory
  *
  * Return: pointer to newly allocated memory
  */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *ptrnw;

	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	else if (ptr == NULL)
	{
		ptrnw = malloc(new_size);
	}
	else if (new_size <= old_size)
	{
		return (ptr);
	}
	else
	{
		ptrnw = malloc(new_size);
	}
	free(ptr);
	return (ptrnw);
}
