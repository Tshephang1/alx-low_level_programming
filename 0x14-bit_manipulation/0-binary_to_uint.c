#include "main.h"

/**
 * binary_to_uint - fuction that converting binary to unsigned int
 * @b: pointer to a string of 0 & 1 chars
 *
 * Return: converted num, 0 incase b is NULL or chars not 0 & 1
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int output, _start;
	int i = 0;
	output = 0;
       _start = 1;

	if (b == NULL)
		return (0);
	while (b[i])
		i++;
	while (i)
	{
		if (b[i - 1] != '0' && b[i - 1] != '1')
			return (0);
		output += (b[i - 1] - '0') * _start;
		_start <<= 1;
		i--;
	}

	return (output);
}
