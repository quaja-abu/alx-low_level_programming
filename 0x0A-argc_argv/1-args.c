#include <stdio.h>

/**
  * main - function to print number of arguments
  * @argc: integer argument holds the number of arguments
  * @argv: character pointer holds arguments
  *
  * Return: Always 0.
  */

int main(int argc,  __attribute__((unused)) char *argv[])
{
	printf("%d\n", argc - 1);
	return (0);
}
