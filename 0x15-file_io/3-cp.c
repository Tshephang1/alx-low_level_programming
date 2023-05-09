#include "main.h"

int safe_closes(int);
/**
 * main - copy the file
 * @argc: arguerment count
 * @argv: arguemrnt vector
 *
 * Return: 1 on success, exit on failure
 */

int main(int argc, char *argv[])
{
	int br, error = 0;
	int fk, tk = -1;
	int eof = 1;
	char buffer[1024];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	fk = open(argv[1], O_RDONLY);
	if (fk < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}

	tk = open(argv[2], O_WRONLY | O_TRUNC | O_CREAT, 0664);
	if (tk < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		safe_closes(fk);
		exit(98);
	}

	while (eof)
	{
		eof = read(fk, buffer, 1024);
		if (eof < 0)
		{
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
			safe_closes(fk);
			safe_closes(tk);
			exit(98);
		}
		else if (eof == 0)
			break;
		br += eof;
		error = write(tk, buffer, eof);
		if (error < 0)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			safe_closes(fk);
			safe_closes(tk);
			exit(99);
		}
	}
	error = safe_closes(tk);
	if (error < 0)
	{
		safe_closes(fk);
		exit(100);
	}
	error = safe_closes(fk);
	if (error < 0)
		exit(100);
	return (0);
}

/**
 * safe_closes - close a fil then/  print error message
 * @Rescription: rescription closed file
 * Return: 1 on success and -1 on failure
 */

int safe_closes(int Rescription)
{
	int error;

	error = close(Rescription);
	if (error < 0)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", Rescription);
	return (error);
}
