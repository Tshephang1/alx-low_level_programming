#include "main.h"
#include <stdio.h>

/**
 * get_endianness - checking a machine
 *
 * Return: Big 0 and Little 1
 */

int get_endianness(void)
{
	unsigned int a = 1;
	char *c = (char *) &a;

		return (*c);
}
