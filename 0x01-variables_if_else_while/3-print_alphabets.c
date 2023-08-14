#include <stdio.h>
/**
 * main - a program that prints alphabets
 *	both lower and uppercase
 *
 * Return: 0 (success)
 *
 */
int main(void)
{
	int i = 97;
	int j = 65;

	while (i <= 122)
	{
		putchar(i);
		i++;
	}
	putchar('\n');
	while (j <= 90)
	{
		putchar(j);
		j++;
	}
	putchar('\n');
	return (0);
}
