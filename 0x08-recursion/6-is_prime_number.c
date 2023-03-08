#include "main.h"
/**
 * is_prime_number - function
 * @n: int param
 *
 * Return: int
 */

int is_prime_number(int n)
{
	if (n > 1 && n % 2 != 1)
		return (1);
	else
		return (0);
}
