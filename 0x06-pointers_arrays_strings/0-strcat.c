#include "main.h"

/**
 * _strcat - Links two strings
 * @dest: A pointer to a character
 * @src: A pointer to another character
 * Return: dest
 */
char *_strcat(char *dest, char *src)
{

	int index = 0, dest_len = 0;

	while (dest[index++])
		dest_len++;

	for (index = 0; src[index]; index++)
		dest[dest_len++] = src[index];
	return (dest);
}
