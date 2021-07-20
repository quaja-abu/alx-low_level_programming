#include "function_pointers.h"

/**
  * array_iterator - function that executes a function
  * @array: integer pointer
  * @size: size_t type
  * @action: pointer to function
  *
  * Return: Nothing
  */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array == NULL || action == NULL)
	{
		return;
	}
	else
	{
		for (i = 0; i < size; i++)
			action(array[i]);
	}
}
