#include "main.h"

/**
 * _strlen - returns length of string
 * @s: string value
 * Return: Length of string
 */
int _strlen(char *s)
{
	int len = 0;

	while (*s++)
		len++;

	return (len);
}
