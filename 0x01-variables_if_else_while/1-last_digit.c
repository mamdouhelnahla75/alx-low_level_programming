#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 *
 */

int main(void)
{
	int n, d;

	d = n % 10;
	srand(time(0));
	n = rand() - RAND_MAX / 2;

	if (d > 5)
		printf("Last digit of %i is %d and is greater than 5\n", n, d);
	else if (d == 0)
		printf("Last digit of %i is %d and is 0\n", n, d);
	else if (d < 6 && d != 0)
		printf("Last digit of %i is %d and is less than 6 and not 0\n", n, d);

	return (0);
}
