#include <stdio.h>
#include <stdlib.h>
#include "dog.h"
/**
 * free_dog - function
 * @d: struct
 *
 * Return: void
 */

void init_dog(dog_t *d)
{
	if (d != NULL)
		free(d);
}
