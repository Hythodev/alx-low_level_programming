#include "main.h"
/* more headers goes there */

/**
 * write_num - add values
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
 * times_table - add values
 *
 * Return: void
 */
void times_table(void)
{
	int n;

	n = 0;

	while (n <= 9)
	{
		int i;

		for (i = 0; i <= 9; i++)
		{
			int prod;

			prod = n * i;

			write_num(prod);
			if (i != 9)
			{
				_putchar(44);
			}
			if (prod < 10)
				_putchar(32);
			if ((prod < 10) && ((n * (i + 1)) <= 9))
				_putchar(32);
			if ((i != 9) && (prod >= 10))
				_putchar(32);
		}
		n++;
		_putchar('\n');
	}
}
