#include <stdio.h>
#include "main.h"
/**
 * main - a program that prints all arguments it receives.
 *
 * @argc: int input (argument count)
 * @argv: array of char ( argument vector)
 *
 * Return: 0 (success)
 */
int main(int argc, char *argv[])
{
	int x;

	for (x = 0; x < argc; x++)
	{
		printf("%s\n", argv[x]);
	}
	return (0);
}
