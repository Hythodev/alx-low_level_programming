#include <stdio.h>
#include <stdlib.h>
#include "dog.h"
/**
 * init_dog - function
 * @d: struct
 * @name: name
 * @age: age
 * @owner: owner
 *
 * Return: void
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		return;

	d->name = name;
	d->age = age;
	d->owner = owner;
}
