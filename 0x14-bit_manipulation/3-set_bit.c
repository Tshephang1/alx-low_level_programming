#include "main.h"
#include <stdio.h>

/**
 * set_bit - set a bit for a given index to value of 1
 * @n: pointer to number to change value
 * @index: index of bit to set value 1
 *
 * Return: Success 1 and Failure -1
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
	{
		return (-1);
	}

		*n = ((1UL << index) | *n);
	return (1);
}
