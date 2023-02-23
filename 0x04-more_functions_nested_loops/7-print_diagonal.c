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
			if (i <= 0)
				_putchar(92);
			else
			{
				int k;

				k = 0;

				while (k < i)
				{
					_putchar(32);
					k++;
				}
				_putchar(92);
			}
			_putchar('\n');
			i++;
		}
		_putchar('\n');
	}
	else
	{
		_putchar('\n');
	}
}
