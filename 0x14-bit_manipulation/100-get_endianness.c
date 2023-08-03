/**
 * get_endianness - checks the endianness.
 * Return: 0 if big endian, 1 if little endian
*/

int get_endianness(void)
{
	unsigned int mynum = 1;
	char *ci = (char *) &mynum;

	return (*ci);
}
