#include "main.h"

/**
 * main - print numbers 1 - 100 with new line
 * multiples of 3 print Fizz
 * multiples of 5 print Buzz
 * multiples of both print FizzBuzz
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;

		for (i = 1; i <= 100; i++)
{
		if (i % 3 == 0 && i % 5 != 0)
{
			printf(" Fizz");
		}
		else if (i % 5 == 0 && i % 3 != 0)
{
			printf(" Buzz");
}
		else if (i % 3 == 0 && i % 5 == 0)
}
			printf(" FizzBuzz");
}
		else if ( i == 1)
{
			printf("%d", i);
}
		else
{
			printf(" %d", i);
}
			printf("\n");

		return (0);
}
