#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 *print_strings - function
 * @separator: char
 * @n: int
 *
 * Return: void
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;

	va_list ap;

	va_start(ap, n);
	for (i = 0; i < n; i++)
	{
		char *k;

		k = va_arg(ap, char*);
		if (k != "")
			printf("%s", k);
		else
			printf("%s", "(nil)");
		if (separator && i != (n - 1))
			printf("%s", separator);
	}
	va_end(ap);
	printf("\n");
}
