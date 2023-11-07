#include <stdlib.h>
#include "main.h"

/**
 * _calloc - a function that allocates memory for an array, using malloc.
 *
 * @nmemb: number of element
 * @size: size of element
 *
 * Return: If nmemb or size is 0, then _calloc returns NULL,
 * If malloc fails, then _calloc returns NULL
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *i;
	unsigned int j;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}
	i = malloc(nmemb * size);
	if (i == NULL)
		return (NULL);
	for (j = 0; j < (nmemb * size); j++)
		i[j] = 0;
	return (i);
}
