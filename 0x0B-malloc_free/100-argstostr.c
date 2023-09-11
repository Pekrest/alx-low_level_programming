#include <stdlib.h>
#include "main.h"
/**
 * argstostr - a function that concatenates all the arguments of your program.
 *
 * @ac: no. of arguments
 * @av: array of arguments str
 *
 * Return: pointer to a new string, or NULL if it fails
 */
char *argstostr(int ac, char **av)
{
	char *archar;
	int x, y, a = 0, b = 0;

	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}
	for (x = 0; x < ac; x++)
	{
		for (y = 0; av[x][y]; y++)
		{
			a++;
		}
		a++;
	}
	archar = malloc((a + 1) * sizeof(char));
	if (archar == NULL)
	{
		return (NULL);
	}
	for (x = 0; x < ac; x++)
	{
		for (y = 0; av[x][y]; y++)
		{
			archar[b++] = av[x][y];
		}
		archar[b++] = '\n';
	}
	archar[b] = '\0';
	return (archar);
}
