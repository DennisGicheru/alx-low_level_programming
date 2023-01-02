#include "lists.h"

/**
* get_dnodeint_at_index - gets node from a list
* @head: pointer to head
* @index: integer
* Return: nth Node or Null if it doesn't exist
*/

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
unsigned int x;

for (x = 0; x < index && head->next; x++)
{
head = head->next;
}
if (x < index)
return (NULL);
return (head);
}
