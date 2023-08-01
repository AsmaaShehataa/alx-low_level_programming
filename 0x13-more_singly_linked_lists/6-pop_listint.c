#include "lists.h"

/**
 * pop_listint - deletes the head node of a listint_t.
 * @head: pointer of the node
 * Return: head's node data
*/

int pop_listint(listint_t **head)
{
	listint_t *temp;
	int mynum;

	if (head == NULL || *head == NULL)
		return (0);

	mynum = (*head)->n;
	temp = (*head)->next;
	free(*head);
	*head = temp;


	return (mynum);
}
