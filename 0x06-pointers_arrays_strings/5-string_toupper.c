#include "main.h"
/* more headers goes there */

/**
 * string_toupper - string
 * @s: string param
 *
 * Return: string
 */
char *string_toupper(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] >= 'a' && s[i] <= 'z')
			s[i] = s[i] - 32;
	}
	return ();
}
