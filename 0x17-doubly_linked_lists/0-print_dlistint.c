#include "lists.h"

/**
* print_dlistint - prints all elements of a list
* @h: pointer to the header
* Return - number of nodes
*/

size_t print_dlistint(const dlistint_t *h)
{
    size_t n = 0;

    while (h != NULL)
    {
        printf("%i\n", h->n);
        h = h->next;
        n++;
    }

    return (n);
}
