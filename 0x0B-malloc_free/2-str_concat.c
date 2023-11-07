#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * str_concat -  a function that concatenates two strings.
 *
 * @s1: string one
 * @s2: string two
 *
 * Return: NULL on if fails
 */
char *str_concat(char *s1, char *s2)
{
	char *conate;
	int x, y;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	x = y = 0;
	while (s1[x] != '\0')
		x++;
	while (s2[y] != '\0')
		y++;
	conate = malloc(sizeof(char) * (x + y + 1));

	if (conate == NULL)
		return (NULL);
	x = y = 0;
	while (s1[x] != '\0')
	{
		conate[x] = s1[x];
		x++;
	}

	while (s2[y] != '\0')
	{
		conate[x] = s2[y];
		x++, y++;
	}
	conate[x] = '\0';
	return (conate);
}
