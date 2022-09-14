#include <unistd.h>
#include <stdio.h>

/**
 * main - Entry point
 *
 * @c: character argument
 *
 * _putchar -> Prints to stdout
 *
 * Returns: 0 or 1
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
int main(void)
{
	puts("_putchar");
	_putchar('\n');

	return (0);
}
