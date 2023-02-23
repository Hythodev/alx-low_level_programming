#include "main.h"
/* more headers goes there */

/**
 * _isupper - returns 1 if uppercase otherwise 0
 * @c: int character value
 *
 * Description: print letters
 * Return: void
 */
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	if (c >= 97 && c <= 122)
	{
		return (0);
	}

	return (0);
}
