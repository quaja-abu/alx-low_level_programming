#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0.
 */
int main(void)
{
	int i = 1;
	int j = 2;
	int sum = 0;
	int sumEven = 2;

	sum = i + j;
	while (sum <= 4000000)
	{
		i = j;
		j = sum;
		sum = i + j;
		if (sum % 2 == 0)
		{
			sumEven += sum;
		}
	}
	printf("%d\n", sumEven);
	return (0);
}
