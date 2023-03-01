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
	int j, k;

	for (j = 0; dest[j] != '\0'; j++)
	;

	for (k = 0; src[k] != '\0'; k++)
	{
		dest[j + k] = src[k];
	}

	dest[j + k] = '\0';

	return (dest);
}
