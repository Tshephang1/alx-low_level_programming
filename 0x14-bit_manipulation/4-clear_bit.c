
#include "main.h"

/**
 * clear_bit - function that sets the value of a given bit to 0 at given index
 * @n: pointer to bit
 * @index: bit index to set
 * Return: 1 if it worked, or -1 on error 
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = (~(1UL << index) & *n);
	return (1);
}
