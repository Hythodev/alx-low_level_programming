#include "main.h"
/* more headers goes there */

/**
 * _puts - int length
 * @str: char param
 *
 * Return: void
 */
void _puts(char *str)
{
	int l, i;

	for (l = 0; str[l] != '\0'; ++l)
	;

	for (i = 0; i < l; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
