#include <stdlib.h>
#include "main.h"

/**
 * string_nconcat - a function that concatenates two strings.
 *
 * @s1: string one
 * @s2: string two
 * @n: int input
 *
 * Return: NULL if fails
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *sten;
	unsigned int a, b, c;

	if (s1 == NULL)
	{
		a = 0;
	}
	else
	{
		for (a = 0; s1[a]; ++a)
			;
	}
	if (s2 == NULL)
	{
		b = 0;
	}
	else
	{
		for (b = 0; s2[b]; ++b)
			;
	}
	if (b > n)
		b = n;
	sten = malloc((a + b + 1) * sizeof(char));
	if (sten == NULL)
		return (NULL);
	for (c = 0; c < a; c++)
		sten[c] = s1[c];
	for (c = 0; c < b; c++)
		sten[c + a] = s2[c];
	sten[a + b] = '\0';
	return (sten);
}

