#include <stdio.h>
/**
 * main - a program that prints lowercase alphabets
 *
 * Return: 0 (success)
 *
 */
int main(void)
{
	int i = 97;

	while (i <= 122)
	{
		putchar(i);
		i++;
	}
	putchar('\n');
	return (0);
}
