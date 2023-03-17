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
	int l, i;

	char *array;

	for (l = 0; s1[l] != '\0'; ++l)
	;

	if (n == NULL)
	{
		array = malloc(l+1);
		if (array == NULL)
			return (NULL);
	}
	array = malloc(l + n + 1);

	if (array == NULL)
		return (NULL);

	for (i = 0 ; i < n && s2[i] != '\0'; i++)
		s1[l + i] = s2[i];
	s1[l + i] = '\0';

	return array;
}
