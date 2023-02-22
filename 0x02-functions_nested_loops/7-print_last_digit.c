#include "main.h"
/* more headers goes there */

/**
 * print_last_digit - value
 * @n: int
 *
 * Return: int
 */
int print_last_digit(int n)
{
	int l;

	l = n % 10;
	if (n < 0)
		_putchar('0' - n);
	else
		_putchar(l + '0');
	return (l);
}
