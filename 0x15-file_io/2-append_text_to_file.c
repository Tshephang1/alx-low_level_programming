#include "main.h"

/**
 * append_text_to_file - append text at the end of file
 * @filename: file to appended to
 * @text_content: text to be appended
 *
 * Return: 1 on success and  -1 on failure
 */

int append_text_to_file(const char *filename, char *text_content)
{
	char *counter_ptr = text_content;
	int nwrttn, k, len;
	len = 0;

	if (filename == NULL)
		return (-1);

	k = open(filename, O_RDWR | O_APPEND);
	if (k < 0)
		return (-1);

	if (text_content == NULL)
	{
		close(k);
		return (1);
	}

	while (*counter_ptr != '\0')
	{
		len++;
		counter_ptr++;
	}

	nwrttn = write(k, text_content, len);
	if (nwrttn < 0)
		return (-1);

	close(k);
	return (1);
}
