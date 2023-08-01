#include "lists.h"

/**
 * delete_nodeint_at_index - delete the node at index of linked list
 * @head: pointer to the linked list
 * @index: index of the node to delete
 * Return: (1) on success
*/

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *tempo = *head;
	listint_t *current = NULL;

	if (*head == NULL)
		return (-1);

	if (index == 0)
	{
		*head = (*head)->next;
		free(tempo);
		return (1);
	}
	while (i < index - 1)
	{
		if (!tempo || (!tempo->next))
			return (-1);
			tempo = tempo->next;
			i++;
	}

	current = tempo->next;
	tempo->next = current->next;
	free(current);

	return (1);
}
