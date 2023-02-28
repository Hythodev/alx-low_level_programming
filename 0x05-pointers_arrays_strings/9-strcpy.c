#include "main.h"
/* more headers goes there */

/**
 * _strcpy - int values
 * @dest: char param
 * @src: char param
 *
 * Return: string
 */
char *_strcpy(char *dest, char *src)
{
	int i, n, l;

	for (l = 0; src[l] != '\0'; ++l)
	;

	n = l + 1;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];

	for (; i < n; i++)
		dest[i] = '\0';

	return dest;
}
