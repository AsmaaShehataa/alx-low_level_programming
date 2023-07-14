#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - string concatenation
 * @s1: input string
 * @s2: output string
 * @n: number of concatenations
 * Return: output string
*/

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *a;
	unsigned int len1 = 0, len2 = 0, i = 0, j = 0;

	/* calculate the length of the strings s1 & s2 */

	while (s1 && s1[len1])
		len1++;

	while (s2 && s2[len2])
		len2++;

	if (n < len2)
		a = malloc((len1 + n + 1) * sizeof(char));
	else
		a = malloc((len2 + n + 1) * sizeof(char));

	if (!a)
		return (NULL);

	/* concate s1 */
	while (i < len1)
	{
		a[i] = s1[i];
		i++;
	}

	/* concate string 2 */
	while (n < len2 && i < (len1 + n))
		a[i++] = s2[j++];

	while (n >= len2 && i < (len1 + len2))
		a[i++] = s2[j++];

	a[i] = '\0';

	return (a);
}
