#include "lists.h"

/**
 * find_listint_loop -  finds the loop in a linked list.
 * @head: pointer of the linked list
 * Return: The address of the node where the loop starts
*/

listint_t *find_listint_loop(listint_t *head)
{
	listint_t *in = head;
	listint_t *out = head;

	if (!head)
	return (NULL);

	while (in && out && out->next)
	{
		out = out->next->next;
		in = in->next;

		if (in == out)
		{
			in = head;
			while (in != out)
			{
				in = in->next;
				out = out->next;
			}
			return (out);
		}

	}
	return (NULL);
}
