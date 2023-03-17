#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/* more headers goes there */

/**
 * string_nconcat - function
 * @s1: char param
 * @s2: char param
 * @n: int
 *
 * Return: char
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int l, i, k;

	char *array;

	for (l = 0; s1[l] != '\0'; l++)
	;

	array = malloc(sizeof(char) * (l + n + 1));

	if (array == NULL)
		return (NULL);

	for (i = 0 ; i < l; i++)
		array[i] = s1[i];
	for (k = 0; k < n; k++)
	{
		array[i] = s2[k];
		i++;
	}
	array[i] = '\0';

	return (array);
}
