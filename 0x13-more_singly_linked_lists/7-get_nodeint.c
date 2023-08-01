#include "lists.h"

/**
 * get_nodeint_at_index - returns the nth node of a listint_t
 * @head: pointer to the node
 * @index: index of the node to return
 * Return: pointer of the node
*/

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *mynewN = head;
	unsigned int i = 0;

	while (mynewN && i < index)
	{
		mynewN = mynewN->next;
		i++;
	}
	return (mynewN ? mynewN : NULL);
}
