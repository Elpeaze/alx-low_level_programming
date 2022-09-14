#include"main.h"

/**
 * main - prints alphabet, in lower case followed by a new line
 * Return: 0 (success)
 */

void print_alphabet(void)
{
	char c = 'a';

	while (c <= 'z')
	{
		_putchar(c);
		c++;

	}
	_putchar('\n');

}
