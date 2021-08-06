#include "main.h"
#include <stdlib.h>

/**
  * binary_to_uint - function that converts a binary number to an unsigned int
  * @b: constant character pointer
  *
  * Return: converted number or 0
  */

unsigned int binary_to_uint(const char *b)
{
	unsigned int val = 0;
	int i = 0;

	if (b == NULL)
		return (0);
	while (b[i] != '\0')
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);
		i++;
	}
	while ((*b != '\0') && (*b == '0' || *b == '1'))
	{
		val <<= 1;
		val += (*b - '0');
		b++;
	}
	return (val);
}
