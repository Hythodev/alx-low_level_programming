#include <stdio.h>
#include <main.h>
#include <dog.h>

/**
 * struct dog - structure
 * @name: name
 * @age: age
 * @owner: owner
 *
 * Description: dog
 */
typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog_t;
