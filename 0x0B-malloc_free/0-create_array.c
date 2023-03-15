#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * create_array - function
 * @size: int param
 * @c: char param
 *
 * Return: char
 */
char *create_array(unsigned int size, char c)
{
	char *array;
	
	if (size != 0)
	{
		array = malloc(sizeof(char) * size);
		array[0] = c;
		return (array);
	}
	else
	{
		return (NULL);
	}

}
