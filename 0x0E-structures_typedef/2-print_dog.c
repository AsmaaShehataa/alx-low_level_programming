#include "dog.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * print_dog - prints the dog struct
 * @d: the dog struct
*/

void print_dog(struct dog *d)
{
	if (d == NULL)
		return;

	if (d->name == NULL)
		d->name = "(nil)";

	if (d->owner == NULL)
		d->owner = "(nil)";

	printf(" Name: %s\n Age:%2f\n Owner:%2s\n", d->name, d->age, d->owner);
}
