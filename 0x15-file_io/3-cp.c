#include "main.h"

/**
 * main - program
 * @ac: args count
 * @av: args vector
 * Return: 1 on success 0 on failure
*/

int main(int ac, char **av)
{
	int from_filedata = 0, to_filedata = 0;
	ssize_t bb;
	char buf[READ_BUF_SIZE];

	if (ac != 3)
		dprintf(STDERR_FILENO, USAGE), exit(97);

	from_filedata = open(av[1], O_RDONLY);
	if (from_filedata == -1)
		dprintf(STDERR_FILENO, ERR_NOREAD, av[1]), exit(98);

	to_filedata = open(av[2], O_WRONLY | O_CREAT | O_TRUNC, PERMISSIONS);
	if (to_filedata == -1)
	dprintf(STDERR_FILENO, ERR_NOWRITE, av[2]), exit(99);

	while ((bb = read(from_filedata, buf, READ_BUF_SIZE)) > 0)
		if (write(to_filedata, buf, bb) != bb)
			dprintf(STDERR_FILENO, ERR_NOWRITE, av[2]), exit(99);

	if (bb == -1)
		dprintf(STDERR_FILENO, ERR_NOREAD, av[1]);
		exit(98);

	from_filedata = close(from_filedata);
	to_filedata = close(to_filedata);

	if (from_filedata)
		dprintf(STDERR_FILENO, ERR_NOCLOSE, from_filedata), exit(100);
	if (to_filedata)
		dprintf(STDERR_FILENO, ERR_NOCLOSE, from_filedata), exit(100);
	return (0);
}
