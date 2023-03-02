#include "main.h"
/* more headers goes there */

/**
 * leet - string
 * @str: char param
 *
 * Return: string
 */
char *leet(char *str)
{
	int j, k;

	for (j = 0; str[j] != '\0'; ++j)
	;

	j = j + 1;

	for (k = 0; k < j && str[k] != '\0'; k++)
	{
		if ((str[k] == 'a') || (str[k] == 'A'))
			str[k] = 52;

		if ((str[k] == 'e') || (str[k] == 'E'))
			str[k] = 51;

		if ((str[k] == 'o') || (str[k] == 'O'))
			str[k] = 48;

		if ((str[k] == 't') || (str[k] == 'T'))
			str[k] = 55;

		if ((str[k] == 'l') || (str[k] == 'L'))
			str[k] = 49;
	}

	return (str);
}
