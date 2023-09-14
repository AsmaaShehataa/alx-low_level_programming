#include "lists.h"

/**
 * insert_dnodeint_at_index- function that that inserts a new node
 * @h: pointer to first node of dbl lnkd list
 * @idx: the index of the node, starting from 0
 * @n: counter
 * Return: returns the new positioned node of a dlistint_t linked list.
*/

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
dlistint_t *new_node, *temp = *h;
unsigned int in_dex = 0;

new_node = malloc(sizeof(dlistint_t));
if (new_node == NULL)
return (NULL);

new_node->n = n;
if (*h == NULL)
{
new_node->next = NULL;
new_node->prev = NULL;
*h = new_node;
return (new_node);
}
if (idx == 0)
return (add_dnodeint(h, n));
while (in_dex < idx - 1)
{
if (temp == NULL)
return (NULL);
temp = temp->next;
in_dex++;
}
if (temp->next == NULL)
{
temp->next = new_node;
new_node->prev = temp;
new_node->next = NULL;
return (new_node);
}
new_node->next = temp->next;
temp->next = new_node;
new_node->prev = temp;
new_node->next->prev = new_node;
return (new_node);
}
