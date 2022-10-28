#include "lists.h"
#include <stdlib.h>

/**
* add_nodeint - adding a new node at beginning of list
* @head: header to linked list
* @n: number
*Return: number of elements in linked list
*/

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node;
	/*use malloc*/
	new_node = malloc(sizeof(listint_t));

	if (new_node == NULL)
		return (NULL);
	new_node->n = n;
	new_node->next = *head;
	*head = new_node;

	return (*head);
}
