#include "main.h"

/**
 * clear_bit - function that sets the value of a bit to 0 at a given index
 * @n: the number in which to clear its bits
 * @index: the index
 * Return: 1 if successful or -1 if unsuccessful
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	long int bit;

	if (index > 63)
		return (-1);
	bit = 1 << index;
	*n = *n & ~bit;

	return (1);
}
