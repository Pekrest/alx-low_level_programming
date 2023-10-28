#include "main.h"
/**
 * _abs - a function that computes the absolute value of an integer.
 *
 * @a: int input
 *
 * Return: absolute value of int
 *
 */
int _abs(int a)
{
	if (a >= 0)
	{
		return (a);
	}
	else
	{
		return (a * -1);
	}
}
