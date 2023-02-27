#include "main.h"
#include <stdio.h>

/**
 * swap_int - swap variable value
 * @a: pointera
 * @b: pointerb
 * Return: void
 */

void swap_int(int *a, int *b)
{
	*a += *b;
	*b = *a - *b;
	*a = *a - *b;
}
