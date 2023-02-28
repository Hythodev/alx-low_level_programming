#include "main.h"
/* more headers goes there */

/**
 * _strlen - int length
 * @s: int param
 *
 * Return: int
 */
int _strlen(char *s)
{
	int l;

	for (l = 0; s[l] != '\0'; ++l);
	return (l);
}
