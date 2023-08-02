#include "lists.h"

size_t loopie_listint_lenth(const listint_t *head);
size_t print_listint_safe(const listint_t *head);

/**
 * loopie_listint_lenth - get the number of unique nodes
 * @head: A pointer to the head of the listint_t to check.
 * Return: (0) if no loop in list
*/

size_t loopie_listint_lenth(const listint_t *head)
{
	const listint_t *toto, *hary;
	size_t node = 1;

	if (head == NULL || head->next == NULL)
		return (0);

	toto = head->next;
	hary = (head->next)->next;

	while (hary)
	{
		if (toto == hary)
		{
		toto = head;
		while (toto != hary)
		{
			node++;
			toto = toto->next;
			hary = hary->next;
		}
		toto = toto->next;

	while (toto != hary)
	{
		node++;
		toto = toto->next;
	}
	return (node);

	}
	toto = toto->next;
	hary = (hary->next)->next;
	}

return (0);
}

/**
 * print_listint_safe -  prints a listint_t linked list
 * @head: pointer of the linked list
 * Return:  the number of nodes in the list
*/

size_t print_listint_safe(const listint_t *head)
{
	size_t node, index = 0;

	node = loopie_listint_lenth(head);

	if (node == 0)
	{
		for (; head != NULL; node++)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;

		}
	}
	else
	{
		for (index = 0; index < node; index++)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
		}
		printf("-> [%p] %d\n", (void *)head, head->n);
	}
	return (node);
}
