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

	array = str;

	if (str == NULL)
		return (NULL);

	array = malloc(sizeof(str));

	if (array == NULL)
		return (NULL);
	else
	{
		return (array);
	}
	free(array);
}
