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
	unsigned char *p = s;

	while (n--)
	{
		*p++ = (unsigned char)c;
	}

	return (s);
}
