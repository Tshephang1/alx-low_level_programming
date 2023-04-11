#include "main.h"
#include <stdio.h>
#include <unistd.h>

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: Success 1, Error -1 and errno is set by default.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
