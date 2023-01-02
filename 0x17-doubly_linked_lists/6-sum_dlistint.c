#include "lists.h"

/**
 *sum_dlistint - sum elements in list
 *@head: head
 *@n: integer
 *Return: Sum of all data or 0 if list is empty
 */

int sum_dlistint(dlistint_t *head)
{
int sum = 0;

if (head == NULL)
return (0);
while (head != NULL)
{
sum += head->n;
head = head->next;
}
return (sum);
}
