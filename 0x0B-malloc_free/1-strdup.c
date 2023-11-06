#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * _strdup -  a function that returns a pointer to a newly allocated space in
 * memory, which contains a copy of the string given as a parameter.
 *
 * @str: char input
 *
 * Return: 0 (success)
 */
char *_strdup(char *str)
{
	int x, y = 0;
	char *sten;

	if (str == NULL)
	{
		return (NULL);
	}
	x = 0;
	while (str[x] != '\0')
		x++;
	sten = malloc((x + 1) * sizeof(char));
	if (sten == NULL)
	{
		return (NULL);
	}
	for (y = 0; str[y]; y++)
		sten[y] = str[y];

	return (sten);
}
