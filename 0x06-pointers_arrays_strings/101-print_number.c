#include "main.h"
/**
 * print_number - a function that prints an integer.
 *
 * @n: int input
 *
 * Return: 0 (success)
 *
 */
void print_number(int n)
{
	unsigned int i;

	i = n;

	if (n < 0)
	{
		_putchar('-');
		i = -n;
	}

	if (i / 10 != 0)
	{
		print_number(i / 10);
	}
	_putchar((i % 10) + '0');
}
