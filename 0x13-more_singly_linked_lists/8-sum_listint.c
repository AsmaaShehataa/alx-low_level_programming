#include "lists.h"

/**
 * sum_listint - function that returns the sum of all the data
 * @head: pointer of the linked list
 * Return: sum of the data
*/

int sum_listint(listint_t *head)
{
	listint_t *tempo = head;
	int sum = 0;

	while (tempo)
	{
		sum += tempo->n;
		tempo = tempo->next;
	}
	return (sum);
}
