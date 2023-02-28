#include "main.h"
#include <stdio.h>

/**
 * _puts - prints a string, folled by a new line
 * @str: pointer to the to print
 * Return: void
 */

void _puts(char *str)
{
	int i = 0;

	while (str[i])
	{
		putchar(str[i]);
		i++;
	}
	putchar('\n');
}
