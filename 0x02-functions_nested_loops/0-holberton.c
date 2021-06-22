#include "holberton.h"

/**
 * main - Entry point
 * a program used to display text with user defined function
 * Return: Always 0 sccess
 */
int main(void)
{
	int i;
	char c[] = "Holberton";

	for (i = 0; i <= 9; i++)
	{
		_putchar(c[i]);
	}
	_putchar('\n');
	return (0);
}
