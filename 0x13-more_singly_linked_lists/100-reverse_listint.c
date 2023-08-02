#include "lists.h"

/**
 * reverse_listint - reverses a linked list
 * @head: pointer of the node
 * Return: pointer of the 12st node in the new list
*/

listint_t *reverse_listint(listint_t **head)
{
	listint_t *previous = NULL;
	listint_t *prece = NULL;

	while (*head)
	{
		prece = (*head)->next;
		(*head)->next = previous;
		previous = *head;
		*head = prece;
	}
	*head = previous;
	return (*head);
}
