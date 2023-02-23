#include "main.h"
#include <stdio.h>
/**
 * print_last_digit -> print the last degit
 * @n: the passed args
 * Return: the lat digit
 */
int print_last_digit(int n)
{
	int x;

	if (n < 0)
	n = -n;
	x = n % 10;
	_putchar (x + '0');
	return (x);
}
