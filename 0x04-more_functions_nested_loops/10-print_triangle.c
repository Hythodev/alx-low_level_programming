#include "main.h"
/* more headers goes there */

/**
 * print_char - slant lines
 * @m: int
 *
 * Return: void
 */
void print_char(int m)
{
	int l;

	l = 0;

	while (l < m)
	{
		_putchar(35);
		l++;
	}
}

/**
 * print_char2 - slant lines
 * @i: int
 *
 * Return: void
 */
void print_char2(int i)
{
	int k;

	k = 0;

	while (k < i)
	{
		if (k != i - 1)
			_putchar(32);

		k++;
	}
}
/**
 * * print_triangle - slant lines
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
			print_char2(i);

			print_char(m);
			_putchar('\n');
			i--;
			m++;
		}

	}
	else
	{
		_putchar('\n');
	}
}
