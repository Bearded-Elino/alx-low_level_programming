void _putchar(char c);
#include "main.h"
/**
 * helperFunction - checks if sqrt of number exists
 * @num: number
 * @psqrt: possible sqrt of number
 *
 * Return: sqrt of number ot -1 for error
 */
int helperFunction(int num, int psqrt)
{
	if ((psqrt * psqrt) == num)
	{
		return (psqrt);
	}

	else
	{
		if ((psqrt * psqrt) > num)
			return (-1);
		else
			return (helperFunction(num, psqrt + 1));
	}
}

/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: number to find sqrt of
 *
 * Return: squareroot of n
 * -1 if n does not have a natural sqrt4
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	else
		return (helperFunction(n, 0));
}
