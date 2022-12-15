#include "main.h"

/**
 * _puts - prints string followed by a new line
 * @str: string to be printed to the standard output
 */
void _puts(char *str)
{
	int n;

	for (n = 0; str[n] != '\0'; n++)
		_putchar(str[n]);
	_putchar('\n');
}
