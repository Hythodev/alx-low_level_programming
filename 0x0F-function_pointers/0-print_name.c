#include <stdio.h>
#ifndef FUNCTION_POINTER_H
#include "function_pointers.h"
#endif

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
