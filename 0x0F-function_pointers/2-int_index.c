#include "function_pointers.h"

/**
  * int_index - function that searches for an integer
  * @array: integer pointer
  * @size: integer value
  * @cmp: function pointer
  *
  * Return: -1 if not elemen match and size <= 0 index of element otherwise 0
  */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i, val;

	if (size <= 0)
	{
		return (-1);
	}
	else
	{
		for (i = 0; i < size; i++)
		{
			val = cmp(array[i]);
			if (val != 0)
			{
				return (i);
			}
		}
		if (val == 0)
			return (-1);
	}
	return (0);
}
