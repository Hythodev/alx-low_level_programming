#include <stdio.h>
#include "function_pointers.h"

/**
 * print_name - function
 * @name: name
 * @f: function
 *
 * Return: void
 */
void print_name(char *name, void (*f)(char *))
{
	f(name);
}
