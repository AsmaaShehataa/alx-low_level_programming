#include "main.h"

/**
 * set_string - sets the value of a pointer to a char.
 * @s: type of string
 * @to: type of string
 * Return: Always (0) on success
*/

void set_string(char **s, char *to)
{
	*s = to;
	/**s = (char *)to */
}
