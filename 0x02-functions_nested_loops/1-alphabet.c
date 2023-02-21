#include <main.h>
/* more headers goes there */

/**
 * print_alphabet - program entry
 *
 * Description: print letters
 * Return: 0
 */
void print_alphabet(void)
{
	int l;

	l = 'a';

	while (l <= 'z')
	{
		_putchar(l);
		l++;
	}
	_putchar('\n');
	return (0);
}
