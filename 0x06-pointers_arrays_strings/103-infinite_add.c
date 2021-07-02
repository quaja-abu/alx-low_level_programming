#include "holberton.h"

/**
 * infinite_add - add two string positive numbers
 * @n1: character pointer to the first string number
 * @n2: character pointer to the second string number
 * @r: character string used as buffer
 * @size_r: integer value for buffer size
 * Return: character pointeir
 */

char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int c = 0;
	int length1 = 0;
	int length2 = 0;
	int i = 0;
	int j = 0;
	int k;
	int maxLength;

	while (n1[length1] != '\0')
		length1++;
	while (n2[length2] != '\0')
		length2++;

	maxLength = length1 >= length2 ? length1 + 1 : length2 + 2;

	if (size_r <= maxLength)
	{
		return (0);
	}
	r[maxLength] = '\0';
	k = maxLength - 1;
	i = length1 - 1;
	j = length2 - 1;

	while ((i >= 0) && (j >= 0))
	{
		r[k] = ((n1[i] - '0') + (n2[j] - '0') + c) % 10 + '0';
		c = ((n1[i] - '0') + (n2[j] - '0') + c) / 10;
		--i;
		--j;
		if (k != 0)
			--k;
	}
	check(i, j, k, c, r, n1, n2);
	r[0] = c + '0';
	return (r);
}

/**
 * check - function to check conditions
 * @i: integer value passed from infinite_add
 * @j: integer value passed from infinite_add
 * @k: integer value passed from infinite_add
 * @c: integer value passed from infinite_add
 * @r: character pointer passed from infinite_add
 * @n1: character pointer passed from infinite_add
 * @n2: character pointer passed from infinite_add
 */
void check(int i, int j, int k, int c, char *r, char *n1, char *n2)
{
	if (i >= 0)
	{
		while (i >= 0)
		{
			r[k] = ((n1[i] - '0') + c) % 10 + '0';
			c = ((n1[i] - '0') + c) / 10;
			--i;
			--k;
		}
	}
	if (j >= 0)
	{
		while (j >= 0)
		{
			r[j] = ((n2[j] - '0') + c) % 10 + '0';
			c = ((n2[j] - '0') + c) / 10;
			--j;
			--k;
		}
	}
}
