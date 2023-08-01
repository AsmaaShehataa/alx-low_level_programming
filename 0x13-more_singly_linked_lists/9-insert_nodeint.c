#include "lists.h"

/**
 * insert_nodeint_at_index -  function that inserts a new node
 * @head: pointer of the linked list
 * @idx: is the index of the list where the new node should be added
 * @n: data to insert in the new node
 * Return: the new pointer of the linked list or null
*/

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *temp = *head;
	listint_t *newNode;
	unsigned int i;

	newNode = malloc(sizeof(listint_t));

	if (!newNode || !head)
		return (NULL);

	newNode->n = n;
	newNode->next = NULL;

	if (idx == 0)
	{
		newNode->next = *head;
		*head = newNode;
		return (newNode);
	}
	for (i = 0; temp && i < idx; i++)
	{
		if (i == idx - 1)
		{
			newNode->next = temp->next;
			temp->next = newNode;
			return (newNode);
		}
		else
			temp = temp->next;
	}
	return (NULL);
}
