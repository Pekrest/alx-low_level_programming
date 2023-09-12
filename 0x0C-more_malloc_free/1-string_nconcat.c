#include <stdlib.h>
#include "main.h"
/**
 * string_nconcat - a function that concatenates two strings.
 * @s1: string input
 * @s2: string input
 * @n:  no. of byte
 *
 * Return: A pointer to the concatenated string, or NULL on failure
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *concat;
	unsigned int x = 0, y = 0, a = 0, b = 0;

	while (s1 && s1[a])
	{
		a++;
	}
	while (s2 && s2[b])
	{
		b++;
	}
	if (n < b)
		concat = malloc((a + n + 1) * sizeof(char));
	else
		concat = malloc((a + b + 1) * sizeof(char));
	if (!concat)
	{
		return (NULL);
	}
	while (x < a)
	{
		concat[x] = s1[x];
		x++;
	}
	while (n < b && x < (a + n))
	{
		concat[x++] = s2[y++];
	}
	while (n >= b && x < (a + b))
	{
		concat[x++] = s2[y++];
	}
	concat[x] = '\0';
	return (concat);
}
