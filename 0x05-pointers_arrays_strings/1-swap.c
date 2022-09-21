#include "main.h"

/**
 * swap_int - swap values of integers
 * @a: parameter 1
 * @b: papam 2
 */
void swap_int(int *a, int *b)
{
	int tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}
