#include "main.h"

/**
 * read_textfile - read and print text file
 * @filename: name of variable for pointer
 * @letters:size of the letters
 *
 * Return: the actual number of letters it could read and print else 0
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t nrd, nwr;
	char *buffer;

	buffer = malloc(sizeof(char) * (letters));
	if (buffer == NULL)
	{
		return (0);
	}

	if (filename == NULL)
	{
		return (0);
	}

	fd = open(filename, O_RDONLY);
	if (fd == -1)
	{
		return (0);
	}

	nrd = read(fd, buffer, letters);
	if (nrd == -1)
	{
		return (0);
	}

	nwr = write(STDOUT_FILENO, buffer, nrd);
	if ((nwr == -1) | (nwr != nrd))
	{
		return (0);
	}
	close(fd);
	free(buffer);
	return (nwr);
}
