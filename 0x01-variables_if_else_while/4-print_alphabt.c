#include <stdio.h>
/**
 * main - a program that prints lowercase alphabets
 *	exception q and e
 *
 * Return: 0 (success)
 *
 */
int main(void)
{
	int i = 97;

	while (i <= 122)
	{
		if (i == 101 || i == 113)
		{
			i++;
			continue;
		}
		putchar(i);
		i++;
	}
	putchar('\n');
	return (0);
}
