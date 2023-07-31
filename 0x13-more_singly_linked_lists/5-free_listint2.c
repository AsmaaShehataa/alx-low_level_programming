#include "lists.h"

/**
 * free_listint2 - frees memory from linked list
 * @head: pointer to the node
 * Return: void (0) on success
*/

void free_listint2(listint_t **head)
{
	listint_t *tempo;

	if (head == NULL)
		return;

	while (*head)
	{
		tempo = (*head)->next;
		*head = tempo;
		free(*head);
	}
	*head = NULL;
}
