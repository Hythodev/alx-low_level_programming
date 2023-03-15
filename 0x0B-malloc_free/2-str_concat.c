#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/* more headers goes there */

/**
 * str_concat - string
 * @s1: char param
 * @s2: char param
 *
 * Return: string
 */
char *str_concat(char *s1, char *s2)
{
	int j, k, l, n;

	char *array;

	for (j = 0; s1[j] != '\0'; j++)
	;

	for (l = 0; s2[l] != '\0'; l++)
	;

	l = l + 1;

	array = malloc(sizeof(char) * l);

	if (array == NULL)
		return (NULL);

	for (k = 0; s2[k] != '\0'; k++)
	{
		s1[j + k] = s2[k];
	}

	s1[j + k] = '\0';

	for (n = 0; s1[n] != '\0'; n++)
		array[n] = s1[n];

	array[n] = '\0';

	return (array);
	free(array);
}
