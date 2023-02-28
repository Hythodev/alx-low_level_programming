#include "main.h"
/* more headers goes there */

/**
 * rev_string - int length
 * @s: char param
 *
 * Return: void
 */
void rev_string(char *s)
{
	int l, i;

	for (l = 0; s[l] != '\0'; ++l)
	;

	for (i = l - 1; i >= 0; i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
