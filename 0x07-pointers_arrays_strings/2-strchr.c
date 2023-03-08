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
	int i, j;

	for (j = 0; s[j] != '\0'; ++j)
	;

	j = j + 1;

	i = 0;

	int *p;

	while (i < j)
	{
		if (s[i] == c)
		{
			*p = s[i];
			break;
		}
		i++;
	}

	if (p == NULL)
		return (NULL);

	return (p);
}
