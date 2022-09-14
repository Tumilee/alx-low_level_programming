#include "main.h"
#include <stdio.h>
/**
 * _abs - print the absolute value of integer
 * @n: int type num
 * Return: value of @n
 */
int _abs(int n)
{
	if (n > 0 || n == 0)
	{
		return (n);
	}
	else
	{
		return (n * -1);
	}
}
