#include <stdio.h>

/**
 * main - Entry point
 * a program that prints all possible combination of two two-digit numbers
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;
	int j;
	int t1;
	int t2;
	int t3;
	int t4;
	int temp;

	for (i = 0; i <= 99; i++)
	{
		t1 = i / 10;
		t2 = i % 10;
		temp = i;
		for (j = ++temp; j <= 99; j++)
		{
			t3 = j / 10;
			t4 = j % 10;
			putchar('0' + t1);
			putchar('0' + t2);
			putchar(' ');
			putchar('0' + t3);
			putchar('0' + t4);
			if (t1 != 9 || t2 != 8 || t3 != 9 || t4 != 9)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
