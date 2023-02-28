#include "main.h"
/* more headers goes there */

/**
 * puts2 - int length
 * @str: char param
 *
 * Return: void
 */
void puts2(char *str)
{
	int l, i;

	for (l = 0; str[l] != '\0'; ++l)
	;

	for (i = 0; i < l; i++)
	{
		if (i % 2 == 0)
			_putchar(str[i]);
	}
	_putchar('\n');
}
