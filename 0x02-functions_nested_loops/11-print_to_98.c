#include "main.h"
/* more headers goes there */

/**
 * print_to_98 - write values
 * @n: int
 *
 * Return: void
 */
void write_num(int num)
{
	if (num < 0)
	{
		_putchar('-');
		n = -n;
	}

	if (num / 10)
		write_num(num / 10);

	_putchar(num % 10 + '0');
}

void print_to_98(int n)
{
	if (n > 98)
	{
		while (n > 98)
		{
			write_num(n);
			if (n != 98)
			{
				_putchar(44);
				_putchar(32);
			}
			n--;
		}
	}

	if (n <= 98)
	{
		while (n <= 98)
		{
			write_num(n);
			if (n != 98)
			{
				_putchar(44);
				_putchar(32);
			}
			n++;
		}
	}
	_putchar('\n');
}
