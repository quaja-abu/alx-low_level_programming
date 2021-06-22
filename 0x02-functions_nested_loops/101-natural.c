#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
	int sum = 0;
	int n;

	for (n = 0; n < 1024; n++)
	{
		if (n % 3 == 0 || n % 5 == 0)
			sum += n;
	}
	printf("Sum of all multiples of 3 or 5 below 1024 is %d\n", sum);
	return (0);
}
