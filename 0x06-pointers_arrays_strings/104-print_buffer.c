#include "holberton.h"
#include <stdio.h>

/**
 * print_buffer - function that prints a buffer
 * @b: character pointer
 * @size: integer value
 */

void print_buffer(char *b, int size)
{
	int i;
	int count = 0;
	char *temp = b;
	int j = 0;
	int k;
	int l;
	static int val1;
	static int val2;
	int space = 1;

	if (size < 0)
	{
		printf("\n");
	}
	val1 = 0;
	val2 = 0;
	for (i = 0; i <= size && count <= 10; i++)
	{
		temp[j] = b[i];
		if (count == 0)
		{
			printf("0%8p: ", &b[i]);
		}
		++count;
		if (count == 10)
		{
			for (l = 0; l < count; l++)
			{
				printf("%02x", temp[val1]);
				if (space % 2 == 0)
					printf(" ");
				space++;
				val1++;
			}
			for (k = 0; k < count; k++)
			{
				printf("%c", temp[val2]);
				if (temp[val2] == '\\' || temp[val2] == '\0' ||
						temp[val2] == '\1' ||
						temp[val2] == '\2' ||
						temp[val2] == '\3' ||
						temp[val2] == '\4' ||
						temp[val2] == '\5' ||
						temp[val2] == '\6' ||
						temp[val2] == '\7' ||
						temp[val2] == '\n')
					printf(".");
				val2++;
			}
			count = 0;
			space = 1;
			printf("\n");
		}
		j++;
	}
	printf("\n");
}
