/**
 * _strlen - returns the length of a string
 *@s: the string to measure the length
 */

int _strlen(char *s)
{

	int si = 0;

	while (*s != '\0')
	{
		si++;
		s++;
	}
	return(si);
}
