#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * print_list - function
 * @h: array param
 *
 * Return: int
 */
int print_list(const list_t *h)
{
	int l, i;

	l = 0;

	while (h != NULL)
	{
		if (h->str != NULL)
		{
			for (i = 0; h->str[i] != '\0'; i++)
			;

			printf("[%d} %s", i, h->str);
		}
		else
			printf("[%d] %s", 0, "(nil)");

		h = h->next;

		l++;
		printf("\n");
	}
	return (l);
}
