#include "main.h"

/**
 * leet - function that encodes a string into 1337.
 * @str: 1st digit in the multiplication
 * Description: multiplies two digits
 * Return: multiplication result
 */
char *leet(char *str)
{
	int letter, i = 0;

	while (str[i] != '\0')
	{
		letter = str[i];
		if (letter == 'A' || letter == 'a')
			str[i] = '4';

		if (letter == 'e' || letter == 'E')
			str[i] = '3';

		if (letter == 'o' || letter == 'O')
			str[i] = '0';

		if (letter == 't' || letter == 'T')
			str[i] = '7';
		if (letter == 'l' || letter == 'L')
			str[i] = '1';
		i++;
	}
	return (str);
}



