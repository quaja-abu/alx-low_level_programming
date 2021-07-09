#include "holberton.h"
int func(int, int);
/**
  * _sqrt_recursion - funciton to find the square root of a number
  * @n: integer value
  *
  * Return: 1 or 0 or -1
  */

int _sqrt_recursion(int n)
{
	int root = 0;
	int output;

	output = func(n, root);
	return (output);
}
/**
  * func - function to be called by _sqrt_recursion
  * @square: integer value
  * @root: integer value
  *
  * Return: integer value
  */
int func(int square, int root)
{
	if (root * root == square)
	{
		return (root);
	}
	if (root * root > square)
	{
		return (-1);
	}
	return (func(square, root + 1));
}
