#include "main.h"
/* more headers goes there */

/**
 * print_square - powered numbers
 * @size: int
 *
 * Return: void
 */
void print_square(int size)
{
	if (size > 0)
	{
		int i;

		i = 0;

		while (i < size)
		{
			int k;

			k = 0;

			while (k < size)
			{
				_putchar(35);
				k++;
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
