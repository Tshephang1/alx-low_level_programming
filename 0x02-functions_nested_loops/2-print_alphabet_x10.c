#include "main.h"
#include <stdio.h>

/**
 * print_alphabet_x10 - print all alphabet in lowercase
 */
void print_alphabet_x10(void)
{
	char letter;
	int x;

	for (x = 0; x < 10; x++)
	{
		for (letter = 'a'; letter <= 'z'; letter++)
		{
			putchar(letter);
		}
		putchar('\n');
	}
}
