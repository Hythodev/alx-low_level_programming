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
	if (n == INT_MIN)
		n = (INT_MIN * -1)

	l = n % 10;

	_putchar(l + '0');
	return (l);

	return (0);
}
