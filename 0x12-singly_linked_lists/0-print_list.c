#include "lists.h"

/**
 * str_len - function measures the string length
 * @c: input variable
 * Return: string length
*/

int str_len(char *c)
{
	int i = 0;

	if (!c)
		return (0);
	while (*c++)
	i++;
	return (i);
}

/**
 * print_list - prints all the elements of a list_t list
 * @h: input variable
 * Return: elements of the linked list
*/
size_t print_list(const list_t *h)
{
	size_t i = 0;

	while (h)
	{
		printf("[%d] %s\n", str_len(h->str), h->str ? h->str : "(nil)");
		h = h->next;
		++i;
	}
	return (i);
}
