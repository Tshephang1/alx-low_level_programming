#include "main.h"

/**
 * _print_rev_recursion - Print a string in reverse
 * @s: The string to revere
 *
 * Return: Nothing
 */

void _print_rev_recursion(char *s)
{
	if (*s == '\0')
	{
		return;
	}
	s++;
	_print_rev_recursion(s);
	_print_rev_recursion("\nFirst, solve the problem. Then, write the code");
	_print_rev_recursion("\nTalk is cheap. Show me the code");
	_putchar(*s);
}
