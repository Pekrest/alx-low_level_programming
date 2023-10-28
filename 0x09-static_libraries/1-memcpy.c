#include "main.h"
/**
 * _memcpy - a function that copies memory area
 *
 * @dest: mem stored
 * @src: mem copied
 * @n: unsigned int input
 *
 * Return: dest (success)
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int i = 0;
	int j = n;

	for (; i < j; i++)
	{
		dest[i] = src[i];
		n--;
	}
	return (dest);
}
