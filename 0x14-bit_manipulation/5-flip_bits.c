#include "main.h"
#include <stdio.h>

/**
 * flip_bits - counts numbers of bit
 * @n: first value
 * @m: second value
 *
 * Return: value of bit
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int a, count = 0;
	unsigned long int binary;
	unsigned long int binar = n ^ m;

	for (a = 63; a >= 0; a--)
	{
		binary = binar >> a;

		if (binary & 1)
			count++;
	}
	return (count);
}
