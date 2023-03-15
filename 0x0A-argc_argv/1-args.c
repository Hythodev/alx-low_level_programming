#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * main - function
 * @argc: count param
 * @argv: char
 *
 * Return: int
 */
int main(int argc, char *argv[])
{
	int j;

	for (j = 0; j < argc; j++)
	;
	printf("%d\n", j - 1);
	return (0);
}
