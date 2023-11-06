#include "main.h"

/**
 * main - a program that prints all arguments it receives
 *
 * @argv: argument vector
 * @argc: argument count
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

