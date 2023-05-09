#include "main.h"

/**
 * read_textfile - read a text file and print it to stdout
 * @filename: pointer to file to be read
 * @letters: number of letters to be read & printed
 *
 * Return: actual number of letters read and printed
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t nread, nwrttn;
	char *buffer;
	int k;

	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
		return (0);

	if (filename == NULL)
		return (0);

	k = open(filename, O_RDONLY);
	if (k == -1)
	{
		free(buffer);
		return (0);
	}

	nread = read(k, buffer, letters);
	if (nread == -1)
	{
		free(buffer);
		close(k);
		return (0);
	}

	nwrttn = write(STDOUT_FILENO, buffer, letters);
	if ((nwrttn == -1) | (nwrttn != nread))
	{
		free(buffer);
		close(k);
		return (0);
	}

	free(buffer);
	close(k);
	return (nwrttn);
}
