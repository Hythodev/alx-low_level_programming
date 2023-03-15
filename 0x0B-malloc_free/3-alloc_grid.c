#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * alloc_grid - function
 * @width: int param
 * @height: int param
 *
 * Return: int
 */
int **alloc_grid(int width, int height)
{
	int **array;

	int i, j;

	array = malloc(sizeof(int) * height);

	if (array == NULL)
		return (NULL);
	
	for (i = 0; i < height; i++)
	{
		array[i] = malloc(sizeof(int) * width);
		for (j = 0; j < width; j++)
		{
			array[i][j] = 0;
		}
	}
	return (array);
	free(array);
}
