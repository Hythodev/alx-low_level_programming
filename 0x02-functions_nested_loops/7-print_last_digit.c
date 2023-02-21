#include "main.h"
/* more headers goes there */

/**
 * print_last_digit - value
 * @n: int
 *
 * Return: int
 */
int print_last_digit(int n)
{
	int l;

	l = n % 10;

	switch(l)
	{
	case 0:
		_putchar(48);
		break;
	case 1:
                _putchar(49);
                break;
	case 2:
		_putchar(50);
		break;
	case 3:
		_putchar(51);
		break;
	case 4:
		_putchar(52);
		break;
	case 5:
		_putchar(53);
		break;

	case 6:
		_putchar(54);
		break;

	case 7:
		_putchar(55);
		break;
	case 8:
		_putchar(56);
		break;
	case 9:
		_putchar(57);
		break;
	}

	return (0);
}
