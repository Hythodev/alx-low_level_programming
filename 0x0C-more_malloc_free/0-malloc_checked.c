#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/* more headers goes there */

/**
 * malloc_checked - function
 * @b: int param
 *
 * Return: void
 */
void *malloc_checked(unsigned int b)
{
	void *array;

	array = malloc(b);

	if (array == NULL)
		return (98);

	return (array);
	free(array);
}
