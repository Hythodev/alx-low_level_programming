#include <stdio.h>
#include "main.h"
/* more headers goes there */

/**
 * print_array - int length
 * @a: array param
 * @n: int
 *
 * Return: void
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);
		if (i != n -1)
		{
			_putchar(46);
			_putchar(32);
		}
	}
	_putchar('\n');
}
