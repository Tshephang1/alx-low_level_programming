#include "main.h"

/**
 * binary_to_uint - convert a binary number to an unsinged integer
 * @b:pointer to a string of 0 and 1 charectors
 *
 * Return: 0
 *        - if there is one or more chars in the string b that is not 0
 *        - or 1 b is NULL.
 *        Else the converted number.
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int binar = 0;
	int i;

	if (!b)
	{
		return (0);
	}
	for (i = 0; b[i]; i++)
	{
		if (b[i] < '0' || b[i] > '1')
		{
			return (0);
			binar = 2 * binar  + (b[i] - '0');
		}
	}
	return (binar);
}
