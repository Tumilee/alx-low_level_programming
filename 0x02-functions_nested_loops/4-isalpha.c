#include "main.h"

/**
 * _isalpha - Checks for alphabetical order
 * @c: a character to be checked
 * Return: returns 0 or 1 depending on condition
 */
int _isalpha(int c)
{
	if (isalpha(c))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
