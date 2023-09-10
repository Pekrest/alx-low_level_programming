#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * main -  a program that prints the minimum number of coins to
 * make change for an amount of money.
 *
 * @argc: int input (argument count)
 * @argv: array of char ( argument vector)
 *
 * Return: 0 (success)
 *
 */
int main(int argc, char *argv[])
{
	int cents, pieces = 0;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	cents = atoi(argv[1]);

	if (argc < 0)
	{
		printf("0\n");
		return (0);
	}
	while (cents > 0)
	{
		if (cents >= 25)
		{
			cents -= 25;
		}
		else if (cents >= 10)
		{
			cents -= 10;
		}
		else if (cents >= 5)
		{
			cents -= 5;
		}
		else if (cents >= 2)
		{
			cents -= 2;
		}
		else
		{
			cents -= 1;
		}
		pieces++;
	}
	printf("%d\n", pieces);
	return (0);
}
