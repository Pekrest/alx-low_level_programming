#include "main.h"
/**
 * puts2 - a function that prints every other character of a string,
 * starting with the first character, followed by \n
 *
 * @str: string
 *
 * Return: output
 *
 */
void puts2(char *str)
{
	int s_len = 0;
	int i = 0;
	char *a = str;
	int j;

	while (*a != '\0')
	{
		a++;
		s_len++;
	}
	i = s_len - 1;
	for (j = 0 ; j <= i ; j++)
	{
		if (j % 2 == 0)
	{
		_putchar(str[j]);
	}
	}
	_putchar('\n');
}

