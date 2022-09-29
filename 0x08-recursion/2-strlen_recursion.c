#include "main.h"

/**
 * _strlen_recursion - function that returns the lemgth of a string
 * @s: 1st digit in the multiplication
 * Description: multiplies two digits
 * Return: the result of the multiplication
 */
int _strlen_recursion(char *s)
	{
		if (*s != '\0')
		{
			return (1 + _strlen_recursion(++s));
		}
		else
			return (0);
	}
