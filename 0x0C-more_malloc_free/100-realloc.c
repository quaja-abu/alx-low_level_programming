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
	char *ptrcpy, *ptrprev;
	unsigned int i;

	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	else if (ptr == NULL)
	{
		ptrnw = malloc(new_size);
		if (ptrnw == NULL)
			return (NULL);
		return (ptrnw);
	}
	else if (new_size <= old_size)
	{
		return (ptr);
	}
	else
	{
		ptrprev = ptr;
		ptrnw = malloc(sizeof(*ptrprev) * new_size);
		if (ptrnw == NULL)
		{
			free(ptr);
			return (NULL);
		}
		ptrcpy = ptrnw;
		for (i = 0; i < old_size && i < new_size; i++)
			ptrcpy[i] = *ptrprev++;
	}
	free(ptr);
	return (ptrnw);
}

