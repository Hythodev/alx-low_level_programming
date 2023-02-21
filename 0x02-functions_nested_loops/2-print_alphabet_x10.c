#include "main.h"
/* more headers goes there */

/**
 * print_alphabet_x10 - print letters 10 times
 *
 * Description: print letters
 * Return: void
 */
void print_alphabet_x10(void)
{
	int l, i;
	i = 10;

	while (i < 10)
	{
		l = 'a';

		while (l <= 'z')
		{
			_putchar(l);
			l++;
		}
		i++;
	}
	_putchar('\n');
}
