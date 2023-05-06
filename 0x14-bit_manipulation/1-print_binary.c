#include "main.h"

/**
 * print_binary - prints binary representation of a number
 * @n: the number to print
 *
 * Return: void
 */

void print_binary(unsigned long int n)
{

	unsigned long int _rp;
	int _prnt, i;
	_prnt = 0;
	i = 0;

	for (i = 63; i >= 0; i--)
	{
		_rp = n >> i;

		if (_rp & 1)
		{
			_putchar('1');
			_prnt++;
		}
		else if (_prnt)
			_putchar('0');
	}
	if (!_prnt)
		_putchar('0');

}
