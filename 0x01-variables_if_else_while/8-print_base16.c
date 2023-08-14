#include <stdio.h>
/**
 * main -program that prints all the numbers of
 *	base 16 in lowercase
 *
 * Return: 0 (success)
 *
 */
int main(void)
{
	int n;
	int i;

	for (n = 48; n <= 57; n++)
	{
		putchar(n);
	}
	for (i = 97; i <= 102; i++)
	{
		putchar(i);
	}
	putchar('\n');
	return (0);
}
