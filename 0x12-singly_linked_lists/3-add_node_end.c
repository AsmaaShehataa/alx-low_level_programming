#include "lists.h"

/**
 * add_node - adds a new node in the beg of list
 * @head: address of a pointer to a head node
 * @str: str field of node
 * Return: new node
*/


list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node = malloc(sizeof(list_t));
	list_t *node = *head;

	if (!head || !new_node)
		return (NULL);

	if (str)
	{
		new_node->str = strdup(str);
		if (!new_node->str)
		{
			free(new_node);
			return (NULL);
		}
		new_node->len = str_len(new_node->str);
	}
	if (node)
	{
		while (node->next)
		node = node->next;
		node->next = new_node;
	}
	else
		*head = new_node;
	return (new_node);
}
