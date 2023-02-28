#include "main.h"
#include <stdio.h>

/**
 * print_array - function that prints elements of an array
 * for of integer
 * @a: pointer to first int
 * @b: pointer to second int
 * Return: nothing
 */

void print_array(int *a, int n)
{
	int i = 0;

	for (i = 0; i < n; i++)
	{
		printf("%d" , a[i]);

		if (i < n - 1)
			printf(", ");
	}
	printf("\n");
}
