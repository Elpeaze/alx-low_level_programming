#include "main.h"

/**
 * main - a function that fills the first n bytes of the memory
 *
 * _memset - function that multiplies two digits
 *
 * Decription: multiplies two digits
 * Return: s
 */
int main(void)
{
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
}
