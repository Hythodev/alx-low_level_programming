#include "main.h"
/* more headers goes there */

/**
 * _strncat - string
 * @dest: char param
 * @src: char param
 * @n: int
 *
 * Return: string
 */
char *_strncat(char *dest, char *src, int n)
{
	int l, k;

	for (l = 0; dest[l] != '\0'; l++)
	;

	l = l + 1;

	for (k = 0;k < n && src[k] != '\0'; k++)
	{
		dest[l + k] = src[k];
	}

	dest[l + k] = '\0';

	return (dest);
}
