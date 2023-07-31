#include "lists.h"

/**
 * free_listint - frees memory from linked list
 * @head: pointer to the node
 * Return: void (0) on success
*/

void free_listint(listint_t *head)
{
	listint_t *mfreeme;

	while (head)
	{
		mfreeme = head->next;
		free(head);
		head = mfreeme;
	}
}
