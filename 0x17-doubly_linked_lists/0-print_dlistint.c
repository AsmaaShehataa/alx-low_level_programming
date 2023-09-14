#include "lists.h"

/**
 * print_dlistint - function that prints all the elements
 * @h: string to be printed
 * Return: number of nodes
*/

size_t print_dlistint(const dlistint_t *h)
{
int nums = 0;

while (h != NULL)
{
printf("%d\n", h->n);
h = h->next;
nums++;
}
return (nums);
}
