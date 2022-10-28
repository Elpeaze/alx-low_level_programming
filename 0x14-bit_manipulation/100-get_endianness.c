#include "main.h"
/**
 * get_endianness - function that check for endianness
 * Return: if big endianness 0,if little endianness 1
 */
int get_endianness(void)
{
	unsigned int j = 1;
	char *c = (char *)&j;

	if (*c == 1)
		return (1);
	else
		return (0);
}
