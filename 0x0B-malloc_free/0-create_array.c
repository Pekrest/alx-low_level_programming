#include <stdlib.h>
#include "main.h"

/**
 * create_array -  a function that creates an array of chars, and initializes
 * it with a specific char.
 *
 * @size: array
 * @c: char
 *
 * Return: NULL if size = 0, returns a pointer to the array,
 * or NULL if it fails
 */
char *create_array(unsigned int size, char c)
{
	char *stren;
	unsigned int x;

	stren = malloc(size * sizeof(char));
	if (size == 0 || stren == NULL)
	{
		return (NULL);
	}

	for (x = 0; x < size; x++)
	{
		stren[x] = c;
	}
	return (stren);
}

