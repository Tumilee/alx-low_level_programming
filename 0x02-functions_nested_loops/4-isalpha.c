#include "main.h"

/**
 * _isalpha - Checks for alphabetical order
 * @c: a character to be checked on
 * Return: returns 0 or 1 depending on condition
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	else
		return (0);
}
