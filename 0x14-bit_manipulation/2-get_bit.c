#include "main.h"
int get_local_bit(unsigned int);

/**
  * get_bit - function that returns the value of a bit at a given index.
  * @n: unsigned long interger value
  * @index: unsigned integer value
  *
  * Return: bit at index or -1 if an error occured
  */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int i = 0;
	int val = -1;

	if (index < i)
		return (val);
	for (i = 0; i <= index; i++)
	{
		val = get_local_bit(n);
		n >>= 1;
		if (i == index)
			return (val);
	}
	return (-1);
}

/**
  * get_local_bit - function to return the bit
  * @n: unsigned integer value
  *
  * Return: integer bit value
  */
int get_local_bit(unsigned int n)
{
	return (n & 1);
}
