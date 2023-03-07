#include "main.h"
/**
 * _memcpy - memory
 * @dest: char param
 * @src: char param
 * @n: int
 * Return: pointer
 */

char *_memcpy(char *dest char *src, unsigned int n)
{
	unsigned int i;

	i = 0;

	while (i < n)
	{
		dest[i] = src[i];
		i++;
	}

	return (dest);
}
