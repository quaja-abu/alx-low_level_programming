#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0.
 */
int main(void)
{
	long int i = 1;
	long int j = 2;
	long int sum = 0;
	long int count = 0;
	
	sum = i + j;
	while (count <= 4000000)
	{
		i = j;
		j = sum;
		sum = i + j;
		if ((i % 2 == 0) && (j % 2 == 0))
		{
			printf("%ld%c%ld%c%ld\n", i, '+', j, '=', sum);
		}
	count++;	
	}
	return (0);
}
