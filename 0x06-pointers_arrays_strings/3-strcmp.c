#include "holberton.h"

/**
 * _strcmp - function to compare two strings
 * @s1: character pointer of first string
 * @s2: character pointer of second string
 * Return: less than zero, zero or greater than zero integer
 */

int _strcmp(char *s1, char *s2)
{
	int sw = 1;
	int i = 0;
	int j = 0;
	int k = 0;
	int lens = 0;
	int lend = 0;
	int val = 0;
	while (s1[j] != '\0')
	{
		lens++;
		j++;
	}
	while (s2[k] != '\0')
	{
		lend++;
		k++;
	}
	while (sw)
	{
		if (s1[i] == s2[i])
		{
			if (lens == lend)
			{
				sw = 0;
			}
			continue;
			i++;
		}
		else
		{
			val = s1[i] - s2[i];
			break;
		}
	}
	return (val);
}
