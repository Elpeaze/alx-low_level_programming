#include "main.h"
/**
 * binary_to_uint - This function converts a binary num to an unsigned int
 * @b: binary number
 * Return: converted unsigned int
 */
unsigned int binary_to_uint(const char *b)
{
	int u;
	unsigned int z = 0;

	if (!b)
		return (0);

	for (u = 0; b[u] != '\0'; u++)
	{
		u = u << 1;

		if (b[u] != '0' && b[u] != '1')
			return (0);
		if (b[u] == '1')
			u = u | 1;
	}
	return (u);
}
