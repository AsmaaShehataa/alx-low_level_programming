#include "lists.h"

/**
 * sum_dlistint - function that returns the sum of all node
 * @head: pointer to first node of dbl lnkd list
 * Return: returns the sum node of a dlistint_t linked list.
*/

int sum_dlistint(dlistint_t *head)
{
dlistint_t *temp;
int sum = 0;

if (head == NULL)
return (0);

temp = head;
while (temp != NULL)
{
sum += temp->n;
temp = temp->next;
}
return (sum);
}
