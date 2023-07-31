#include "lists.h"

/**
 * listint_len - eturns the number of elements in a linked listint_t list.
 * @h: input variable
 * Return: return the number of elements
*/

size_t listint_len(const listint_t *h)
{
	size_t n =0; 

	while(h)
	{
		n++;
		h = h->next;
	}
	return (n);
}
