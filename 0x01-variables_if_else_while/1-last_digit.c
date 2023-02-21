#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - '1-last_digit.c'
 * Description: Program print a random number each time executed
 * Return: 0 (Success)
 */
int main(void)
{
	int n;
	int ld;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	ld = n % 10;
	if (ld > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n", n, ld);
	}
	else if (ld == 0)
	{
		printf("Last digit of %d is %d and is zero\n", n, ld);
	}
	else
	{
		printf("Last digit of %d is %d and less than 6 not 0\n", n, ld);
	}
	return (0);
}
