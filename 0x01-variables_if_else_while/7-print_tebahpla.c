#include <stdio.h>
/**
 * main - a program that prints lowercase alphabets
 *	the reverse
 * Return: 0 (success)
 *
 */
int main(void)
{
	int i = 122;

	while (i >= 97)
	{
		putchar(i);
		i--;
	}
	putchar('\n');
	return (0);
}
