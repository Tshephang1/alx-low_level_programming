#include "main.h"
#include <stdio.h>

/**
 * _islower(int c) -> lowercase character check
 * @c: a character argument
 * Return: returns 1 and 0 depending on condition
 */

int _islower(int c)
{
	return (c >= 'a' && c <= 'z');
}
