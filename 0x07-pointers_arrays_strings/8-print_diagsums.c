#include "main.h"
#include <stdio.h>
/**
 * print_diagsums - function
 * @a: char param
 * @size: int param
 *
 * Return: void
 */

void print_diagsums(int *a, int size)
{
	int i, j,k, l, sum, sum2;

	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size; j++)
		{
			if (i == j)
				sum = sum + a[i][j];
		}
	}

	for (k = size - 1; k >= 0; k--)
	{
		for (l = size - 1; l >= 0; l--)
		{
			if (k == l)
				sum2 = sum2 + a[k][l];
		}
	}

	printf("%d %d", sum, sum2);


}
