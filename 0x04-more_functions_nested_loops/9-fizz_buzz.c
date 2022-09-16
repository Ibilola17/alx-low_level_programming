#include <stdio.h>

/**
 * main - program that prints either number
 * or fizz or buzz or fizzbuzz
 * Return: Always 0 (success)
 */

int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (i == 100)
			printf("Buzz");
		else if (((i % 3) == 0) && ((i % 5) == 0))
			printf("FizzBuzz");
		else if ((i % 3) == 0)
			printf("Buzz");
		else if ((i % 5) == 0)
			printf("Buzz");
		else
			printf("%d", i);
	}
	printf("\n");
	return (0);
}

