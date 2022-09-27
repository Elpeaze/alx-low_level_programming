#include <stdio.h>

/**
 * print_diagsums - multiplies two digits
 * @a: 1st digit in the multiplication
 * @size: 2nd digit to be multiplied
 * Description: multiplies two digits
 * Return: the result of the multiplication
 */
void print_diagsums(int *a, int size)
{
	int i, j, sum;

	for (i = 0; i < size; i++) /*print first diagonal*/
		sum += a[i][i];
	printf("%d, ", sum);

	sum = 0; /*print second diagonal*/
	for (i = 0, j = size - 1; i < size && j >= 0; i++, j--)
		sum += a[i][j];
	printf("%d", sum);
}
