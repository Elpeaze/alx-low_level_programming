#include "main.h"

/**
 * _strcpy - copy source string to a destination sting
 * @dest: string to copy to
 * @src: string to copy from
 * Return: the destination string
 */
char *_strcpy(char *dest, char *src)
{
	int index;
	int letter;

	for (index = 0; ((letter = src[index]) != '\0'); index++)
	{
		dest[index] = letter;
	}
	dest[index] = letter;
	return (dest);
}
