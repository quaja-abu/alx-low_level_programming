#include <stdio.h>
#include <stdlib.h>

/**
  * main - function that prints the minimum number of coins
  * @argc: integer value that holds number of arguments
  * @argv: character pointer that holds arguments
  *
  * Return: 1 if argument is not exactly one 0 is negative
  */
int main(int argc, char *argv[])
{
	int val;
	int change;

	if ((argc - 1) > 1 || (argc - 1) == 0)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		val = atoi(argv[1]);
		if (val < 0)
		{
			printf("0\n");
		}
		else
		{
			if (val % 25 == 0)
			{
				change = val / 25;
				printf("%d\n", change);
			}
			else if (val % 25 > 0)
			{
				change = val / 25;
				printf("%d\n", ++change);
			}
			else if (val % 10 == 0)
			{
				change = val / 10;
				printf("%d\n", change);
			}
			else if (val % 10 > 0)
			{
				change = val % 10;
				printf("%d\n", change);
			}
			else if (val < 5 || val < 2)
			{
				printf("1\n");
			}
			else if(val == 5)
			{
				printf("3\n");
			}
			else
			{
				printf("1\n");
			}
		}
	}
	return (0);
}
