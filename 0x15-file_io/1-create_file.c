#include "main.h"

/**
 * create_file - function that create a new file
 * @filename: new created file name
 * @text_content: contents of the new created file
 *
 * Return: 1 on success, -1 on failure
 */

int create_file(const char *filename, char *text_content)
{
	int nwrttn, k, len;
	char *counter_ptr = text_content;
	len = 0;

	if (filename == NULL)
		return (-1);

	if (text_content == NULL)
		text_content = "";


	while (*counter_ptr != '\0')
	{
		len++;
		counter_ptr++;
	}

	k = open(filename, O_RDWR | O_CREAT | O_TRUNC, 0600);
	if (k < 0)
		return (-1);

	nwrttn = write(k, text_content, len);
	if (nwrttn < 0)
	{
		close(k);
		return (-1);
	}

	close(k);
	return (1);
}
