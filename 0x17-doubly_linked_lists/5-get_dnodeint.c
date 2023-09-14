#include "lists.h"

/**
 * get_dnodeint_at_index - function that returns the nth node
 * @head: pointer to first node of dbl lnkd list
 * @index: the index of the node, starting from 0
 * Return: eturns the nth node of a dlistint_t linked list.
*/
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
dlistint_t *temp;
unsigned int in_dex = 0;

temp = head;
while (temp != NULL)
{
if (in_dex == index)
return (temp);
in_dex++;
temp = temp->next;
}
if (in_dex == 0 || in_dex < index)
return (temp);

temp = head;
return (temp->next);
}
