#include <stdio.h>
#ifndef DOG_H
#define DOG_H
#endif

/**
 * init_dog - function
 * @dog: struct
 * @name: name
 * @age: age
 * @owner: owner
 *
 * Return: void
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = name;
	d->age = age;
	d->owner = owner;
}

