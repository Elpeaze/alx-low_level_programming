#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * _realloc - multiplies two digits
 * @ptr: 1st digit in the multiplication
 * @old_size: 1st digit in the multiplication
 * @new_size: 1st digit in the multiplication
 * Description: multiplies two digits
 * Return: the result of the multiplication
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	unsigned int i;
	char *new_ptr;
	char *ptr2 = ptr;

	if (new_size == 0)
	{
		if (ptr != NULL)
			free(ptr);
		ptr = NULL;
		return (NULL);
	}

	if (ptr == NULL)
	{
		new_ptr = (malloc(new_size));
		if (new_ptr == NULL)
			return (NULL);
		return (new_ptr);
	}

	if (new_size == old_size)
		return (ptr);

	new_ptr = (char *)malloc(new_size);
	if (new_ptr == NULL)
		return (NULL);

	/*copy from old_size to new_size*/
	for (i = 0; i < new_size && i < old_size; i++)
	{
		new_ptr[i] = ptr2[i];
	}
	free(ptr);
	ptr = NULL;
	ptr2 = NULL;
	return (new_ptr);
}
