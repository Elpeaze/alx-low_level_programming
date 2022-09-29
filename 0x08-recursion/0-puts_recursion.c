#include "main.h"

/**
 * main - function that prints a string
 * _puts_recursion - function that calls _putchar
 * @s: pointer
 * Description: prints string of characters
 * Return: the string
 */
void _puts_recursion(char *s)
{
	if (*s != '\0')
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
	else
		_putchar('\n');
}
