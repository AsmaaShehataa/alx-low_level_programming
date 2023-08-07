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
 * append_text_to_file - a function that appends text at the end of a file.
 * @filename: the file will be created
 * @text_content: the conent of the file
 * Return: : 1 on success and -1 on failure
*/

int append_text_to_file(const char *filename, char *text_content)
{
	int file_D;
	int len = str_len(text_content);
	ssize_t NoofbTS = 0;

	if (!filename)
		return (-1);

	file_D = open(filename, O_WRONLY | O_CREAT | O_APPEND);
	if (file_D == -1)
		return (-1);

	if (len)
		NoofbTS = write(file_D, text_content, len);
	close(file_D);

	return (NoofbTS == len ? 1 : -1);
}
