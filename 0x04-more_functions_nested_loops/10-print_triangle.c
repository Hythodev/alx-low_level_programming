#include "main.h"
/* more headers goes there */

/**
 * print_triangle - slant lines
 * @size: int
 *
 * Return: void
 */
void print_triangle(int size)
{
	int m;

	m = 1;

	if (size > 0)
	{
		int i;

		i = size;

		while (i >= 1)
		{
			int k;

			k = 0;

			while (k < i)
			{
				if (k != i - 1)
					_putchar(32);

				k++;
			}

			int l;

			l = 0;

			while (l < m)
			{
				_putchar(35);
				l++;
			}
			_putchar('\n');
			i++;
		}

	}
	else
	{
		_putchar('\n');
	}
}
