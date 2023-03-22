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
	printf("Name: %s\n", d->name != NULL ? d->name : "(nil)");
	printf("Age: %lf\n", d->age != 0 ? d->age : 0);
	printf("Owner: %s\n", d->owner != NULL ? d->owner: "((nil)");
}