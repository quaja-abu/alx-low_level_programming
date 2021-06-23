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

	sum = i + j;
	printf("%d%c%c%d%c%c%d%c%c", i, ',', ' ', j, ',', ' ', sum, ',', ' ');
	while (sum < 50)
	{
		i = j;
		j = sum;
		sum = i + j;
		printf("%d", sum);
		if (sum <= 50)
		{
			printf("%c%c", ',', ' ');
		}
	}
	printf("\n");
	return (0);
}
