#include "main.h"

/**
 * set_bit - function thatset a value of bit to 1 at given index
 * @n: pointer to the bit of change
 * @index: index to set value to 1
 *
 * Return: 1 if it worked, -1 on error.
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = ((1UL << index) | *n);
	return (1);
}
