#include "main.h"
/* more headers goes there */

/**
 * _isdigit - returns 1 if digit otherwise 0
 * @c: int character value
 *
 * Description: print letters
 * Return: int
 */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	if ((c >= 65 && c <= 90) || (c <= 97 && c <= 122))
	{
		return (0);
	}

	return (0);
}
