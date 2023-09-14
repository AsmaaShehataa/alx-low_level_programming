#include "lists.h"

/**
* delete_dnodeint_at_index - function function that deletes the node at index
* @head: double poitner to first node in lnkd list
* @index: index to where to delete
* Return: 1 Success, -1 Fail
*/
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
dlistint_t *temp1, *temp2;
unsigned int idx = 0;

if (*head == NULL)
{
return (-1);
}
if (index == 0)
{
temp1 = (*head)->next;
temp1->prev = NULL;
return (1);
}
temp1 = *head;
while (temp1 != NULL)
{
if (idx == index)
{
temp2 = temp1->next;
temp2->prev = temp1->prev->prev;
temp1 = temp2->prev;
return (1);
}
temp1 = temp1->next;
idx++;
}
if (idx < index)
return (-1);
if (temp1->next == NULL)
return (1);

return (-1);
}
