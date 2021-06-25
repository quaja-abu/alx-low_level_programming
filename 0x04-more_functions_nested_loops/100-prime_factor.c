#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0.
 */
int main(void)
{
	unsigned long int x = 612852475143;
	unsigned long int i;
	unsigned long int j;
	int isPrime;

	for (i = 2; i < x; i++)
	{
		if (x % i == 0)
		{
			isPrime = 1;
			for (j = 2; j <= i / 2; ++j)
			{
				if (i % j == 0)
				{
					isPrime = 0;
					break;
				}
			}
			if (isPrime == 1)
			{
				printf("%lu", i);
				printf("\n");
			}
		}
	}
}
