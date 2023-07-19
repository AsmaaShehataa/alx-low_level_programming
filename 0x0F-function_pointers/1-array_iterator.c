#include <stdlib.h>
#include "function_pointers.h"

/**
 * array_iterator -  executes a function given each element of arr
 * @array: the array to iterate
 * @size: size of the array
 * @action: is a pointer to the function you need to use
*/

void array_iterator(int *array, size_t size, void (*action)(int))
{
	int *endofarr = array + size - 1;

	if (array && size && action)
		while (array <= endofarr)
			action(*array++);
}
