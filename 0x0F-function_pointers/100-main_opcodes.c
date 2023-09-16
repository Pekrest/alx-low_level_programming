#include <stdlib.h>
#include <stdio.h>
/**
 * main - a program that prints the opcodes of its own main function.
 *
 * @argv: argument vector
 * @argc: argument count
 *
 * Return: 0 (success)
 */
int main(int argc, char *argv[])
{
	int bytes, x;
	char *archar;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}
	bytes = atoi(argv[1]);
	if (bytes < 0)
	{
		printf("Error\n");
		exit(2);
	}
	archar = (char *)main;
	for (x = 0; x < bytes; x++)
	{
		if (x == bytes - 1)
		{
			printf("%02hhx\n", archar[x]);
			break;
		}
		printf("%02hhx ", archar[x]);
	}
	return (0);
}
