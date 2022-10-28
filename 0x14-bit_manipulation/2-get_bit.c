#include "main.h"
/**
 * get_bit - function returns a bit of a bit at a given index
 * @index: index
 * @n: given integer
 * Return: bit of given index
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int bit;

	if (index > 32)
		return (-1);

	bit = n >> index;

	return (bit & 1);
}
