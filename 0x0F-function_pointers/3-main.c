#include <stdio.h>
#include <stdlib.h>
/**
 * main - function
 * @argc: args
 * @argv: argv
 *
 * Return: int
 */
int main(int argc, char *argv[])
{
	int a, b, i;

	for (i = 2; i < argc; i++)
	{
		if (i == 2)
			a = atoi(argv[i]);
		else
			b = atoi(argv[i]);
	}

	return (0);
}
