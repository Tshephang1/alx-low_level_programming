#include "main.h"

/**
 * string_toupper - Change all lowercase letters of a string to uppercase.
 * @str: The string to be changed.
 *
 * Return: A pointer to the changed string.
 */

char *string_toupper(char *str)
{
	int index = 0;
	{
		if (str[index] >= 'a' && str[index] <= 'z')
			str[index] -= 32;
		index++;
	}

	return (str);
}
