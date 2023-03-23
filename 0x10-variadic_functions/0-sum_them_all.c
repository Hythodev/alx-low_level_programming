#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * sum_them_all - function
 * @n: int
 *
 * Return: int
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;

	va_list ap;

	int sum;

	va_start(ap, n);
	for (i = 0; i < n; i++)
		sum += va_arg(ap, int);
	va_end(ap);
	return (sum);
}
