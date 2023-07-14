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
	unsigned int len1 = 0, len2 = 0, i, j;

	/* calculate the length of the strings s1 & s2 */

	while (s1[len1] != '\0')
		len1++;

	while (s2[len2] != '\0')
		len2++;

	if (n < len2)
		a = malloc((len1 + n + 1) * sizeof(char));
	else
		a = malloc((len2 + n + 1) * sizeof(char));

	if (a == NULL)
		return (NULL);

	/* concate s1 */
	for (i = 0; i < len1; i++)
		a[i] = s1[i];

	/* concate string 2 */
	for (j = 0; j < n; j++)
		a[i + j] = s2[j];

	a[i + j] = '\0';

	return (a);
}
