#include "main.h"
/**
 * _strspn - function
 * @s: char param
 * @accept: char param
 *
 * Return: int
 */

unsigned int _strspn(char *s, char *accept)
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
