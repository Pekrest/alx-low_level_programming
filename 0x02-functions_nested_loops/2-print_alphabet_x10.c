#include "main.h"
/**
 * print_alphabet_x10 - prints the alphabet in lowercase
 * 10x followed by a new line
 *
 * Return: 0 (success)
 *
 */
void print_alphabet_x10(void)
{
	int a;
	int b;

	for (a = 0; a <= 9; a++)
	{
		for (b = 97; b <= 122; b++)
		{
			_putchar(b);
		}
		_putchar('\n');
	}
	_putchar('\n');
}
