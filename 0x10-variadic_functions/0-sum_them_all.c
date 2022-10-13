#include <stdio.h>
#include <stdarg.h>

/**
 * sum_them_all - a program that returns sum of all its parameters
 * @n: number of arguments(excluding n itself)
 * Return: returns an int
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list args;
	int sum = 0;
	unsigned int i;

	var_start(args, n);

	for (i = 0; i < n; i++)
	{
		sum += va_args(args, int);
	}
	va_end(args);

	return (sum);
}


