#include "main.h"
/**
 * print_rev - a function that prints a string, in reverse, followed by \n
 *
 * @s: string to priint
 *
 */
void print_rev(char *s)
{
	int s_len = 0;
	int i;

	while (*s != '\0')
	{
		s_len++;
		s++;
	}
	s--;
	for (i = s_len; i > 0; i--)
	{
		_putchar(*s);
		s--;
	}
	_putchar('\n');
}
