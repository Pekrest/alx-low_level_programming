#include "main.h"
/**
 * more_numbers - a function that prints 10 times the numbers,
 * from 0 to 14, followed by a new line.
 *
 * Return: 0 (success)
 *
 */
void more_numbers(void)
{
	int i;
	int j;

	for (i = 48; i <= 57; i++)
	{
		for (j = 0; j <= 14; j++)
		{
		if (j > 9)
		_putchar(j / 10 + '0');
		_putchar(j % 10 + '0');
		}
	_putchar('\n');
	}
}
