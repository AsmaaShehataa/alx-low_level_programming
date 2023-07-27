#include "lists.h"

/**
 * add_node - adds a new node in the beg of list
 * @head: address of a pointer to a head node
 * @str: str field of node
 * Return: new node
*/


list_t *add_node(list_t **head, const char *str)
{
	list_t *new_head = malloc(sizeof(list_t));

	if (!head || !new_head)
		return (NULL);
	if (head)
	{
		new_head->str = strdup(str);

		if (!new_head->str)
		{
			free(new_head);
			return (NULL);
		}
		new_head->len = str_len(new_head->str);
	}
	new_head->next = *head;
	*head = new_head;
	return (new_head);
}
