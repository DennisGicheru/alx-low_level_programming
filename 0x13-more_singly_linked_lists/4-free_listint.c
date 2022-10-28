#include "lists.h"
#include <stdlib.h>

/**
*free_listint - frees up space on listint_int
*@head: header to linked list
*
*Return: void
*/

void free_listint(listint_t *head)
{
	listint_t *temp;

	if (head == NULL)
		return;

	while (head->next != NULL)
	{
		temp = head->next;
		free(&head->n);
		head = temp;
	}
	free(head);
}
