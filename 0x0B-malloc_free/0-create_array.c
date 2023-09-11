#include "main.h"
#include <stdlib.h>
/**
 * create_array - a function that creates an array of chars, and
 * initializes it with a specific char.
 *
 * @size: size input
 * @c: char input
 *
 * Return: a pointer to the array, or NULL if it fails
 */
char *create_array(unsigned int size, char c)
{
	char *archar;
	unsigned int x;

	if (size == 0)
	{
		return (NULL);
	}
	archar = malloc(size * sizeof(char));
	if (archar == NULL)
	{
		return (NULL);
	}
	for (x = 0; x < size; x++)
	{
		archar[x] = c;
	}
	return (archar);
}
