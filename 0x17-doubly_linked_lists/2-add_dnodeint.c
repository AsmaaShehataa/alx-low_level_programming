#include "lists.h"

/**
 * add_dnodeint - function that adds a new node
 * @head: linked list to be returned
 * @n: number of nodes
 * Return: a new node at the beginning
*/

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
dlistint_t *new_node;
int num = n;

new_node = malloc(sizeof(dlistint_t));

if (new_node == NULL)
return (NULL);

new_node->n = num;
new_node->next = *head;
new_node->prev = NULL;

if (*head != NULL)
(*head)->prev = new_node;

*head = new_node;
return (new_node);
}
