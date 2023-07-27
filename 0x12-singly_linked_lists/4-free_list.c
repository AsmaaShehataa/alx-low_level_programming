#include "lists.h"

/**
 * free_list - function that frees a list_t list.
 * @head: address of a pointer to a head node
 * Return: (0) on success
*/

void free_list(list_t *head)
{
	list_t *node, *next_node;

	if (!head)
		return;

	node = head;
	while (node)
	{
		next_node = node->next;
		free(node->str);
		free(node);
		node = next_node;
	}
}

