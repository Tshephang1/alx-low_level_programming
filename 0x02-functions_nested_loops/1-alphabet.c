#include "main.h"

/**
 * main - Alphabet
 * Discription: print alpha in lowercase
 * Return: Always 0.
 */
void print_alphabet(void)
{
	char la;

	for (la = 'a'; la <= 'z'; la++)
	{
	putchar(la);
	}
	putchar('\n');
	return (0);
}
