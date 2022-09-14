#include "main.h"
#include <stdio.h>
/**
 * _abs - print the absolute value of integer
 * @n: int type num
 * Return: value of @n
 */
int _abs(int n)
{
	if (n > 0)
	{
		return (n * -1);
	}
	else
	{
		putchar('\n');
		return (n);
	}
}
