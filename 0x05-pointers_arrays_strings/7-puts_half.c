#include "main.h"
/* more headers goes there */

/**
 * puts_half - int length
 * @str: char param
 *
 * Return: void
 */
void puts_half(char *str)
{
	int l, i, h;

	for (l = 0; str[l] != '\0'; ++l)
	;

	if (l % 2 == 0)
	{
		h = l / 2;
	}

	if (l % 2 != 0)
		h = (l - 1) / 2;

	for (i = 0; i < l; i++)
	{
		if (i < h)
			continue;
		if (i >= h)
			_putchar(str[i]);
	}
	_putchar('\n');
}
