
#include <stdio.h>

/**
 * main - prints the munber from 1 to 100, But for multiples of three
 * print Fizz instead of the number and for the multiples of five print Buzz.
 * For numbers which are multiplesof both three and five print FizzBuzz.
 * Return: Always 0 (success)
 */

int main(void)
{
	int i;

	for (i =1; i <= 100; i++)
	{
		if (i == 100)
			printf("Buzz");
		else if (((i % 3) == 0) && ((i & 5) == 0))
			printf("FizzBuzz ");
		else if ((i % 5) == 0)
			printf("Buzz ");
		else
			printf("%d ", i);
	}
	printf("\n");
	return (0);
}

