#include <stdio.h>

/**
 * main - Entry point
 * print all single digit numbers of base 10 with putchar
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;

	for (n = 0; n < 10; n++)
		putchar('0' + n);
	putchar('\n');
	return (0);
}
