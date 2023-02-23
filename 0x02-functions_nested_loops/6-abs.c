#include "main.h"
#include <stdio.h>

/**
 * _abs -> retun absolute value of a number
 * @n: parameter
 * Return - absolute value of a number
 */
int _abs(int n)

{
	if (n < 0)
	n = -n;
	return (n);
}
