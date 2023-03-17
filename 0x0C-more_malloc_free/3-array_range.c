#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/* more headers goes there */

/**
 * array_range - function
 * @min: int param
 * @max: int param
 *
 * Return: int
 */
int *array_range(int min, int max)
{
	int *array;

	int n, i, j;

	n = (max - min) + 1;

	if (min > max)
		return (NULL);

	array = malloc(sizeof(int) * n);

	if (array == NULL)
		return (NULL);

	j = 0;

	for (i = min; i <= max; i++)
	{
		array[j] = i;
		j++;
	}
	return (array);
}
