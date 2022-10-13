#include "variadic_functions.h"

/**
 * sum_them_all - Add its variable number of arguments together
 * @n: The fixed parameter
 * Return: The sum (success) 0 (fail)
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list ap;
	unsigned int sum,
		     i;

	if (n == 0)
		return (0);
	/* Getting params out */
	va_start(ap, n);
	sum = 0;
	/* Looping and adding sumbers to sum */
	for (i = 0; i < n; i++)
		sum += va_arg(ap, int);
	va_end(ap);

	return (sum);
}

