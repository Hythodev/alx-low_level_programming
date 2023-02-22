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
		n = (n * -1);

	_putchar(l + '0');
	return (l);
}
