#include "lists.h"

/**
 * free_listint_safe - free lists with a loop
 * @h: pointer of the linked list
 * Return: size of the list was freed
*/

size_t free_listint_safe(listint_t **h)
{
	size_t length = 0;
	listint_t *tmp;
	int difference;

	if (!h || !*h)
		return (0);

	while (*h)
	{
		difference = *h - (*h)->next;
		if (difference > 0)
		{
			tmp = (*h)->next;
			free(*h);
			*h = tmp;
			length++;
		}
		else
		{
			free(*h);
			*h = NULL;
			length++;
			break;
		}
	}
	*h = NULL;
	return (length);
}
