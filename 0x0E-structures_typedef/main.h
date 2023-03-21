#include <unistd.h>
#include "dog.h"

/**
 * _putchar - writes c to output
 *@c: char to write
 *
 * Return: c
 */
int _putchar(char c);
void init_dog(struct dog *d, char *name, float age, char *owner);
dog_t *new_dog(char *name, float age, char *owner);
