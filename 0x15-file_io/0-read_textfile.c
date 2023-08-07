#include "main.h"

/**
 * read_textfile - reads a text file and prints it to standard output
 * @filename: the file will be created
 * @letters: the content of the file
 * Return: the actual number of letters it could read and print
*/

ssize_t read_textfile(const char *filename, size_t letters)
{
	char *mybuf;
	ssize_t file_D;
	ssize_t myW;
	ssize_t mytito = 0;

	file_D = open(filename, O_RDONLY);
	if (file_D == -1)
		return (0);

	mybuf = malloc(sizeof(char) * letters);

	if (!filename || !letters)
		return (0);

	mytito = read(file_D, mybuf, letters);
	myW = write(STDOUT_FILENO, mybuf, mytito);

	free(mybuf);
	close(file_D);
	return (myW);
}
