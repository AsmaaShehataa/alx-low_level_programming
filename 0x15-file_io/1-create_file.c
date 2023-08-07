#include "main.h"

/**
 * str_len - function measures stringlen
 * @s: str len to check
 * Return: str length
*/

int str_len(char *s)
{
	int i = 0;

	if (!s)
		return (0);

	while (*s++)
		i++;
	return (i);
}

/**
 * create_file - function that create a file
 * @filename: the file will be created
 * @text_content: the content of the file
 * Return: 1 on success, -1 on failure (file can not be created,
 * file can not be written,
*/


int create_file(const char *filename, char *text_content)
{
	int file_D;
	int len = str_len(text_content);
	ssize_t NoofbTS = 0;

	if (!filename)
		return (-1);

	file_D = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0600);
	if (file_D == -1)
		return (-1);

	if (len)
		NoofbTS = write(file_D, text_content, len);
	close(file_D);

	return (NoofbTS == len ? 1 : -1);
}
