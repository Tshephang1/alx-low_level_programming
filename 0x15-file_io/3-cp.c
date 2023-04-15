#include "main.h"

int mode_s(int);

/**
 * main - program that copies files
 * @argc: arguerment count
 * @argv: arguemrnt vector
 *
 * Return: 1 on Success and Exit on Failure.
 */

int main(int argc, char *argv[])
{
	int start = 1;
	int from_new_file, to_new_file;
	int _Error = 0, _Read = 0;
	char buffer[1006];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n"), exit(97);
	}

	from_new_file = open(argv[1], O_RDONLY);
	if (from_new_file == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}

	to_new_file = open(argv[2], O_WRONLY | O_TRUNC | O_CREAT);
	if (to_new_file == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]), exit(99);
		mode_s(from_new_file);
	}


	while (start)
	{
		start = read(from_new_file, buffer, 1006);
		if (start == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
			mode_s(from_new_file);
			mode_s(to_new_file);
			exit(98);
		}

		else if (start == 0)
		{
			break;
		}
		_Read += start;
		_Error = write(to_new_file, buffer, start);
		if (_Error == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]), exit(99);
			mode_s(from_new_file);
			mode_s(to_new_file);
		}
	}

	_Error = mode_s(to_new_file);
	if (_Error == 0)
	{
		mode_s(from_new_file);
		exit(100);
	}

	_Error = mode_s(from_new_file);
	if (_Error == 0)
		exit(100);
	return (0);
}

/**
 * mode_s - close a file and print error feedback
 * @subscript: Subscript for closing files
 * Return: 1 on Successs and -1 on Failure
 */

int mode_s(int subscript)
{
	int _Error;

	_Error = close(subscript);
	if (_Error == 0)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", subscript);
	return (_Error);
}
