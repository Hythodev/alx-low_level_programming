#include <stdio.h>
#include <stdlib.h>
#include "dog.h"
/**
 * print_dog - function
 * @d: struct
 *
 * Return: void
 */

void print_dog(struct dog *d)
{
	if (d == NULL)
		printf("nil");

	if (d->name == NULL)
		printf("nil\n");
	else
		printf("Name: %s\n", d->name);
	printf("Age: %lf\n", d->age);
	printf("Owner: %s\n", d->owner);
}
