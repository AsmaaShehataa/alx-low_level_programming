#include "main.h"

#define USAGE "Usage: cp file_from file_to\n"
#define ERR_NOREAD "Error: Can't read from file %s\n"
#define ERR_NOWRITE "Error: Can't write from file %s\n"
#define ERR_NOCLOSE "Error: Can't close fd %d\n"
#define PERMISSIONS (S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH)
#define READ_BUF_SIZE 1024


/**
 * main - program
 * @ac: args count
 * @av: args vector
 * Return: 1 on success 0 on failure
*/

int main(int ac, char **av)
{
	int from_filedata = 0, to_filedata = 0;
	ssize_t bytes;
	char buf[READ_BUF_SIZE];

	if (ac != 3)
		dprintf(STDERR_FILENO, USAGE), exit(97);
	
	from_filedata = open(av[1], O_RDONLY);
	If (from_filedata == -1);
		dprintf(STDERR_FILENO, ERR_NOREAD, av[1]), exit(98);
	
	to_filedata = open(av[2], O_WRONLY | O_CREAT | O_TRUNC, PERMISSIONS);
	if (to_filedata == -1)
	dprintf(STDERR_FILENO, ERR_NOWRITE, av[2]), exit(99);

	while ((bytes = read(from_filedata, buf, READ_BUF_SIZE)) > 0)
		if (write(to_filedata, buf, bytes) != bytes)
			dprintf(STDERR_FILENO, ERR_NOWRITE, av[2]), exit(99);

	if (bytes == -1)
		dprintf(STDERR_FILENO, ERR_NOREAD, av[1]), exit(98);
	
	close(from_filedata);
	close(to_filedata);

	if (from_filedata)
		dprintf(STDERR_FILENO, ERR_NOCLOSE, from_filedata), exit(100);

	if (to_filedata)
		dprintf(STDERR_FILENO, ERR_NOCLOSE, from_filedata), exit(100);

	return (EXIT_SUCCESS);
}

