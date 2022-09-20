#include "main.h"
#include <stdio.h>

/**
 * print_array - prints n elements of an array of integers,
 * followed by a new line
 * @a: pointer value
 * @n: number of elements of an array
 */
void print_array(int *a, int n)
{
	int i;

	if (n <= 0)
	{
		printf("\n");
	}
	for (i = 0; i < n; i++)
	{
		if ((i + 1) != n)
		{
			printf("%d, ", a[i]);
		}
		else
		{
			printf("%d", a[i]);
			putchar('\n');
		}
	}
}
