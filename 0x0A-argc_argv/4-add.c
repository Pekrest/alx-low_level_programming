#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * main - a program that adds positive numbers.
 *
 * @argc: int input (argument count)
 * @argv: array of char ( argument vector)
 *
 * Return: 0 (success)
 *
 */
int main(int argc, char *argv[])
{
	int x, y, num, sum = 0;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}
	for (x = 1; x < argc; x++)
	{
		char *argx = argv[x];

		for (y = 0; argx[y] != '\0'; y++)
			if (argx[y] < 48 || argx[y] > 57)
			{
				printf("Error\n");
				return (1);
			}
		num = atoi(argx);
		if (num > 0)
		{
			sum += num;
		}
	}
	printf("%d\n", sum);
	return (0);
}
