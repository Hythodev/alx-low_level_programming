#include <stdio.h>
#include "3-calc.h"

/**
 * get_op_func - function
 * @a: int
 * @b: int
 *
 * Return: int
 */
int (*get_op_func(char *s))(int a, int b)
{
	op_t ops[] = 
	{
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};

	int i;
}
