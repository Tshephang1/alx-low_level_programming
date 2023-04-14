#include "main.h"

/**
 * append_text_to_file - append text of a file
 * @filename: a file to be append
 * @text_content: a text to be append
 *
 * Return: 1 on Success and -1 on Failure
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int new_file;
	int nwritten;
	int len = 0;
	char *counter_ptr = text_content;

	if (filename == NULL)
		return (-1);

	new_file = open(filename, O_WRONLY | O_APPEND);
	if (new_file == -1)
	{
		return (-1);
	}

	if (text_content == NULL)
	{
		close(new_file);
		return (1);
	}

	while (*counter_ptr != '\0')
	{
		len++;
		counter_ptr++;
	}

	nwritten = write(new_file, text_content, len);
	if (nwritten == -1)
	{
		close(new_file);
		return (-1);
	}

	close(new_file);
	return (1);
}
