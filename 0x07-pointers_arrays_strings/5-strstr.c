#include "main.h"

/**
 * _strstr - Searches a string for any of a set of bytes.
 * @haystack: Input string
 * @needle: Input string
 *
 * Return: Always (0) on success
 */

char *_strstr(char *haystack, char *needle)
{

		for (; *haystack != '\0'; haystack++)
		{
			char *l = haystack;
			char *r = needle;

			while (*l == *r && *r != '\0')
			{
				l++;
				r++;
			}
		if (*r == '\0')
		return (haystack);
		}
		return (0);
}
