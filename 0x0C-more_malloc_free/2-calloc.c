#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * _memset - memory
 * @s: char param
 * @b: char param
 * @n: int
 * Return: pointer
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	i = 0;

	while (i < n)
	{
		s[i] = b;
		i++;
	}

	return (s);
}
/* more headers goes there */

/**
 * _calloc - function
 * @nmemb: int param
 * @size: int param
 *
 * Return: void
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *array;

	if ((nmemb == 0) || (size == 0))
		return (NULL);

	array = malloc(nmemb * size);

	if (array == NULL)
		return (NULL);
	if (array)
		_memset(array, 0, nmemb * size);

	return (array);
}
