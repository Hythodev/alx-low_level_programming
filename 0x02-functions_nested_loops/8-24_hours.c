#include "main.h"
/* more headers goes there */

/**
 * jack_bauer - value
 *
 * Return: void
 */
void jack_bauer(void)
{
	int i, j, k, l;

	for (i = 0; i <= 2; i++)
	{
		for (k = 0; k <= 9; k++)
		{
			for (l = 0; l <= 5; l++)
			{
				for (j = 0; j <= 9; j++)
				{
					_putchar(i + '0');
					_putchar(k + '0');
					_putchar(58);
					_putchar(l + '0');
					_putchar(j + '0');

					_putchar('\n');
					if ((i == 2) && (k == 3) && (l == 5) && (j == 9))
						break;
				}
				if ((i == 2) && (k == 3) && (l == 5))
					break;
			}
			if ((i == 2) && (k == 3))
				break;
		}
		if ((i == 2))
			break;
	}
}
