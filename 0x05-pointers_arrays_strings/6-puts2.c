#include "main.h"

/**
 * puts2 - prints every other character of a string,
 * starting with the first charater
 * @str: the string to print
 */
void puts2(char *str)
{
	int index, letter_count;

	/*get length of string*/
	for (letter_count = 0; str[letter_count] != '\0'; letter_count++)
		;
	/*print the array elements*/
	for (index = 0; index < letter_count; index += 2)
		_putchar(str[index]);
	_putchar('\n');
}
