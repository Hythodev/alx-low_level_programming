#include "main.h"
/* more headers goes there */

/**
* write_num - write values
 * @num: int
 *
 * Return: void
 */
void write_num(int num)
{
	if (num < 0)
	{
		_putchar('-');
		num = -num;
	}

	if (num / 10)
		write_num(num / 10);

	_putchar(num % 10 + '0');
}

/**
* print_to_98 - write values
 * @n: int
 *
 * Return: void
 */
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
