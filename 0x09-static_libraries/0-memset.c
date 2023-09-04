#include "main.h"
/**
 * _memset - a function that fills memory with a constant byte.
 *
 * @s: address input
 * @b: char input
 * @n: unsigned int input
 *
 * Return: s (success)
 *
 */
char *_memset(char *s, char b, unsigned int n)
{
	int a = 0;

	for (; n > 0; a++)
	{
		s[a] = b;
		n--;
	}
	return (s);
}
