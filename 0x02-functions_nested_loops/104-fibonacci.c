#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
	long int i = 1;
	long int j = 2;
	long int sum = 0;
	int count = 2;

	sum = i + j;
	printf("%ld%c%c%ld%c%c%ld%c%c", i, ',', ' ', j, ',', ' ', sum, ',', ' ');
	while (count <= 95)
	{
		i = j;
		j = sum;
		sum = i + j;
		printf("%ld", sum);
		if (count < 95)
		{
			printf("%c%c", ',', ' ');
		}
		count++;
	}
	printf("\n");
	return (0);

}
