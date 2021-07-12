#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
int isNumber(char number[]);

/**
  * main - functio that adds positive numbers
  * @argc: integer number that holds number of arguments
  * @argv: character pointer that holds the arguments
  *
  * Return: 0 if no number is passed 1 if one of the number is symbols
  */
int main(int argc, char *argv[])
{
	int i;
	int sum = 0;

	if (argc - 1 < 1)
	{
		printf("0\n");
	}
	else
	{
		for (i = 1; i < argc; i++)
		{
			if (isNumber(argv[i]) == 0)
			{
				printf("Error\n");
				return (1);
			}
			else
			{
				sum += atoi(argv[i]);
			}
		}
		printf("%d\n", sum);
	}
	return (0);
}

/**
  * isNumber - to check the given input is number or not
  * @number: character array
  *
  * Return: 0 or 1
  */

int isNumber(char number[])
{
	int i = 0;

	if (number[0] == '-')
	{
		i = 1;
	}
	for (; number[i] != '\0'; i++)
	{
		if (number[i] < '0' || number[i] > '9')
			return (0);
	}
	return (1);
}
