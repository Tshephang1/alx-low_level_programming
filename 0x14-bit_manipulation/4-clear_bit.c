#include "main.h"
#include <stdio.h>

/**
 * clear_bit - set the given bit to 0
 * @n: Pointer to value change
 * @index: Index of bit to be cleared
 *
 * Return: Success 1 and Failure -1
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
	{
		return (-1);
	}

	*n = (~(1UL << index) & *n);

	return (1);
}
