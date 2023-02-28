#include "main.h"
/* more headers goes there */

/**
 * swap_int - int values
 * @a: int param
 * @b: int param
 *
 * Return: void
 */
void swap_int(int *a, int *b)
{
	int *swap1, *swap2;
	*swap1 = *a;
	*swap2 = *b;
	*a = *swap2;
	*b = *swap1;
}
