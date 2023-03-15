#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * _strdup - function
 * @str: char param
 *
 * Return: char
 */
char *_strdup(char *str)
{
	char *array;

	int l;

	for (l = 0; str[l] != '\0'; ++l)
	;
	
	l = l + 1;

	if (str == NULL)
		return (NULL);

	array = malloc(sizeof(char) * l);

	if (array == NULL)
		return (NULL);
	else
	{
		for (i = 0; str[i] != '\0'; i++)
		{
			array[i] = str[i];
		}
		array[i] = '\0';
		return (array);
	}
	free(array);
}
