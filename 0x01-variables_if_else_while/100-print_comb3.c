#include <stdio.h>

/**
 * main - Entry point
 * program to print all possilbe different combinations of two digits
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;
	int j;
	int temp;

	for (i = 0; i <= 9; i++)
	{
		temp = i;
		for (j = temp++; j <= 9; j++)
		{
			if (i == j)
				continue;
			putchar('0' + i);
			putchar('0' + j);
			putchar(',');
		}

	}
	putchar('\n');
	return (0);
}
