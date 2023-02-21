#include "main.h"
/* more headers goes there */

/**
 * print_alphabet - program entry
 *
 * Description: print letters
 * Return: void
 */
int _islower(int c)
{
	if(c >= 65 && c <= 90)
	{
		return (0);
	}
	if(c >= 97 && c <= 122)
	{
		return (1);
	}

	return (0);
}
