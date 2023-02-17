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
	int n, last_digit;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	last_digit = n % 10;
	if (n > 5)
		printf("Last digit of %d is %d and is greater than 5\n", n, last_digit);
	else if (n == 0)
		printf("Last didit of %d is %d and is zero\n", n, last_digit);
	else if(n < 6 && n != 0)
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, last_digit);
	return (0);
}
