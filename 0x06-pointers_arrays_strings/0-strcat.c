#include "main.h"
/* more headers goes there */

/**
 * _strcat - string
 * @dest: char param
 * @src: char param
 *
 * Return: string
 */
char *_strcat(char *dest, char *src)
{
	int i, n, l, n2, l2;

	for (l = 0; dest[l] != '\0'; ++l)
	;
	for (l2 = 0; src[l2] != '\0'; ++l2)
	;

	n = l + 1;

	n2 = l2 + 1;

	for (i = 0; i < n2 && src[i] != '\0'; i++)
		dest[l + i] = src[i];
	dest[l + i] = '\0';

	return (dest);
}
