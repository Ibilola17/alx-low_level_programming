#include <stdio.h>
#include"main.h"
/**
 * prints_triangle - prints a triangle, followed by a new line
 * @size: is the size of the triangle
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
			for (j = size - i ; j > 0; j--)
			{
				_putchar(' ');
			}
			for (k = 0; k < i; k++);
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}

