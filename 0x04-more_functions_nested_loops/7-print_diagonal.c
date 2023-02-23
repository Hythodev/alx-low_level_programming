#include "main.h"
/* more headers goes there */

/**
 * print_diagonal - slant line
 * @n: int
 *
 * Return: void
 */
void print_diagonal(int n)
{
	if (n > 0)
	{
		int i;

		i = 0;

		while (i < n)
		{
			_putchar(92);
			i++;
		}
		_putchar('\n');
	}
	else
	{
		_putchar('\n');
	}
}
