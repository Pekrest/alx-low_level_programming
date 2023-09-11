#include <stdlib.h>
#include "main.h"
/**
 * str_concat - a function that concatenates two strings.
 *
 * @s1: string input
 * @s2: string input
 *
 * Return: concat of s1 and s2, or NULL on failure
 */
char *str_concat(char *s1, char *s2)
{
	char *concat;
	int x, y;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	x = y = 0;
	while (s1[x] != '\0')
		x++;
	while (s2[y] != '\0')
		y++;
	concat = malloc((x + y + 1) * sizeof(char));
	if (concat == NULL)
	{
		return (NULL);
	}
	x = y = 0;
	while (s1[x] != '\0')
	{
		concat[x] = s1[x];
		x++;
	}
	while (s2[y] != '\0')
	{
		concat[x] = s2[y];
		x++, y++;
	}
	concat[x] = '\0';
	return (concat);
}
