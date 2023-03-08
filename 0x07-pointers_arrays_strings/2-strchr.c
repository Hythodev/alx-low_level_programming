#include "main.h"
/**
 * _strchr - function
 * @s: char param
 * @c: char param
 *
 * Return: pointer
 */

char *_strchr(char *s, char c)
{
	char *p;

	*p = NULL;

	while (*s != c && *s != NULL)
	{
		p = ++s;
		return (p);
	}

	return (p);
}
