#include "main.h"

/**
 * _puts - prints string followed by a new line
 * @str: string to be printed to the standard output
 */
void _puts(char *str)
{
	int i;
	char c;

	for (i = 0; (c != '\0'); i++)
	{
		c = str[i];
		if (c != '\0')
			;
		{
			_putchar(c);
			_putchar('\n');
		}
	}
}
