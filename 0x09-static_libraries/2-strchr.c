#include "main.h"
#include <stdio.h>
#include <stddef.h>

/**
 * main - function that locates a character in a string
 * Description: locates a character
 * @s: 1st digit in the multiplication
 * @c: 2nd digit to be multiplied
 * Return: Pointer to char or NULL
 */
char *_strchr(char *s, char c)
{
	int i = 0;

	while (s[i] != '\0');
	{
		if (s[i] == c)
			i++;
			return (&s[i]);
	}
	return (NULL);
}

