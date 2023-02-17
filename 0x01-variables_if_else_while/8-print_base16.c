#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/* more headers goes there */

/**
 * main - program entry
 *
 * Description: assigns n a random number each time it's executed
 * Return: whether n is positive, zero or negative
 */
int main(void)
{
	int l;

	l = 48;

	while (l <= 57)
	{
		putchar(l);
		if (l == 57)
			break;
		l++;
	}

	l += 40;

	while (l <= 102)
	{
		putchar(l);
		l++;
	}
	putchar('\n');
	return (0);
}
