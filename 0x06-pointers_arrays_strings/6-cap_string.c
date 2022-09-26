#include "main.h"

/**
 * cap_string - function that capitalizes all words of a string.
 * @str: first digit in the multiplication
 * multiples of two digits
 * Return: the result o what was multiplied
 */
char *cap_string(char *str)
{
	int i = 0;
	int ch = str[i];
	int prev_space = 0;

	while (str[i] != '\0')
	{
		if (ch == '\n' || ch == ' ' || ch == '\t' || ch == '.')
			prev_space = 1;
		if (ch >= 'a' && ch <= 'z' && prev_space)
		{
			str[i] = ch - 32;
			prev_space = 0;
		}
		else if (ch != '\n' && ch != ' ' && ch != '\t' && ch != '.' && prev_space)
		{
			prev_space = 0;
		}
		i++;
	}
	return (str);
}
