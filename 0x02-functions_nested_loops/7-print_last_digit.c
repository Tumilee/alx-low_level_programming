#include "main.h"

/**
 * print_last_digit - prints last digit
 * @n: int type num
 * Return: Value of last digit
 */
int print_last_digit(int n)
{
	int nm;

	if (n < 0)
	{
		nm = -1 * (n % 10);
		_putchar(nm + '0');
		return (nm);
	}
	else
	{
		nm = n % 10;
		_putchar(nm = '0');
		return (nm);
	}
}
