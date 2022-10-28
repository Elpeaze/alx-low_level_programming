#include "main.h"
/**
 * binary_to_uint - This function converts a binary num to an unsigned int
 * @b: binary number
 * Return: converted unsigned int
 */
unsigned int binary_to_uint(const char *b)
{
	int i;
	unsigned int convertedNum = 0;

	if (!b)
		return (0);

	for (i = 0; b[i] != '\0'; i++)
	{
		convertedNum = convertedNum << 1;

		if (b[i] != '0' && b[i] != '1')
			return (0);
		if (b[i] == '1')
			convertedNum = convertedNum | 1;
	}
	return (convertedNum);
}
