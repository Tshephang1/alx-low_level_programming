#include "main.h"
#include <stdio.h>

/**
 * get_bit - it returns the bit in a decimal number
 * @n: the number to get
 * @index: index of bit
 *
 *
 * Returns: bit value
 */

int get_bit(unsigned long int n, unsigned int index)
{
	int value;

	if (index > 63)
	{
		return (-1);
	}

	value = (n >> index) & 1;

		return (value); 
}
