#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * free_grid - function
 * gridh: array param
 * @height: int param
 *
 * Return: void
 */
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
		free(grid[i]);
	free(grid);
	return;
}
