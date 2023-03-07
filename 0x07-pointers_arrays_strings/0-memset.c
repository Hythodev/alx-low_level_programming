#include "main.h"
/**
 * _memset - memory
 * @s: char param
 * @b: char param
 * @n: int
 * Retur: pointer
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	i = 0;

	while (i < n)
	{
		s[i] = b;
	}

	return (s);
}
