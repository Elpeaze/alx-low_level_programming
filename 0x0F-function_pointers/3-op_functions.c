#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"
/**
 * op_add - add two numbers
 * @a: first number
 * @b: second number
 * Return: result
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - sub two numbers
 * @a: first number
 * @b: second number
 * Return: result
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - multiplies two numbers
 * @a: first number
 * @b: second number
 * Return: result
 */
int op_div(int a, int b)
{
	return (a * b);
}

/**
 * op_div - divide two numbers
 * @a: first number
 * @b: second number
 * Return: result
 */
int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - divides two digits and returns the remainder
 * @a: digit to be divided
 * @b: digit to be divided by
 * Description: divides a by b and returns the remainder
 * Return: the remainder
 */
int op_mod(int a, int b)
{
	return (a % b);
}
