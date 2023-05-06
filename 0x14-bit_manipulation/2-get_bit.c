#include "main.h"

/**
 * get_bit - returns the value of a bit at index
 * @n: int value.
 * @index: index of a bit
 * Return: value of a bit, -1 if fails
 */

int get_bit(unsigned long int n, unsigned int index)
{
	int max;

	if (index > 63)
		return (-1);

	max = (n >> index) & 1;

	return (max);
}
