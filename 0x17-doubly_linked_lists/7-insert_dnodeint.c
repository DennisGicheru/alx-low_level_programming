#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts a new node at a given position.
 * @h: head
 * @idx: index
 * @n: new data
 * Return: the address of the new node, or NULL if it failed
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
unsigned int i = 0;
dlistint_t *tmp = *h, *new;

if (*h == NULL)
return (NULL);
/* add node in the front */
if (idx == 0)
return (add_dnodeint(h, n));
/* add node in the index */
while (i < idx - 1)
{
tmp = tmp->next;
if (tmp == NULL)
{
return (NULL);
}
i++;
}
new = malloc(sizeof(dlistint_t));
if (!new)
return (NULL);
new->n = n;
new->prev = tmp;
new->next = tmp->next;
tmp->next = new;
if (new->next)
new->next->prev = new;
return (new);
}
