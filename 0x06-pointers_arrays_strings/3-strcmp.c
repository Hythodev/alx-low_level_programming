#include "main.h"
/* more headers goes there */

/**
 * _strcmp - string
 * @s1: char param
 * @s2: char param
 *
 * Return: int
 */
int _strcmp(char *s1, char *s2)
{
	while (*s1 && (*s1 == *s2))
	{
		s1++;
		s2++;
	}
	return (*(char*)s1 - *(char*)s2);
}
