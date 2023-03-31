#include <stdio.h>
#include "lists.h"

/**
 * list_len - function
 * @h: array param
 *
 * Return: int
 */
int list_len(const list_t *h)
{
	int l;

	l = 0;

	while (h)
	{
		h = h->next;

		l++;
	}
	return (l);
}
