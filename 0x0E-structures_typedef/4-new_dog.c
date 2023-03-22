#include <stdio.h>
#include <stdlib.h>
#include "dog.h"
/**
 * new_dog - function
 * @name: name
 * @age: age
 * @owner: owner
 *
 * Return: struct
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	struct dod *d;

	d = malloc(sizeof(struct dog));

	if (d == NULL)
		return (NULL);
	d->name = name;
	d->age = age;
	d->owner = owner;

	return (d);
}
