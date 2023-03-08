#include "main.h"
/**
 * _puts_recursion - function
 * @s: char param
 * 
 * Return: pointer
 */

void _puts_recursion(char *s)
{
	int i, l;

	i = 0;

	for (l = 0; s[l] != '\0'; ++l)
	;

	l = l +1;

	while (i < l)
	{
		if (s[i] == '\0')
		{
			_putchar('\0');
			break;
		}
		else
			_putchar(s[i]);
		i++;
	}
}
