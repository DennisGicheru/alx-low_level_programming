#include "lists.h"
#include <stdlib.h>

/**
* add_dnodeint - adds a new element at beginning of a list
* @head: pointer to head
* @n: integer
* Return: address of new element, or NULL
*/

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
dlistint_t *new;

new = malloc(sizeof(dlistint_t));
if (new == NULL)
return (NULL);
new->prev = NULL;
new->next = *head;
new->n = n;
if (*head != NULL)
(*head)->prev = new;
*head = new;
return (new);
}
