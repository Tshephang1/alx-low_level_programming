#include "main.h"

/**
 * flip_bits - function that returns the number of bits
 * to flip from one number to another
 * @n: first bit number
 * @m: second number to be counted.
 * Return: 0 or 1 for chances of another bit
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int current, myNum;
	int i, flips;
	myNum = n ^ m;
	i = 0;
	flips = 0;

	for (i = 63; i >= 0; i--)
	{
		current = myNum >> i;
		if (current & 1)
			flips++;
	}

	return (flips);
}
