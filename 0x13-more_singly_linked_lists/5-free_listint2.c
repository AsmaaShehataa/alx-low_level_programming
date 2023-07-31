#include "lists.h"

/**
 * free_listint2 - frees memory from linked list
 * @head: pointer to the node
 * Return: void (0) on success
*/

void free_listint2(listint_t **head)
{
	listint_t *mynode, *temp;

	if (head == NULL)
		return;

	mynode = *head;

	while (mynode)
	{
		temp = mynode;
		mynode = mynode->next;
		free(temp);
	}
	*head = NULL;
}
