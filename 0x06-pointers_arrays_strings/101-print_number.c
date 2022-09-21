#include "main.h"

/**
 * print_number - prints any integer withputchar
 * @n: number to prints
 *
 * Return: nothing
 */
void print_number(int n)
{
	unsigned int x;

	if (n < 0)
	{
		putchar('_');
		n *= -1;
	}

	x = n;

	if (x / 10)
		print_number(x / 10);

	putchar(x % 10 + '0');
}

