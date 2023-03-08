#include "main.h"
/**
 * print_chessboard - function
 * @a: char param
 *
 * Return: void
 */

void print_chessboard(char (*a)[8])
{
	int l, i, j;

	for (l = 0; *a[l] != '\0'; ++l)
	;

	l = l + 1;

	for (i = 0; i < l; i++)
	{
		for (j = 0; j < 8; j++)
		{
			_putchar(a[i][j]);
		}

		if (i != l - 1)
			_putchar('\n');
	}

}
