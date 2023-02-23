#include "main.h"
#include <stdio.h>

/**
 * _isalpha - checks for alphabetical letter.
 * @c: a character that checks alphabets.
 * Return: return 1 and 0 depending on condition.
 */

int _isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}
