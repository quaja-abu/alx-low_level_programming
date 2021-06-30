#include "holberton.h"

/**
 * rev_string - function to reverse a string
 * @s: character pointer
 */

void rev_string(char *s)
{
	int count = 0;
	int i = 0;
	int low;
	int high;
	char temp;

	while (*(s + i) != '\0')
	{
		count++;
		i++;
	}
	for (low = 0, high = count - 1; low < high; low++, high--)
	{
		temp = s[low];
		s[low] = s[high];
		s[high] = temp;
	}
}
