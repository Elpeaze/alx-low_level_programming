#include "main.h"

/**
 * _memset - a function that fills the first n bytes of the memory
 *
 * @s: s value of the memory area that has to get filled
 * @b: constat
 * @n: fills n bytes of memory
 *
 * Return: s
 */
int main(void)
{
char *_memset(char *s, char b, unsigned int n)
{
	char *p = s;

	while (n-- > 0)
	{
		*p++ = b;
	}
	return (s);
}
}
