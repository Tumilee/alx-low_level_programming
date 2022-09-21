#include <stdio.h>
#include "main.h"

/**
 * puts_half - prints a string
 * @str: string to print
 *
 * Return: nothing
 */

void puts_half(char *str)
{
	int i;

	for (i = 0; str[i])
		i++;

	if ((i % 2) == 0)
	{
		i = i / 2;
	}
	else
	{
		i = (i + 1) / 2;
	}
	while (*(str + 1))
	{
		_putchar(str[i]);
			i++;
	}
	_putchar('\n');
}
