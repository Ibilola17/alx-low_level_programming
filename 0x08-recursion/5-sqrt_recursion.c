#include "main.h"

int find_sqrt(int num, int root);
int _sqrt_recursion(int n);

/**
 * find_sqrt - finds the natural square root of an inputed number.
 * @num: the number to find the square root of
 * @root: the root to be tested
 *
 * Return: If the number has a natural square root
 * If the number does not have a natural square root - - 1.
 */
int find_sqrt(int num, int root)
{
	if ((root * root) == num)
		return (root);
}

