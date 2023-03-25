#include <stdio.h>
#include "function_pointers.h"

/**
 * array_iterator - function
 * @array: array
 * @size: size
 * action: function
 *
 * Return: void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	int i, n;

	n = (int)size;

	for (i = 0; i < n; i++)
		action(array[i]);
}
