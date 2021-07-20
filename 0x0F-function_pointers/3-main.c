#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>

/**
  * main - check the code
  * @args: first integer value
  * @argv: character array
  *
  * Return: Always 0.
  */
int main(int argc, char *argv[])
{
	int val;

	if (argc - 1 > 3)
	{
		printf("Error\n");
		exit(98);
	}
	if (atoi(argv[2]) != '+' || atoi(argv[2]) != '-' ||
			atoi(argv[2]) != '*' ||
			atoi(argv[2]) != '/' ||
			atoi(argv[2]) != '%')
	{
		printf("Error\n");
		exit(99);
	}
	if ((atoi(argv[2]) == '/' || atoi(argv[2]) == '%') &&
		atoi(argv[3]) == 0)
	{
		printf("Error\n");
		exit(100);
	}
	val = get_op_func(argv[2])(atoi(argv[1]), atoi(argv[3]));
			printf("%d\n", val);
			return (0);
}
