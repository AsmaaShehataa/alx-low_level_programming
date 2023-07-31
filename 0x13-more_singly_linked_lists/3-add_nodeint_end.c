#include "lists.h"

/**
 * add_nodeint_end - add node at the end of listint_t
 * @head: pointer points to the node
 * @n: data to be enteterd to this new node
 * Return: new node at the end of the listint_t
*/

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *last_node;
	listint_t *tempo = *head;

	last_node = malloc(sizeof(listint_t));

	if (!last_node)
		return (NULL);

	last_node->n = n;
	last_node->next = NULL;

	if (*head == NULL)
	{
		*head = last_node;
		return (last_node);
	}

	while (tempo->next)
		tempo = tempo->next;

	tempo->next = last_node;
	return (last_node);
}
