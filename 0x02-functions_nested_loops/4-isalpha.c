#include "main.h"
/* more headers goes there */

/**
 * _isalpha - check alpha char
 * @c: int character value
 *
 * Description: print letters
 * Return: void
 */
int _islower(int c)
{
	if (c >= 65 && c <= 90 || c >= 97 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}

	return (0);
}
