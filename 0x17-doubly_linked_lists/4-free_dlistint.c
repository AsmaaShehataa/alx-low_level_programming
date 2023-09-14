#include "lists.h"

/**
 * free_dlistint - function frees the memory
 * @head: pointer to first node of dbl lnkd list
 * Return: 0 (success)
*/

void free_dlistint(dlistint_t *head)
{
dlistint_t *tmp = head;

if (head == NULL)
return;
while (head->next != NULL)
{
tmp = head;
head = head->next;
free(tmp);
}
free(head);
}
