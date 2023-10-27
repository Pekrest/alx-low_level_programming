#include "main.h"

int main_sqrt_recursion(int j, int i);

/**
 * _sqrt_recursion - a function that returns the natural square root of
 * a number.
 *
 * @n: int to calculate sqrt
 *
 * Return: natural square root
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (main_sqrt_recursion(n, 0));
}

/**
 * main_sqrt_recursion - a function to find the natural square root of
 * a number recursively.
 *
 * @j: int to calculate sqrt
 * @i: iterator
 *
 * Return: square root (success)
 */
int main_sqrt_recursion(int j, int i)
{
	if (i * i > j)
	{
		return (-1);
	}
	if (i * i == j)
	{
		return (i);
	}
	return (main_sqrt_recursion(j, i + 1));
}
