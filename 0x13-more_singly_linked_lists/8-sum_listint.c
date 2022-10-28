#include "lists.h"

/**
*sum_listint - sums all data of a linked list
*@head: pointer to head
*
*Return: sum of data
*/

int sum_listint(listint_t *head)
{
	unsigned int sum = 0;

	if (head == NULL)
		return (0);

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
