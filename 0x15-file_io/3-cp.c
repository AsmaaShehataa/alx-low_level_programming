#include "main.h"

/**
 * create_buffer - Allocates 1024 bytes for a buffer.
 * @myfile: file's storing chars
 * Return: A buffer pointer
 */
char *create_buffer(char *myfile)
{
	char *MYbuffer;

	MYbuffer = malloc(sizeof(char) * 1024);

	if (MYbuffer == NULL)
	{
		dprintf(STDERR_FILENO,
			"Error: Sorry Can't write to %s\n", myfile);
		exit(99);
	}

	return (MYbuffer);
}

/**
 * close_file - Closes file descriptors.
 * @file_d: The file descriptor
 */
void close_file(int file_d)
{
	int cM;

	cM = close(file_d);

	if (cM == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_d);
		exit(100);
	}
}

/**
 * main - Copies the contents of a file to another file.
 * @ac: The number of arguments supplied to the program.
 * @argv: An array of pointers to the arguments.
 * Return: 0 on success.
*/

int main(int ac, char **argv)
{
	int from, to, rr, ww;
	char *MYbuffer;

	if (ac != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	MYbuffer = create_buffer(argv[2]);
	from = open(argv[1], O_RDONLY);
	rr = read(from, MYbuffer, 1024);
	to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	do {
		if (from == -1 || rr == -1)
		{
			dprintf(STDERR_FILENO,
				"Error: Can't read from file %s\n", argv[1]);
			free(MYbuffer);
			exit(98);
		}
		ww = write(to, MYbuffer, rr);
		if (to == -1 || ww == -1)
		{
			dprintf(STDERR_FILENO,
				"Error: Can't write to %s\n", argv[2]);
			free(MYbuffer);
			exit(99);
		}
		rr = read(from, MYbuffer, 1024);
		to = open(argv[2], O_WRONLY | O_APPEND);
	} while (rr > 0);
	free(MYbuffer);
	close_file(from);
	close_file(to);
	return (0);
}
