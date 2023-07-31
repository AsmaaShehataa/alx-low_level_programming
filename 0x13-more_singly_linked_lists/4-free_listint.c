#include "lists.h"

/**
 * free_listint -  frees a listint_t list.
 * @head: pointer to the node
 * Return: void (0) on success
*/

void free_listint(listint_t *head)
{
	listint_t *freeme;


	while (head)
	{
		freeme = head->next;
		free(freeme);
		head = freeme;
	}
}
