#include "lists.h"

/**
 *_strlen - length of a string
 *@s: A pointer to an int that will be updated
 *
 *Return: void
 */

int _strlen(const char *s)
{
	int n;

	n = 0;

	while (s[n] != '\0')
	{
		n++;
	}
	return (n);
}

/**
* add_node_end -add node to end of a list
* @head: pointer to head
*@str: string
*Return: address of new element
*/

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node, *last_node = *head;
	/* using malloc */
	new_node = malloc(sizeof(list_t));

	if (new_node == NULL)
		return (NULL);

	new_node->str = strdup(str);
	new_node->len = _strlen(str);
	new_node->next = NULL;

	if (*head == NULL)
	{
		*head = NULL;
		return (*head);
	}
	while (last_node->next != NULL)
		last_node = last_node->next;
	last_node->next = new_node;
	return (*head);
}
