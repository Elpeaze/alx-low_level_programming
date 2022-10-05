#include <stdlib.h>
#include "main.h"

/**
 * *create_array - creates an array of chars,
 * and initializes it with a specific char
 * @size: size of the array to create
 * @c: char to initialize the array c
 *
 * Return: pointer to the array (Success), NULL (Error)
 */
char *create_array(unsigned int size, char c)
{
	char *mem, *head;

	if (!size)
		return (NULL);
	mem = (char *) malloc(size);
	if (mem == NULL)
		return (NULL);
	head = mem;
	while (size > 0)
	{
		*mem = c;
		mem++;
		size--;
	}
	return (head);
}
