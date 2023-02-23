#include "main.h"
/* more headers goes there */

/**
 * print_most_numbers - numbers
 *
 * Return: void
 */
void print_numbers(void)
{
	int i;

	i = 48;

	while (i <= 57)
	{
		if ((i == 50) || (i == 52))
			continue;
		_putchar(i);
		i++;
	}
	_putchar('\n');
}
