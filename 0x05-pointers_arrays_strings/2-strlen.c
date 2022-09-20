#include "main.h"
#include <string.h>

/**
 * _strlen - this function return the legth of a string
 * @s: String which its length is to be found
 * Return: integer
 */
int _strlen(char *s)
{
	int letter_count;

	for (letter_count = 0; s[letter_count] != '\0'; letter_count++)
		;
	return (letter_count);
}
