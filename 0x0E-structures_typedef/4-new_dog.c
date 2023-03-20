#include <stdio.h>
#include <main.h>
#include <dog.h>

/**
 * new_dog - structure
 * @name: name
 * @age: age
 * @owner: owner
 *
 * Return: dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	struct dog *d;
	
	d = malloc(sizeof(struct dog));
	if (d == NULL)
		return (NULL);
	d->name = name;
	d->age = age;
	d->owner = owner;
	return (d);
}
