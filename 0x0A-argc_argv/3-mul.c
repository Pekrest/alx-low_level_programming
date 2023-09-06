#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * main - a program that multiplies two numbers.
 *
 * @argc: int input (argument count)
 * @argv: array of char ( argument vector)
 *
 * Return: 0 (success)
 *
 */
int main(int argc, char *argv[])
{
	int x, mul = 1;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	for (x = 1; x < argc; x++)
	{
		mul *= atoi(argv[x]);
	}
	printf("%d\n", mul);
	return (0);
}
