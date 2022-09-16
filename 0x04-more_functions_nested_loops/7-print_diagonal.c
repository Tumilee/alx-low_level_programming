#include "main.h"

/**
 * print_diagonal - Print a diagonal line if the number is positive
 * @n: The character to be counted
 *
 * Return: To the value of c
 */
void print_diagonal(int n)
{
	int i;
	int j;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		_putchar('\\');
		_putchar('\n');
		for (i = 0; i < (n - 1); i++)
		{
			for (j = i; j >= 0; j--)
			{
				_putchar(' ');
			}
			_putchar('\\');
			_putchar('\n');
		}
	}
}
