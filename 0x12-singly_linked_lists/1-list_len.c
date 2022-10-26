#include "lists.h"

/**
* list-len - returns the number of elements in a linked list.
* @h: head of linked list
* Return: number of elements
*/

size_t list_len(const list_t *h)
{
	size_t n = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("%d\n", h->len);
		n++;
		h = h->next;
	}
	return (n);
}
