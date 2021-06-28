#include "holberton.h"

/**
 * rev_string - function to reverse a string
 * @s: character pointer
 */

void rev_string(char *s)
{
	char *ptr;
	int i = 0;
	int count = 0;
	static int j = 0;
	int k = 0;

	ptr = s;
	while (*(s + i) != '\0')
	{
		count++;
		i++;
	}
	while (k <= count)
	{
		count--;
		*(ptr + j) = *(s + count);
		j++;
	}
}
