#include "lists.h"
#include <stdlib.h>

/**
*free_listint2 - frees a integer list
*@head: pointer to head of linked list
*Return: void
*/

void free_listint2(listint_t **head)
{
	listint_int *temp; /*declare the list*/

	if (head == NULL || *head == NULL)
		return;
	while ((*head)->next != NULL)
	{
		temp = (*head)->next;
		free(*head);
		*head = temp;
	}
	free(*head);
	*head = NULL;
}

