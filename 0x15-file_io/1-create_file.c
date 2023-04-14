#include "main.h"

/**
 * create_file - create a file with permitions
 * @filename: neme of file
 * @text_content: content of file
 *
 * Return: 1 on success and -1 on failure
 */

int create_file(const char *filename, char *text_content)
{
	int new_file;
	int nwr;
	int len = 0;
	char *counter_ptr = text_content;

	if (filename == NULL)
	{
		return (-1);
	}

	if (text_content == NULL)
	{
		text_content = "";
	}

	while (*counter_ptr != '\0')
	{
		len++;
		counter_ptr++;
	}

	new_file = open(filename, O_RDWR | O_CREAT | O_TRUNC, 0600);
	if (new_file == -1)
	{
		return (-1);
	}
	nwr = write(new_file, text_content, len);
	if (nwr == -1)
	{
		close(new_file);
		return (-1);
	}
	close(new_file);
	return (1);
}
