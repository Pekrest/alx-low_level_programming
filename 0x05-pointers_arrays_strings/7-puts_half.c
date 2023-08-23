#include "main.h"
/**
 * puts_half - a function that prints half of a string, followed by \n
 *
 * @str: string
 *
 * Return: output
 *
 */
void puts_half(char *str)
{
	int i, j, len;

	len = 0;
	for (i = 0; str[i] != '\0'; i++)
		len++;
	j = (len / 2);
	if ((len % 2) == 1)
		j = ((len + 1) / 2);
	for (i = j; str[i] != '\0'; i++)
		_putchar(str[i]);
	_putchar('\n');
}
