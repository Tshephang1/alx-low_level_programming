#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - print_alphabet.c
 * Discription: A program that prints the alphabet in lowercase
 * Return: 0 (Success)
 */
int main(void)
{
	int n = 97;

	while (n <= 122)
	{
	putchar(n);
	n++;
	}
	putchar('\n');
	return (0);
}
