#include <stdio.h>
#include "main.h"

/**
 * _islower(int c) - lowercase
 * @c: a character argument
 * Description: check lowercase charecters
 * Return: returns 1 and 0 depending on condition
 */

int _islower(int c);
{
	return (c >= 'a' && c <= 'z');
}
