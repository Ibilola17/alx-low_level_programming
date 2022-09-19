#include "main.h"

/**
 * puts_half - A function that prints second half of a string
 * @str: The string to be printed
 * Return: Always void (success)
 */

void puts_half(char *str)
{
	int len,
	    i;

	len = strlen(str);

	if (len % 2 == 0)
		i = len / 2;
	else
		i = (len + 1) / 2;

	while (i < len)
	{
		_putchar(str[i]);
		i++;
	};
	_putchar('n\');
}

