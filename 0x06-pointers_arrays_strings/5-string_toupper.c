#include "main.h"
/**
 * string_toupper - a function that changes
 * all lowercase letters of a string to uppercase.
 *
 * @a: input
 *
 * Return: a (success)
 */
char *string_toupper(char *a)
{
	int b;

	b = 0;
	while (a[b] != '\0')
	{
		if (a[b] >= 97 && a[b] <= 122)
			a[b] = a[b] - 32;
		b++;
	}
	return (a);
}


