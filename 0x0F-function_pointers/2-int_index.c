#include <stdio.h>
#include "function_pointers.h"
/**
 * int_index - a function that searches for an integer
 *
 * @array: array input
 * @size: size if elements
 * @cmp: ptr to function
 *
 * Return: If no element matches, return -1, otherwise If size <= 0, return -1
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int x;

	if (array == NULL || size <= 0 || cmp == NULL)
	{
		return (-1);
	}
	for (x = 0; x < size; x++)
	{
		if (cmp(array[x]))
			return (x);
	}
	return (-1);
}
