#include "lists.h"

/**
 * add_dnodeint_end - function that adds a new node at the end
 * @head: linked list to be returned
 * @n: number of nodes
 * Return: a new node at the beginning
*/

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
dlistint_t *new_node;
dlistint_t *end_node;
int num = n;

new_node = malloc(sizeof(dlistint_t));
if (end_node == NULL)
return (NULL);

new_node->n = num;
new_node->next = NULL;

if (*head == NULL)
{
new_node->prev = NULL;
*head = new_node;
return (new_node);
}
end_node = *head;
while (end_node->next != NULL)
end_node = end_node->next;
end_node->next = new_node;
new_node->prev = end_node;

return (new_node);
}
