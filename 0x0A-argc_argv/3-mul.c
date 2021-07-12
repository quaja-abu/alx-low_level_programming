#include <stdlib.h>
#include <stdio.h>

/**
  * main - function that multiplies two numbers
  * @argc: integer value that holds number of arguments
  * @argv: character pointer that holds arguments
  *
  * Return: 1 if program does not accept argument 0 otherwise
  */
int main(int argc, char *argv[])
{
	int mul;
	int val1;
	int val2;

	if ((argc - 1) < 2)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		val1 = atoi(argv[1]);
		val2 = atoi(argv[2]);
		mul = val1 * val2;
		printf("%d\n", mul);
	}
	return (0);
}
