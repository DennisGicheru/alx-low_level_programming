#include "lists.h"
#include <stdlib.h>

/**
*add_nodeint_end- adds a node at the end of a linked list
*@head: header of the linked list
*@n: integer
*
*Return: number of elements in the list
*/
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_node, *last_node = *head;
	/*use malloc*/
	new_node = malloc(sizeof(listint_t));

	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->next = NULL;

	if (*head == NULL)
	{
		*head = new_node;
		return (*head);
	}
	while (last_node->next != NULL)
		last_node = last_node->next;
	/*add new node at the end of linked list*/
	last_node->next = new_node;

	return (*head);
}
