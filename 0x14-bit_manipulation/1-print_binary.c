#include "main.h"
#include <stdio.h>
/**
 * print_binary - function that print binary representation of number
 * @n: printed binary number
 *
 * Return: void
 */

void print_binary(unsigned long int n)
{
	int i, print = 0;
	unsigned long int binary;


	for (i = 63; i >= 0; i--)
	{
		binary = n >> i;

		if (binary & 1)
		{
			putchar('1');
			print++;
		}
		else if (print)
		{
			putchar('0');
		}
	}
	if (!print)
	{
		putchar('0');
	}
}
