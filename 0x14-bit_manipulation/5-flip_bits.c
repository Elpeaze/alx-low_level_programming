#include "main.h"
/**
 * flips_bits -  function that returns the number of bits you would need to flip
 * to flip to get from one number to another
 * @n: first given before flip
 * @m: second given for flip count
 * Return: 1
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int i, j, nFlips = 0;

	while (!(n == 0 && m == 0))
	{
		i = n & 1;
		j = m & 1;
		n = n >> 1;
		m = m >> 1;
	if (i != j)
		nFlips++;
	}
	return (nFlips);
}
