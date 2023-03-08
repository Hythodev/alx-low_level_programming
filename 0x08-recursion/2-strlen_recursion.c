#include "main.h"
/**
 * _strlen_recursion - function
 * @s: char param
 *
 * Return: int
 */

int _strlen_recursion(char *s)
{
	int l;

	l = 0;

	if (*s)
	{
		return 1 + _strlen_recursion(s + 1);
	}
}
