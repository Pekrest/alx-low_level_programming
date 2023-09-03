#include "main.h"
/**
 * exp_recursion - to find the natural sqrt of a number
 *
 * @x: int input
 * @y: iterator
 *
 * Return: sqrt, or -1 if negative number
 */
int exp_recursion(int x, int y)
{
	if (y * y > x)
		return (-1);
	if (y * y == x)
		return (y);
	return (exp_recursion(x, y + 1));
}

/**
 * _sqrt_recursion - a function that returns the natural
 * square root of a number.
 *
 * @n: int input
 *
 * Return: natural sqrt.
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (exp_recursion(n, 0));
}
