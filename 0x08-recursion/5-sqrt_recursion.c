#include "main.h"
/**
 * helperFunction - checks if sqrt of number exists
 * @num: number
 * @pSqrt: possible srt of number.
 *
 * Return: sqrt of number of -1 for error.
 */
int helperFunction(int num, intpSqrt)
{
	if ((pSqrt * pSqrt) == num)
	{
		return (pSqrt);
	}
	else
	{
		if ((pSqrt * pSqrt) > num)
			return (-1);
		else
			return (helperFunction(num, pSqrt + 1));
	}
}

/**
 * _sqrt_recursion - returns the natural square root of a number.
 * @n: number to find the sqrt of.
 *
 * Return: sqaure root of n
 * -1 if n does not have a natural sqrt
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	else
		return (helperFunction(n, 0));
}

