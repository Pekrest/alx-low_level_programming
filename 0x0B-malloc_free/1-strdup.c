#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * _strdup - a function that returns a pointer to a newly allocated space
 * in memory, which contains a copy of the string given as a parameter.
 *
 * @str: string
 *
 * Return: strdup ptr to the duplicated str(success). otherwise return NULL
 */
char *_strdup(char *str)
{
	char *archar;
	int x, y = 0;

	if (str == NULL)
	{
		return (NULL);
	}
	x = 0;

	while (str[x] != '\0')
	{
		x++;
	}
	archar = malloc((x + 1) * sizeof(char));
	if (archar == NULL)
	{
		return (NULL);
	}
	for (y = 0; str[y]; y++)
	{
		archar[y] = str[y];
	}
	return (archar);
}
