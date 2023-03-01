#include "main.h"
/* more headers goes there */

/**
 * _strncpy - string
 * @dest: char param
 * @src: char param
 * @n: int
 *
 * Return: string
 */
char *_strncpy(char *dest, char *src, int n)
{
	int k;

	for (k = 0; k < n && src[k] != '\0'; k++)
	{
		dest[k] = src[k];
	}

	for (; k < n; k++)
		dest[k] = '\0';

	return (dest);
}
