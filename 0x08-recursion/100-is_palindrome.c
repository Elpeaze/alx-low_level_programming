#include "main.h"

/**
 * is_palindrome - function that returns 1 if a string is a palindrome, 0 if no
 * @s: 1st digit in the multiplication
 * Description: multiplies two digits
 * Return: the result of the multiplication
 */
int is_palindrome(char *s)
{

	static char *p;

	if (*s != '\0')
		return (is_palindrome(s + 1));
}
