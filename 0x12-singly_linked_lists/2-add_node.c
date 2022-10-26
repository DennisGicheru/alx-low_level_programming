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
	while (s[n] != '\0') /*Character count of string*/
	{
		n++;
	}
	return (n);
}

/**
* add_node - adds a new node at the beginning of a list_t
* @head: points to head of linked list
* @str: string
* Return: number of elements in linked list or NULL
*/

list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node;
	/*Using malloc*/
	new_node = malloc(sizeof(list_t));

	if (new_node == NULL)
		return (NULL);

	new_node->str = strdup(str);
	new_node->len = _strlen(str);

	new_node->next = *head;
	*head = new_node;

	return (*head);
}
