#include "main.h"
/* more headers goes there */

/**
 * print_line - line
 * @n: int
 *
 * Return: void
 */
void print_line(int n)
{
	if (n > 0)
	{
		int i;

		i = 0;

		while (i < n)
		{
			_putchar(95);
			i++;
		}
		_putchar('\n');
	}
	else
	{
		_putchar('\n');
	}
}
