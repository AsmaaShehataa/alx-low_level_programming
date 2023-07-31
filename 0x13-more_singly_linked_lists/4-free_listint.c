	#include "lists.h"

	/**
	 * free_listint - frees the linked list form the memory
	 * @head: pointer to the node
	 * Return: void (0) on success
	*/

	void free_listint(listint_t *head)
	{
		listint_t *tempo;


		while (head)
		{
			freeme = head->next;
			free(head);
			head = tempo;
		}
	}
