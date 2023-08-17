#include "main.h"
/**
 * print_last_digit - a function that prints the last digit of a number
 *
 * @a: int input
 *
 * Return: last digit
 *
 */
int print_last_digit(int a)
{
	int i;

	i = a % 10;
	if (i < 0)
	{
		_putchar(-i + 48);
		return (-i);
	}
	else
	{
		_putchar(i + 48);
		return (i);
	}
}
