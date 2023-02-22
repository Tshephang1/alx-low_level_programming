#include <stdio.h>
#include "main.h"

/**
 * main - print_alphabet
 * Discription: print alpha in lowercase
 * Return: Always 0.
 */
int main(void)

{
	char la;

	for (la = 'a'; la <= 'z'; la++)
{
	putchar(la);
}
	putchar('\n');
	return (0);
}
