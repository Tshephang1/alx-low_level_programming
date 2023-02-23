#include "main.h"
#include <stdio.h>

/**
 * print_sign -> print sign based on condition
 * @n: argurment passed
 * Return: retun 1, 0, -1
 */
int print_sign(int n)
{
	if (n > 0)
	{
		putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		putchar('0');
		return (0);
	}
	else
	{
		putchar('-');
		return (-1);
	}
}
