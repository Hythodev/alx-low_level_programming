#include <stdio.h>
/* more headers goes there */

/**
 * main - program entry
 *
 * Return: int
 */
int main(void)
{
	int i;

	i = 1;

	while (i <= 100)
	{
		if (i % 3 == 0)
			printf("Fizz");
		else if (i % 5 == 0)
			printf("Buzz");
		else if (i % 3 == 0 && i % 5 == 0)
			printf("FizzBuzz");
		else
			printf("%d", i);

		putchar(32);
		i++;
	}
	putchar('\n');
	return (0);
}
