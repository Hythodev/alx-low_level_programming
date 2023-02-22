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

	if (n < 0)
		n = (n * -1);

	l = n % 10;
	if (l < 0)
		_putchar('0' - l);
	else
		_putchar(l + '0');
	return (l);
}
