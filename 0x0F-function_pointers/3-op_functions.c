#include "3-calc.h"

int op_add(int a, int b);
int op_sub(int a, int b);
int op_div(int a, int b);
int op_mul(int a, int b);
int op_mod(int a, int b);

/**
 * op_add - a function to add two numbers
 * @a: first number
 * @b: second number
 * Return: a+b
 */

int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - a function to substract two numbers
 * @a: first number
 * @b: second number
 * Return: a-b
 */

int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_div - a function to division two numbers
 * @a: first number
 * @b: second number
 * Return: a/b
 */

int op_div(int a, int b)
{
	return (a / b);
}
/**
 * op_mul - a function to multiplection two numbers.
 * @a: first number
 * @b: second number
 * Return: a*b
 */

int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_mod - a function to sum remainder of two numbers
 * @a: first number
 * @b: second number
 * Return: remainder of a&b
 */

int op_mod(int a, int b)
{
	return (a % b);
}
