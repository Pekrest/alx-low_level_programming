#include "main.h"
/**
 * _pow_recursion - a function that returns the value of x
 * raised to the power of y.
 *
 * @x: x base int
 * @y: y exponent int
 *
 * Return: x^y, or -1 if negative int
 *
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	else if (y == 0)
	{
		return (1);
	}
	else
	return (x * _pow_recursion(x, y - 1));
}
