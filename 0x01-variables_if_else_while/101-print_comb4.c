#include <stdio.h>

/**
 * main - Entry point
 * program that prints all possible different combinations of three digits
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;
	int j;
	int k;
	int temp1;
	int temp2;

	for (i = 0; i <= 9; i++)
	{
		temp1 = i;
		for (j = ++temp1; j <= 9; j++)
		{
			temp2 = j;
			for (k = ++temp2; k <= 9; k++)
			{
				if (i == j && j == k)
					continue;
				putchar('0' + i);
				putchar('0' + j);
				putchar('0' + k);
				if (i != 7 || j != 8 || k != 9)
				{
					putchar(',');
					putchar(' ');
				}

			}
		}
	}
	putchar('\n');
	return (0);
}
