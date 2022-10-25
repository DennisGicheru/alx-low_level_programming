#include "lists.h"

/**
 * print_list - prints all strings in linked list
 * @h: pointer to first node in linked list
 *
 * Return: number of nodes in list
 */

size_t print_list(const list_t *h)
{
	size_t n = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%d] %s\n", h->len, h->str);
		n++;
		h = h->next;
	}

	return (n);
}
