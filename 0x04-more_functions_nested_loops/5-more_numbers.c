#include "main.h"
/* more headers goes there */

/**
 * write_num - numbers
 * @num: int
 *
 * Return: void
 */
void write_num(int num)
{
	if (num / 10)
		write_num(num / 10);

	_putchar(num % 10 + '0');
}

/**
 * more_numbers - numbers
 *
 * Return: void
 */
void more_numbers(void)
{
	int i, j;

	j = 0;

	while (j < 10)
	{
		i = 0;

		while (i <= 14)
		{
			write_num(i);
			i++;
		}
		_putchar('\n');
		j++;
	}
}
