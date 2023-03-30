#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * struct list_s - singly linked list
 * @str: string - (malloc'ed string)
 * @len: length of the string
 * @next: points to the next node
 *
 * Description: singly linked list node structure
 */
typedef struct list_s
{
    char *str;
    unsigned int len;
    struct list_s *next;
} list_t;

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
