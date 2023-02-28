#include <unistd.h>
#include "main.h"
#include <stdio.h>

/**
 * rev_string - function that reverse a string
 * @s: String to reverse
 * Return : nothing.
 */

void rev_string(char *s)
{
	int i = 0;
	int aux = 0;
	char temp;

	while (*(s + i) != '\0')
		i += 1;
	i -= 1;

	while (aux < i)
	{
		temp = s[i];
		s[i] = s[aux];
		s[aux] = temp;
		aux++;
		i--;
	}
}
