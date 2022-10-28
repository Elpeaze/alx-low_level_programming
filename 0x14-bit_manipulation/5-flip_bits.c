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
	unsigned long int xor = n ^ m, nFlips = 0;

	while (xor > 0)
	{
		nFlips += (xor & 1);
		xor >>= 1;
	}
	return (nFlips);
}
