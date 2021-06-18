#include <stdio.h>

/**
 * main - Entry point
 * program to display hex numbers
 * Return: Always 0 (Success)
 */
int main(void)
{
	int hex;
	char ch = 'a';

	for (hex = 0; hex <= 15; hex++)
	{
		if (hex >= 10)
		{
			putchar(ch);
			ch++;
		}
		if (hex <= 9)
			putchar('0' + hex);
	}
	putchar('\n');
	return (0);
}
