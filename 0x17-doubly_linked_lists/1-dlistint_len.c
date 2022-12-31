#include "lists.h"

/**
* dlistint_len - returns number of elements in a linked list
* @h: pointer to head
* Return: number of elements
*/

size_t dlistint_len(const dlistint_t *h)
{
size_t n = 0;

while (h != NULL)
{
h = h->next;
n++;
}
return (n);
}
