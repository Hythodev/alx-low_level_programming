#include "main.h"
/* more headers goes there */

/**
 * print_rev - int length
 * @s: char param
 *
 * Return: void
 */
void print_rev(char *s)
{
	int l, i;

	for (l = 0; s[l] != '\0'; ++l)
	;

	for (i = l - 1; i >= 0; i--)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
