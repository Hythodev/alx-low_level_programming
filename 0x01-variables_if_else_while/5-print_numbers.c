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
	int l = 0;

	while (l < 10)
	{
		printf("%d", l);
		l++;
	}
	putchar('\n');
	return (0);
}
