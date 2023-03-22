#include <stdio.h>
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
} dog_t;i

void init_dog(struct dog *d, char *name, float age, char *owner);
