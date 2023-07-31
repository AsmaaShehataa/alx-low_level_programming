#include "lists.h"

/**
 * add_nodeint - adds a new node at the beginning of a listint_t list.
 * @head: pointer to the 1st element in the list
 * @n: data to be enteterd to this new node
 * Return: new node at the beg of the list
*/

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node;

	new_node = malloc(sizeof(listint_t));

	if (!new_node)
		return (NULL);

	new_node->n = n;
	new_node->next = *head; /* set next as head and move it forward by */
	*head = new_node;

	return (new_node);
}
