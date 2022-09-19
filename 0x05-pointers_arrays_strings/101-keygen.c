#include "stdio.h"
#include "stdlib.h"
#include "time.h"

/**
 * main - program that generates random passwords
 * Return - always 0 (success)
 */

int main(void)
{
	int num;
	int sum;

	srand(time(NULL));
	sum = 0;
	while (sum <= 2645)
	{
		num = (rand() % 128);
		sum += num;
		printf("%c", num);
	}
	printf("%c", 2772 - sum);

	return (0)
}


