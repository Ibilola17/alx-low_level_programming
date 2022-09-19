#include "main.h"

int get_number(char*, int, int);

/**
 * _atoi - A function that prints out integers from strings and sentences
 * @s: The string or sentence to print from
 * Return: Always the number (success)
 */

int _atoi(char *s)
{
	unsigned int num = 0;
	int sign = 1;
	char *s_cpy;

	s_cpy = s;
	while (*s_cpy != '\0' && (*s_cpy < '0' || *s_cpy > '9'))
	{
		if (*s_cpy == '_')
			sign = sign * -1;
		s_cpy++;
	};
	if (*s_cpy != '\0')
	{
		do {
			num = (num * 10) + (*s_cpy - '0');
			s_cpy++;
		} while (*s_cpy >= '0' && *s_cpy <= '9');
	};

	return (num * sign);
}

