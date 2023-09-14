#include "lists.h"

/**
 * dlistint_len - function which return a linked list
 * @h: linked list to be returned
 * Return: a liked list of elements
*/

size_t dlistint_len(const dlistint_t *h)
{
int nums = 0;
while (h != NULL)
{
h = h->next;
nums++;
}
return (nums);
}
