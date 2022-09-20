#include "main.h"

/**
 * swap_int - this function swaps values of two pointers
 * @a: first pointer
 * @b: second pointer
 */
void swap_int(int *a, int *b)
{
	int swap;

	swap = *a;
	*a = *b;
	*b = swap;
}
