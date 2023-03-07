#include "main.h"
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
