#include "main.h"
/**
 * _strpbrk - function
 * @s: char param
 * @accept: char param
 *
 * Return: char
 */

char *_strpbrk(char *s, char *accept)
{
	char *p;

	int n;

	for (n = 0; *s; s++, n++)
	{
		for (p = accept; *p && *p != *s; p++)
		;

		if (!*p)
			break;
	}
	return (n);

}
