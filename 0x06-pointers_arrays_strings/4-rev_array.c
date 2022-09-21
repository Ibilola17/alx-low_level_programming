#include "main.h"

/**
 * reverse_array - A function that reverses the input array
 * @a: The input array
 * @n: The length of the input array
 * Return always void (success)
 */

void reverse_array(int *a, int n)
{
	int temp,
	    start = 0,
	    end = n - 1;

	while (start < end)
	{
		temp = a[start];
		a[start] = a[end];
		a[end] = temp;
		start++;
		end--;
	};
}

