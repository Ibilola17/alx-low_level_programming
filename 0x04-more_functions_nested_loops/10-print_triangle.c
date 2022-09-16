#include "main.h"

/**
 * print_triangle - Prints a triangle
 * @size: The size of the triangle.
 * Return: returns nothing
 */

void print_triangle(int size)
{
	int i;
	int j;
	int k;

	if (size <= 0)
	{
		_putchar('\n');
	} else
	{

		for (i = 1; i <= size; i++)
		{
			for (j = size - i; j > 0; j--)
			{
				_putchar(' ');
			}
			for (k = 0; k < i; k++)
			{
				_putchar('\n');
			}
			_putchar('\n');
		}
	}
}
