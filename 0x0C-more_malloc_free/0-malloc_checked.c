#include <stdlib.h>
#include "main.h"
/**
 * malloc_checked - a function that allocates memory using malloc.
 *
 * @b: no. of bytes
 *
 * Return: pointer to allocated mem.
 */
void *malloc_checked(unsigned int b)
{
	void *pntr;

	pntr = malloc(b);
	if (pntr == NULL)
		exit(98);
	return (pntr);
}
