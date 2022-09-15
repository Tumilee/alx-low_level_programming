#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Testsfunction that prints if integer is positive or negative
 * Return: 0
 */
void positive_or_negative(int i)
{
	int n;

	srand(time(0));
	n = i;
	if (n > 0)
		printf("%d is positive\n", n);
	if (n < 0)
	{
		printf("%d is negative\n", n);
	}
	return (0);
}
/**
 * main - debugging
 * return: 0
 */

{
	int i;

	i = 0;
	positive_or_negative(i);

	return (0);
}
