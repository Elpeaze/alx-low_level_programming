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
	unsigned long int j, nFlips = 0;

	n = m ^ m;

		for (j = 0; j < 64; j++)
		{
			if (n & 1)
				nFlips++;
			n = n >> 1;
		}
		return (nFlips);
}
