#include "main.h"
/**
 * print_most_numbers - a function that prints the numbers, from 0 to 9,
 * followed by a new line. Do not print 2 and 4
 *
 * Return: 0 (success)
 *
 */
void print_most_numbers(void)
{
	int i;

	for (i = 48; i <= 57; i++)
	{
		if (i != 50)
		{
			if (i != 52)
			{
				_putchar(i);
			}
		}
	}
	_putchar('\n');
}

