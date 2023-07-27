#include "lists.h"

/**
 * list_len - returns the number of elements in a linked list
 * @h: pointer of the 1st node
 * Return: size of the list
*/

size_t list_len(const list_t *h)
{
	size_t len = 0;

	while (h)
	{
		h = h->next;
		len++;
	}
	return (len);
}
