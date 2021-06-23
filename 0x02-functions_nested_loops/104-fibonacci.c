#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
	unsigned long int i = 1;
	unsigned long int j = 2;
	unsigned long int sum = 0;
	int count = 2;

	sum = i + j;
	printf("%lu%c%c%lu%c%c%lu%c%c", i, ',', ' ', j, ',', ' ', sum, ',', ' ');
	while (count <= 96)
	{
		i = j;
		j = sum;
		sum = i + j;
		printf("%lu", sum);
		if (count < 96)
		{
			printf("%c%c", ',', ' ');
		}
		count++;
	}
	printf("\n");
	return (0);

}
